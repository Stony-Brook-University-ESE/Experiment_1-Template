#include <stdio.h>
#include <string.h>

int main() {
    char str[8];
    printf("Enter a word: ");
    scanf("%s", str);

    int len = strlen(str);
    int isPalindrome = 1;

    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome) {
        printf("It's a palindrome!\n");
    } else {
        printf("Not a palindrome.\n");
    }

    return 0;
}
