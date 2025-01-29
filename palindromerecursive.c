#include <stdio.h>
#include <string.h>
#include <ctype.h>
int isPalindrome(char str[], int start, int end) {
    if (start >= end) {
        return 1;
    }
    if (!isalnum(str[start])) {
        return isPalindrome(str, start + 1, end);
    }
    if (!isalnum(str[end])) {
        return isPalindrome(str, start, end - 1);
    }
    if (tolower(str[start]) != tolower(str[end])) {
        return 0;  
    }
    return isPalindrome(str, start + 1, end - 1);
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 
    str[strcspn(str, "\n")] = 0; 
    int length = strlen(str);
    if (isPalindrome(str, 0, length - 1)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }
    return 0;
}