# Example03-lseek()<br>

## Purpose<br>
Bytes 15 through 20 of the file are being read.<br>

## System Calls/Functions Used<br>
system calls:lseek(), write(), read(), open()<br>

## How it Works<br>
First, the file F1.txt is created and filled with content. Then, using lseek, the file pointer is moved 14 bytes from the beginning. The file reads 6 characters starting from the current pointer position. After that, the file F4.txt is created, and the content that was just read is written into it.<br>

## How to Compile and Run<br>
gcc main.c -o app<br>
./app<br>


