#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void* createFile(void* arg) {
    FILE* file = fopen("Thread.txt", "w");  
    if (file == NULL) {
        perror("T1: File creation failed");
        pthread_exit(NULL);
    }

    printf("T1: Thread.txt created successfully.\n");
    fclose(file);
    pthread_exit(NULL);
}

void* writeFile(void* arg) {
    FILE* file = fopen("Thread.txt", "a");  
    if (file == NULL) {
        perror("T2: File open failed");
        pthread_exit(NULL);
    }

    fprintf(file, "Hello its T2\n");
    printf("T2: Wrote into Thread.txt.\n");

    fclose(file);
    pthread_exit(NULL);
}

int main() {
    pthread_t T1, T2;

    if (pthread_create(&T1, NULL, createFile, NULL) != 0) {
        perror("Failed to create T1");
        return 1;
    }
    pthread_join(T1, NULL); 

    if (pthread_create(&T2, NULL, writeFile, NULL) != 0) {
        perror("Failed to create T2");
        return 1;
    }
    pthread_join(T2, NULL);

    printf("Main: All operations completed.\n");
    return 0;
}
