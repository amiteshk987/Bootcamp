// find the power of two using recursion
#include <stdio.h>
int powerOfTwo(int n) {
    if (n == 0) {
        return 1; 
    }
    return 2 * powerOfTwo(n - 1); 
}

int main() {
    int N;
    printf("Enter the exponent N: ");
    scanf("%d", &N);
    if (N < 0) {
        printf("Exponent should be a non-negative integer.\n");
    } else {
        printf("2 raised to the power of %d is: %d\n", N, powerOfTwo(N));
    }
    return 0;
}

