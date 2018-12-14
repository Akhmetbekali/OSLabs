#include <stdio.h>
#include <time.h>
#include <pthread.h>
#define TRUE 1
#define N 100 
int count = 0; 
char buffer[N];
time_t start;
int i = 0;
pthread_mutex_t mutex;
pthread_cond_t cc, cp;

void *producer(void *ptr)
{

 while (TRUE) { 
  pthread_mutex_lock(&mutex);
  
  if (count == N){
   pthread_cond_wait(&cp, &mutex);
  }
  buffer[count] = 'p';
  count = count + 1;
  time_t end = time(NULL);
  double fraction = (double)(end - start);

  if(fraction > i*60){
   printf("Time of execution:%f\n", ((double)(end - start)));
   i++;
  }

  if (count == 1){
   pthread_cond_signal(&cc);
   pthread_mutex_unlock(&mutex);
  }
 }
}

void *consumer(void *ptr)
{
 while (TRUE) {
  pthread_mutex_lock(&mutex);
  if (count == 0){
    pthread_cond_wait(&cc, &mutex);
  }
  buffer[count] = 'c';
  count = count - 1;
  if (count == N - 1){
   pthread_cond_signal(&cp);
   pthread_mutex_unlock(&mutex);
  }
 }
}


int main(int argc, char const *argv[]){
 start = time(NULL);
 pthread_t pro, con;
 pthread_mutex_init(&mutex, 0);
 pthread_cond_init(&cc, 0);
 pthread_cond_init(&cp, 0);
 pthread_create(&con, 0, consumer, 0);
 pthread_create(&pro, 0, producer, 0);
 pthread_join(pro, 0);
 pthread_join(con, 0);
 pthread_cond_destroy(&cc);
 pthread_cond_destroy(&cp);
 pthread_mutex_destroy(&mutex);
 
 return 0;

}