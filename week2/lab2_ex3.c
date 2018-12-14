#include <stdio.h>

int main(void) {
  int n;
  scanf("%d", &n);
  for (int i = 1; i <= n; i++){
    for (int j = 0; j <= 2*n-1; j++){
      if (j <= n-i){
        putchar(' ');
      }
      else if (j >= n + i){
        putchar(' ');
      }
      else 
        putchar('*');
    }
    printf("\n");

  }
}