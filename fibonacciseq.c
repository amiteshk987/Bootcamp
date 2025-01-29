#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next;

    // Taking user input
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Checking if input is valid
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        printf("Fibonacci sequence:\n");
        for (int i = 0; i < n; i++) {
            printf("%d ", first);
            next = first + second;
            first = second;
            second = next;
        }
        printf("\n");
    }
    return 0;
}
