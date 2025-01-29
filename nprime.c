#include <stdio.h>

int isPrime(int num) {
    if (num < 2)
        return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int N;
    printf("Enter a positive integer N: ");
    scanf("%d", &N);
    if (N < 2) {
        printf("No prime numbers in this range.\n");
        return 0;
    }
    printf("Prime numbers between 1 and %d are:\n", N);
    for (int i = 2; i <= N; i++) {
        if (isPrime(i))
            printf("%d ", i);
    }
    printf("\n");
    return 0;
}
