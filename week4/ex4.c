#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LEN 256

int main() {
    char inp[MAX_LEN];
    while(1) {
        printf("   $ ");
        fgets(inp, MAX_LEN, stdin);
        system(inp);
    }
    
    return 0;
}