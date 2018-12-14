#include <pthread.h>
#include <stdio.h>

void* doit(void* a){
  printf("Thread %d\n", a);
  pthread_exit(0);
}

void ex2(int n) {
  pthread_t threads[n];
  for(int i=0; i<n; i++){
    pthread_create(&threads[i], NULL, doit, (void *)i);
    sleep(1);
  }
  for(int i = 0; i < n; i++){
    pthread_join(threads[i], NULL);
  }
}

void ex1(int n){
  pthread_t threads[n];
  for(int i=0; i<n; i++){
    pthread_create(&threads[i], NULL, doit, (void *)i);
    pthread_join(threads[i], NULL);
    sleep(1);
  }  
}

int main(void){
  int n = 22;
  ex1(n);
  ex2(n);
  return 0;
}
