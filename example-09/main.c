#include <stdio.h>
#include <unistd.h>
#include <errno.h>

int main(){
	printf("Program started. PID: %d\n", getpid());
        printf("Now the 'date' command will be executed using execl()...\n");


	// Replace the current process image with the "date" program
   	 execl("/bin/date", "date", NULL);

   	 // If execl returns, it means it has failed
    	perror("execl failed");
   	printf("This line executed because execl() failed.\n");

	return 0;
}
