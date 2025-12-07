# Example09-execl()<br>

## Purpose<br>

The purpose of this code is to demonstrate how the execl() function replaces the currently running process with an entirely new program. The program first prints a few messages, and then, with the call execl("/bin/date", "date", NULL);, it replaces its own process image with the “date” command. If exec succeeds, the remaining lines of the program do not execute because the C program no longer exists and has been replaced by the date command. In this way, it is shown practically that exec is a 'non-returning' system call that directly replaces the process with another program.<br>

## System Calls / Functions Used<br>

System calls: execl(), getpid()<br>
Functions: printf(), perror()<br>

## How it Works<br>
When the program runs, it first prints the initial messages and displays its own PID. Then the call execl("/bin/date", "date", NULL); is executed. This call attempts to completely remove the current process image and replace it with the date command. If exec succeeds, the program no longer executes any of the remaining C code because the running process has now become the "date" program. However, if exec fails due to an error, perror() is executed and an error message is printed. In short, the program is designed to demonstrate how exec replaces the current process with a new program.<br>

## How to Compile and Run <br>

gcc main.c -o app<br>
./app<br>
