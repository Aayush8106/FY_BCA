#include <stdio.h>

void dollarToRupee() {
    float dollars, rupees;
    printf("Enter amount in dollars: ");
    scanf("%f", &dollars);
    rupees = dollars * 82.50; // Assuming 1 USD = 82.50 INR
    printf("%.2f USD = %.2f INR\n", dollars, rupees);
}

void rupeeToDollar() {
    float rupees, dollars;
    printf("Enter amount in rupees: ");
    scanf("%f", &rupees);
    dollars = rupees / 82.50; // Assuming 1 USD = 82.50 INR
    printf("%.2f INR = %.2f USD\n", rupees, dollars);
}

int main() {
    int choice;
    while (1) {
        printf("Currency Converter Menu:\n");
        printf("1. Dollars to Rupees\n");
        printf("2. Rupees to Dollars\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                dollarToRupee();
                break;
            case 2:
                rupeeToDollar();
                break;
            case 3:
                printf("Exiting program. Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice. Please choose again.\n");
        }
    }

    return 0;
}