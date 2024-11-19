#include <stdio.h>

long factorial(int n);

long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial of negative numbers is not possible.");
    } else {
        printf("Factorial of %d = %ld\n", num, factorial(num));
    }

    return 0;
}