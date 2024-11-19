#include <stdio.h>

int main() {
    int n, i = 1, sum = 0, num;
    float average;

    printf("Enter the number of values (n): ");
    scanf("%d", &n);

    do {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        sum += num;
        i++;
    } while (i <= n);

    average = (float)sum / n;

    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);

    return 0;
}