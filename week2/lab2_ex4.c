#include <stdio.h>

void swap (int *x, int *y){
  int z = *x;
  *x = *y;
  *y = z;
}
int main(void) {
  int x, y;
  scanf("%d", &x);
  scanf("%d", &y);
  swap(&x, &y);
  printf("%d ", x);
  printf("%d", y);
  
}