#include <stdio.h>

int main() {
    int N, first = 0, second = 1, next;

    // Taking user input
    printf("Enter the term number (N): ");
    scanf("%d", &N);

    // Checking if N is valid
    if (N <= 0) {
        printf("Please enter a positive integer.\n");
    } else if (N == 1) {
        printf("The %dth Fibonacci term is: %d\n", N, first);
    } else if (N == 2) {
        printf("The %dth Fibonacci term is: %d\n", N, second);
    } else {
        // Calculating Fibonacci term using iteration
        for (int i = 3; i <= N; i++) {
            next = first + second;
            first = second;
            second = next;
        }
        printf("The %dth Fibonacci term is: %d\n", N, second);
    }
    return 0;
}65
