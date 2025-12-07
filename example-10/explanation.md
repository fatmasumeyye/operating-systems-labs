# Example10 – Create Threads<br>

## Purpose<br>

The purpose of this application is to use POSIX threads (pthreads) to create two separate threads (T1 and T2) and assign them different tasks to demonstrate basic multithreading. Thread T1 creates a file, while thread T2 writes data into the same file. This way, thread creation, thread synchronization, and file operations are applied together.<br>

## System Calls / Functions Used<br>
System calls: pthread_create(), pthread_join()<br>
Functions: fopen(), fprintf(), fclose(), perror()<br>

## How It Works<br>

When the program starts, thread T1 is created first. The task of T1 is to create a file named “Thread.txt”. After the file is created, the main thread waits for T1 to finish completely by calling pthread_join(). This ensures that thread T2 does not start writing before the file is created. Once T1 is finished, T2 is created and writes the text “Hello its T2” into the same file. When both threads complete their tasks, the program terminates. This approach ensures that threads run in a sequential and safe manner.<br>

## How to Compile and Run<br>
gcc main.c -o app<br>
./app<br>
