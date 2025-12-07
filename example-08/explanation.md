# Example08-Zombie process<br>

## Purpose<br>

The purpose of this code is to demonstrate how to create both a zombie process and an orphan process within the same program. The first fork creates C1, which terminates immediately, but since the parent does not wait for it, C1 becomes a zombie for a short time. The parent then performs a second fork to create C2. While C2 is put to sleep to keep it running longer, the parent process exits immediately. Once the parent dies, C2 becomes an orphan process and is adopted by init (systemd). Thus, the program creates a scenario where C1 becomes a zombie and C2 becomes an orphan.<br>

## System Calls / Functions Used<br>

System calls: fork(), getpid(), getppid(), sleep(), exit()<br>
Functions: printf(), perror()<br>

## How it Works<br>

When the program runs, the first fork() is called and a child process named C1 is created. C1 immediately runs, prints its own PID and its parent’s PID, and then terminates right away.However, since the parent does not use wait() to collect C1, C1 becomes a zombie process for a short time.<br>
The parent continues executing and, after waiting for a short time (sleep(2)), calls fork() again. This time, a second child process named C2 is created. C2 is put to sleep for a long duration (sleep(20)), while the parent process immediately terminates with exit(). When the parent dies, C2 no longer has a parent and therefore becomes an orphan process. It is automatically adopted by the init (systemd) process.<br>
Thus, the program demonstrates two different situations at the same time:<br>
C1 → zombie<br>
C2 → orphan<br>

## How to Compile<br>
gcc main.c -o app<br>
./app<br>


