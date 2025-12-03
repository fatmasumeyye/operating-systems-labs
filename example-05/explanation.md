#Example05-fork()<br>

##Purpose<br>
This application aims to demonstrate the creation of two separate child processes by a parent process using the fork() system call and to display the PID relationships between the processes on the screen.<br>

##System Calls / Functions Used<br>
System calls:fork()<br>
Functions:getpid(), getppid(), perror,printf()<br>

##How İt Works<br>
In this program, the Parent process starts first and prints its own PID. Using fork(), the first child process (P1) is created; P1 prints its own PID and its parent’s PID, then terminates. The Parent then creates the second child process (P2) using fork(); P2 also prints its own PID and parent’s PID, then terminates. The Parent process prints its own PID and the child PIDs. This way, the creation of two separate child processes by the Parent and the PID relationships between the processes can be observed.<br>

##How to Compile and Run<br>
gcc main.c -o app<br>
./app<br>
