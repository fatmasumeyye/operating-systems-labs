#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>

int main() {
        int fd1, fd2, fd3, n;
        char buff[100];

        fd1 = open("data.txt", O_CREAT | O_RDONLY, 0644); 
        // Opens data.txt in read-only mode, creates it if it does not exist

        n = read(fd1, buff, sizeof(buff)); 
        // read() returns the number of bytes actually read

        fd2 = open("yeni.txt", O_CREAT | O_WRONLY | O_APPEND, 0644); 
        // Opens yeni.txt in write mode, creates it if it does not exist, appends data at the end

        write(fd2, buff, n); 
        // Appends the content of data.txt to yeni.txt

        fd3 = open("copyfile.txt", O_CREAT | O_WRONLY | O_TRUNC, 0644); 
        // Opens copyfile.txt in write mode, creates it if it does not exist, truncates existing content

        write(fd3, buff, n); 
        // Copies the content of data.txt into copyfile.txt

        return 0;
}

