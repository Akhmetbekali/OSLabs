#include <stdio.h>
#include <signal.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>


void main() {

	int status;
	int ar[2];
	pipe(ar);

	pid_t idOne, idTwo;

	idOne = fork();
	idTwo = fork();

	if (idOne != 0 & idTwo != 0){
		write(ar[1], &idTwo, sizeof(idTwo));
		waitpid(idTwo, &status, WUNTRACED);
		printf("Status:%d\n", status);
	}
	else if (idOne == 0){
		sleep(3);
		read(ar[0], &idTwo, sizeof(idTwo));
		kill(idTwo, SIGSTOP);
	}
	else {
		while(1){
			sleep(1);
			printf("Second child is alive\n");
		}	
	}
}
