#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
	int fd,fd1,n;
	char buff[64];
	fd=open("F1.txt",O_CREAT |O_RDWR,0644);
	write(fd,"This is :operating systems labs",31);//writing to file.
	off_t pos;
	pos=lseek(fd,14,SEEK_SET);//The file offset is moved 14 bytes ahead from the start of the file.
	n=read(fd,buff,6);//The file is read from byte 15 up to byte 20.
	fd1=open("F4.txt",O_CREAT | O_WRONLY,0644);
	write(fd1,buff,n);
	return 0;
}
