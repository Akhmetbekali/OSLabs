#include <stdio.h>
#include <stdlib.h>


int main(void) {
	for (int i = 0; i < 3; i++) {
		// For 5 times :
		// for (int i = 0; i < 5; i++) {
		fork();
		sleep(5);
	}
	return EXIT_SUCCESS;
}

// Result is tree that displays each for loop
