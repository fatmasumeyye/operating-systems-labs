#include <stdio.h>      // printf
#include <unistd.h>     // fork, getpid, getppid
#include <sys/types.h>  // pid_t

int main() {
	pid_t p1,p2 ;
	
	printf("Parent process started PİD: %d\n",getpid());

	p1=fork();

	if(p1<0){
		perror("Fork failed");
		return 1;
	}

	else if(p1==0) {
		printf("I am child p1 PİD: %d,parent PİD: %d\n",getpid(),getppid()); //child process created.
		return 0;	
	}

	p2=fork();
	if(p2<0){
		perror("Fork failed");
		return 1;
	}

	else if(p2==0) {

		printf("I am child p2 PİD: %d,parent PİD: %d\n",getpid(),getppid());//child process created.
		return 0;	
	}

	printf("Parent process continues, PID: %d, Child P1 PID: %d\n",getpid(),getppid());

	return 0;
}
