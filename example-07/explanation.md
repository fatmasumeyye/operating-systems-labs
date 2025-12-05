# Example07-orphan process<br>

## Purpose<br>

The purpose of this application is to demonstrate how the C2 child process continues to run after its parent process terminates, becoming an orphan process, and to observe parent-child relationships using system calls such as fork, getpid, getppid, and waitpid. Through this program, you can practically understand how processes are created, how their parents change, and how an orphan process is formed.<br>

## System Calls / Functions Used<br>

System calls: fork(), getpid(), getppid(), waitpid(), sleep()<br>
Functions: exit(), perror(), printf()<br>

## How It Works<br>

The parent process starts and prints its own PID to the screen.<br>
The parent creates the C1 child process.<br>
C1 starts, displays its PID and parent PID, and terminates immediately.<br>
The parent creates the C2 child process.<br>
C2 starts, displays its parent PID, waits until the parent process terminates (sleep), and then displays its parent PID again.<br>
After the parent terminates, C2’s parent PID changes → C2 becomes an orphan process.<br>
The parent only waits for C1 to finish (waitpid) and then terminates.<br>
This program allows observing the formation of an orphan process and the parent-child relationships.<br>

## How to Compile and Run<br>
gcc main.c -o app<br>
./app<br>
