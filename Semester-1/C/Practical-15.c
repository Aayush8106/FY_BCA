#include <stdio.h>
#include <string.h>
#define MAX 10
#define LEN 50

typedef struct {
    char country[LEN];
    char capital[LEN];
} CountryCapital;

void create(CountryCapital arr[], int *size) {
    printf("Enter number of countries: ");
    scanf("%d", size);
    getchar();  // Consume newline

    for (int i = 0; i < *size; i++) {
        printf("Enter country %d name: ", i + 1);
        fgets(arr[i].country, LEN, stdin);
        arr[i].country[strcspn(arr[i].country, "\n")] = 0;

        printf("Enter capital %d name: ", i + 1);
        fgets(arr[i].capital, LEN, stdin);
        arr[i].capital[strcspn(arr[i].capital, "\n")] = 0;
    }
}

void display(CountryCapital arr[], int size) {
    printf("\nCountry-Capital List:\n");
    for (int i = 0; i < size; i++) {
        printf("%s - %s\n\n", arr[i].country, arr[i].capital);
    }
}

void countryToCapital(CountryCapital arr[], int size) {
    char country[LEN];
    printf("Enter country name: ");
    fgets(country, LEN, stdin);
    country[strcspn(country, "\n")] = 0;

    int found = 0;
    for (int i = 0; i < size; i++) {
        if (strcmp(arr[i].country, country) == 0) {
            printf("Capital: %s\n", arr[i].capital);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Country not found.\n");
    }
}

void capitalToCountry(CountryCapital arr[], int size) {
    char capital[LEN];
    printf("Enter capital name: ");
    fgets(capital, LEN, stdin);
    capital[strcspn(capital, "\n")] = 0;

    int found = 0;
    for (int i = 0; i < size; i++) {
        if (strcmp(arr[i].capital, capital) == 0) {
            printf("Country: %s\n", arr[i].country);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Capital not found.\n");
    }
}

int main() {
    CountryCapital arr[MAX];
    int size = 0;
    int choice;

    do {
        printf("Menu:\n");
        printf("1. Create\n");
        printf("2. Display\n");
        printf("3. Country to Capital\n");
        printf("4. Capital to Country\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();  // Consume newline

        switch (choice) {
            case 1:
                create(arr, &size);
                break;
            case 2:
                if (size == 0) {
                    printf("No data available.\n");
                } else {
                    display(arr, size);
                }
                break;
            case 3:
                if (size == 0) {
                    printf("No data available.\n");
                } else {
                    countryToCapital(arr, size);
                }
                break;
            case 4:
                if (size == 0) {
                    printf("No data available.\n");
                } else {
                    capitalToCountry(arr, size);
                }
                break;
            case 5:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please choose again.\n");
        }
    } while (choice != 5);

    return 0;
}