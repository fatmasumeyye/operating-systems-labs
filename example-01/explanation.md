#Example 01 - write()/read() system call

##purpose
The purpose of this program is to:
-Read up to 15 characters from the standard input using the read() system call.
-Write those characters back to the screen using the write() system call.
-Display the number of bytes actually read using printf().

This example demonstrates how low-level I/O works in Linux using system calls.

##System calls/Functions Used
System calls :
-write()
-read()
Functions:
printf()

##How İt Works
The program reads up to 15 characters from the user and immediately prints back whatever was entered. After that, it shows the number of bytes the system call actually read. This demonstrates basic low-level input/output: reading raw data, writing it back, and reporting the byte count.

##How to Compile and Run
$ gcc main.c -o app
$ ./app
