#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to check if a number is prime
char *isPrime(int n) {
    if (n <= 1) {
        return "The given Number is not a Prime Number";
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return "The given Number is not a Prime Number";
        }
    }
    return "The given Number is a Prime Number";
}

int main() {
    int r;
    int p[2];
    printf("------------------------------------------------------------------------------------------------------------------------------\n");
    printf("Finding Prime Number \n");
    printf("------------------------------------------------------------------------------------------------------------------------------\n");

    // Create a pipe
    r = pipe(p);
    if (r < 0) {
        printf("Failed to create an unnamed pipe");
        exit(1);
    }

    // Get the number from the user
    printf("Enter the number: ");
    char buff[1024];
    fgets(buff, sizeof(buff), stdin);
    buff[strcspn(buff, "\n")] = 0; // Remove the newline character

    // Write the number to the pipe
    write(p[1], buff, strlen(buff) + 1);

    printf("One message is sent successfully\n");
    printf("---------------------------------------------------------------------------------------------------------------------------------\n");
    printf("Reading message from unnamed pipe \n");
    printf("----------------------------------------------------------------------------------------------------------------------------------------\n");

    // Read the number from the pipe
    char readBuff[1024];
    read(p[0], readBuff, sizeof(readBuff));

    printf("Reading data from %s \n", readBuff);

    // Convert the string to an integer and check if it's prime
    int num = atoi(readBuff);
    char *rs = isPrime(num);
    printf("%s \n", rs);

    return 0;
}
