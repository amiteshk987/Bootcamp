// print number from N To 1
#include <stdio.h>

int main() {
    int N;
    printf("Enter a positive integer N: ");
    scanf("%d", &N);
    if (N <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        printf("Numbers from %d to 1 are:\n", N);
        for (int i = N; i >= 1; i--) {
            printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}
