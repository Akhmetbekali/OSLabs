#include <stdio.h>
#include <stdlib.h>


int main(void) {
	int PID = fork(), n;
	if (PID > 0) {
	printf("Hello from parent [%d - %d]\n", PID, n);
	} 
	else if (PID == 0) { 
	printf("Hello from child [%d - %d]\n", PID, n);
	}
	else {
		return EXIT_FAILURE;
	}
	return EXIT_SUCCESS;
}
