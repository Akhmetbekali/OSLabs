#include <stdio.h>
#include <signal.h>
#include <stdlib.h>
#include <unistd.h>


void main() {

	pid_t f;

	f = fork();

	if (f == 0){
		while(1){
			printf("I'm alive\n");

			sleep(1);
		}
	}
	else {
		sleep(10);
		kill(f, SIGTERM);
	}
}
