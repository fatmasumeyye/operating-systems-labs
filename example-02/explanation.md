# Example02-open() system calls<br>

## purpose
The purpose of this application is to reinforce the use of the open system call. It appends the contents of one file to another and completely copies the contents of a file to a different file.<br>
## System Calls / Functions Used<br>
system calls:open(), write(), read()<br>

## How İt Works<br>
The program reads data from a file.<br>
It writes this data to two different files:<br>
-It appends to one file (existing content is preserved).<br>
-It writes a full copy to the other file (existing content is overwritten).<br>

## how to Compile and Run<br>
gcc main.c -o app<br>
./app<br>
