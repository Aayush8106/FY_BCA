#include <stdio.h>

int main() {
    char name[50];
    float phy, chem, math, total, percentage;
    char grade;

    printf("Enter student's name: ");
    scanf("%s", name);

    printf("Enter Physics marks: ");
    scanf("%f", &phy);

    printf("Enter Chemistry marks: ");
    scanf("%f", &chem);

    printf("Enter Mathematics marks: ");
    scanf("%f", &math);

    total = phy + chem + math;
    percentage = (total / 300) * 100;

    if (percentage >= 75 && percentage < 100) {
        grade = 'O';
    } 
    else if (percentage >= 60 && percentage < 75) {
        grade = 'A';
    } 
    else if (percentage >= 50 && percentage < 60) {
        grade = 'B';
    } 
    else if (percentage >= 40 && percentage < 50) {
        grade = 'C';
    } 
    else {
        grade = 'D';
    }

    printf("\nName: %s\n", name);
    printf("Percentage: %.2f%%\n", percentage);
    printf("Grade: %c\n", grade);

    return 0;
}