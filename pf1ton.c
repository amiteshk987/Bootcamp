// print the number from 1 to N
#include <stdio.h>

int main() {
    int N;
    printf("Enter a positive integer N: ");
    scanf("%d", &N);
    if (N <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        
        printf("Numbers from 1 to %d are:\n", N);
        for (int i = 1; i <= N; i++) {
            printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}
