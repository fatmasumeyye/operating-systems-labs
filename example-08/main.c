#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main() {
	pid_t c1,c2;
	c1=fork();

	if(c1<0) {
		perror("The child process could not be created.\n");
		return 1;
	}

	else if(c1==0) {
	//--------c1 child process----
		printf("c1 Child process PİD: %d\n",getpid());
		printf("parent process PİD: %d\n",getppid());
		exit(0);
	}

	else{
	//-------parent process--------
		sleep(2);

		c2=fork();

		if(c2<0){
			perror("The child process could not be created.\n");
			return 1;
		}

		else if(c2==0){
		//--------c2 child process------
			sleep(20);
			printf("c2 Child process PİD: %d\n",getpid());
			printf("parent process PİD: %d\n",getppid());
			exit(0);
		}
		else{
		//--------parent process-----------
			printf("c2 Child process PİD: %d\n",c2);
			printf("parent process PİD: %d\n",getpid());
			exit(0);
			
			
		}
	}
	


	return 0;
}
