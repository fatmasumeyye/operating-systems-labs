#include <stdio.h>      // printf, perror 
#include <stdlib.h>     // exit, EXIT_SUCCESS, EXIT_FAILURE
#include <unistd.h>     // fork, getpid, getppid, sleep
#include <sys/types.h>  // pid_t 
#include <sys/wait.h>   // wait, waitpid

int main(){
	pid_t c1,c2;
	c1=fork();

	if(c1<0){
		perror("Failed to create c1 child process");
		exit(EXIT_FAILURE);
	}

	else if(c1==0){
	//--------c1 : child process--------
		printf("c1 child process PİD: %d\n",getpid());
		printf("parent process PİD: %d\n",getppid());
		exit(0);
	}

	else{
	//--------parent process-----------
		c2=fork();
		if(c2<0){
			perror("Failed to create c2 child process");
			exit(EXIT_FAILURE);

		}
		else if(c2==0){
		//---------c2 : child process
			printf("c2 child process PİD: %d\n",getpid());
			printf(" parent process PİD: %d\n",getppid());
			sleep(2);
			printf("c2 child process PİD: %d\n",getpid());
			printf(" parent process PİD: %d\n",getppid());

			exit(0);
		}
		//-------parent process----------
		waitpid(c1, NULL,0);
		printf("Parent ending. PID: %d\n", getpid());

	}

	return 0;
}
