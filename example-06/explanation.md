# Example06-wait()<br>

## Purpose<br>
To demonstrate the parent–child process relationship and to show how system calls like wait(), fork(), open(), and write() work together.<br>

Child → creates the file<br>
Parent → takes text from the user and writes it into the file<br>
Parent should not start before the child finishes → therefore wait() is used.<br>

## System Calls / Functions Used<br>

System calls: fork(), wait(), open(), write(), close()<br>
Functions: printf(), perror(), fgets(), strlen(), exit()<br>

# How It Works<br>
Fork() creates a parent and a child process.<br>
The child process creates the file.<br>
The parent process waits for the child to finish using wait().<br>
After the child exits, the parent continues:<br>
It takes input from the user<br>
It writes the received data to the file (write())<br>
Finally, the parent closes the file (close()).<br>

## How to Compile and Run<br>
gcc main.c -o app<br>
./app<br>
