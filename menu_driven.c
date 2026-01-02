#include <stdio.h>

// Function to print numbers from 1 to N
void printNumbers(int n) {
    int i;
    printf("\nNumbers from 1 to %d:\n", n);
    for(i = 1; i <= n; i++) {
        printf("%d ", i);
    }
}

// Function to print even numbers up to N
void printEven(int n) {
    int i;
    printf("\nEven numbers up to %d:\n", n);
    for(i = 1; i <= n; i++) {
        if(i % 2 == 0)
            printf("%d ", i);
    }
}

// Function to print odd numbers up to N
void printOdd(int n) {
    int i;
    printf("\nOdd numbers up to %d:\n", n);
    for(i = 1; i <= n; i++) {
        if(i % 2 != 0)
            printf("%d ", i);
    }
}

int main() {
    int choice, n;

    printf("MENU DRIVEN PROGRAM\n");
    printf("1. Print numbers from 1 to N\n");
    printf("2. Print even numbers up to N\n");
    printf("3. Print odd numbers up to N\n");
    printf("4. Exit\n");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter value of N: ");
            scanf("%d", &n);
            printNumbers(n);
            break;

        case 2:
            printf("Enter value of N: ");
            scanf("%d", &n);
            printEven(n);
            break;

        case 3:
            printf("Enter value of N: ");
            scanf("%d", &n);
            printOdd(n);
            break;

        case 4:
            printf("Exiting program...");
            break;

        default:
            printf("Invalid Choice! Please select correct option.");
    }

    return 0;
}


