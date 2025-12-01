#include <unistd.h>
#include <stdio.h>

int main() {
    char buff[15];           // 15-byte buffer
    int nread;

    // Read up to 15 bytes from standard input (fd = 0)
    nread = read(0, buff, 15);

    // Write the number of bytes that were actually read to standard output (fd = 1)
    write(1, buff, nread);
	
    // We print the value stored in nread
    printf("\nNumber of bytes read: %d\n", nread);

    return 0;

}

