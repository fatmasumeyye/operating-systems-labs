#include <stdio.h> // printf, fgets
#include <unistd.h> // fork, write, close
#include <sys/types.h> // pid_t
#include <sys/wait.h> // wait
#include <fcntl.h> // open, O_CREAT, O_WRONLY
#include <stdlib.h> // exit
#include <string.h> // strlen

int main(){
	pid_t p;
	int fd;
	char buff[100];

	p=fork();

	if(p<0){
		perror("The child process could not be created.\n");
		return 1;
	}
	//----child process------
	else if(p==0){
		fd=open("Relation.txt",O_CREAT,0644);
		
		if(fd<0){
			perror("File could not be created\n");
			exit(1);
		}
		printf("Child: Relation.txt created successfully.\n");
		close(fd);
		exit(0);
	}
	else{
	//-----parent process--------
		wait(NULL);

		fd=open("Relation.txt",O_WRONLY | O_APPEND);

		if(fd<0){
			perror("Parent: Could not open the file.\n");
			return 1;

		}
		printf("Enter text to write into the file: \n");
		fgets(buff,sizeof(buff),stdin);//It takes the text from the user.

		write(fd, buff, strlen(buff));

		close(fd);
	}
	

	return 0;
}
