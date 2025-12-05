# Example 01 - write()/read() system call<br>

## purpose<br>
The purpose of this program is to:<br>
-Read up to 15 characters from the standard input using the read() system call.<br>
-Write those characters back to the screen using the write() system call.<br>
-Display the number of bytes actually read using printf().<br>

This example demonstrates how low-level I/O works in Linux using system calls.<br>

## System calls/Functions Used<br>
System calls :<br>
-write()<br>
-read()<br>
Functions:<br>
printf()<br>

## How İt Works<br>
The program reads up to 15 characters from the user and immediately prints back whatever was entered. After that, it shows the number of bytes the system call actually read. This demonstrates basic low-level input/output: reading raw data, writing it back, and reporting the byte count.<br>

## How to Compile and Run<br>
$ gcc main.c -o app<br>
$ ./app<br>
