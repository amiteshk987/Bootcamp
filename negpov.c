#include <stdio.h>

int main() {
    int num;

    // Taking user input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Checking the number
    if (num > 0) {
        printf("The number is positive.\n");
    } else if (num < 0) {
        printf("The number is negative.\n");
    } else {
        printf("The number is zero.\n");
    }
    return 0;
}
