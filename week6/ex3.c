#include <stdio.h>
#include <signal.h>


void f(){
	printf("%s\n", "Ti nazhal Ctrl C");
}

void main() {

	signal(SIGINT, f);
	while (1){

	}
}
