#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

int main() {
	int oldfd,newfd;
	char buff[64];

	oldfd=open("seeking",O_RDWR);
	newfd=dup(oldfd);
	read(oldfd,buff,5);
	lseek(oldfd,0,SEEK_END);
	write(newfd,"new data",8);

	close(oldfd);
	close(newfd);
	return 0;
}
