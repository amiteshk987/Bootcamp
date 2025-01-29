// count digit in number using recursion
#include <stdio.h>
56

int countDigits(int num) {
    if (num == 0) {
        return 0;  
    }
    return 1 + countDigits(num / 10);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num == 0) {
        printf("The number has 1 digit.\n");
    } else if (num < 0) {
        num = -num; 
        printf("The number has %d digits.\n", countDigits(num));
    } else {
        printf("The number has %d digits.\n", countDigits(num));
    }
    return 0;
}

