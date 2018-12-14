#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void) {
  int x = INT_MAX;
  float y = FLT_MAX;
  double z = DBL_MAX;
  printf("Maximum integer: %d\n", x);
  printf("Size: %ld\n", sizeof(x));
  printf("Maximum float: %f\n", y);
  printf("Size: %ld\n", sizeof(y));
  printf("Maximum double: %lf \n", z);
  printf("Size: %ld\n", sizeof(z));
}