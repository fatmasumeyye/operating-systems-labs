#Example04-dup()<br>

##Purpose<br>
dup system call allowing different file descriptors to point to the same file.<br>

##System calls/functions Used<br>
system calls:open(), write(), read(), close(), lseek()<br>

##How it Works<br>
This program opens a file and creates a second file descriptor that points to the same file. It reads the first five characters using the original descriptor, then moves the file position to the end and appends new data using the duplicated descriptor. Finally, it closes both descriptors to complete the operation.<br>

##How to Compile and Run<br>
gcc main.c -o app<br>
./app<br>
