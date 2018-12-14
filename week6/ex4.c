#include <stdio.h>
#include <signal.h>


void handler_odin(){
	printf("%s\n", "Eto SIGKILL");
}


void handler_dva(){
	printf("%s\n", "Eto SIGSTOP");
}


void handler_tri(){
	printf("%s\n", "Eto SIGUSR1");
}

void main() {

	signal(SIGKILL, handler_odin);
	signal(SIGSTOP, handler_dva);
	signal(SIGUSR1, handler_tri);

	while (1){

	}
}
