#include <stdio.h>
#include <unistd.h>
#define N 100 

int main()
{
  int ar[2];

  pipe(ar);

  char *str1 = "Text";
  char str2[N];
  
  write(ar[1], str1, N);
  read(ar[0], str2, N);

  printf("%s\n", str2);
}