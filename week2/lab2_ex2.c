#include <stdio.h>
#include <string.h>

int main(void) {
  char input[1000];
  fgets(input, 1000, stdin);
  int n = strlen(input);
  for (int i = n; i >= 0; i--){
    putchar(input[i]);
  }
  return 0;
}