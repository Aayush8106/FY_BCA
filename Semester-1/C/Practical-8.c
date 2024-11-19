#include <stdio.h>

int getnum();
int reverse(int num);
void checkPalindrome(int num, int rev);

int getnum() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    return num;
}

int reverse(int num) {
    int rev = 0, remainder;
    while (num != 0) {
        remainder = num % 10;
        rev = rev * 10 + remainder;
        num /= 10;
    }
    return rev;
}

void checkPalindrome(int num, int rev) {
    if (num == rev) {
        printf("%d is a palindrome number.\n", num);
    } else {
        printf("%d is not a palindrome number.\n", num);
    }
}

int main() {
    int num, rev;

    num = getnum();
    rev = reverse(num);
    checkPalindrome(num, rev);

    return 0;
}