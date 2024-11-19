#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if(num < 0) {
        printf("Factorial of negative numbers is not possible.");
    } else {
        long fact = 1;
        for(int i = 1; i <= num; i++) {
            fact *= i;
        }
        printf("Factorial of %d = %ld", num, fact);
    }

    return 0;
}