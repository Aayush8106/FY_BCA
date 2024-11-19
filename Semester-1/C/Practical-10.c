#include <stdio.h>

void displayArray(int arr[], int size) {
    printf("Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int findSum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

void findMaxMin(int arr[], int size) {
    int max = arr[0];
    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);
}

void searchElement(int arr[], int size, int target) {
    int count = 0;
    printf("Element %d found at positions: ", target);
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            printf("%d, ", i + 1);
            count++;
        }
    }
    if (count == 0) {
        printf("not found");
    }
    printf("\nTotal occurrences: %d\n", count);
}

void sortArray(int arr[], int size) {
    int temp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int size;
    printf("Enter number of elements: ");
    scanf("%d", &size);

    int arr[size];
    for (int i = 0; i < size; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nYou entered: \n");
    displayArray(arr, size);

    int choice;
    do {
        printf("\nMenu:\n");
        printf("1. Find Sum\n");
        printf("2. Find Maximum and Minimum\n");
        printf("3. Search Element\n");
        printf("4. Sort Array\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        printf("\n");

        switch (choice) {
            case 1:
                printf("Sum: %d\n", findSum(arr, size));
                break;
            case 2:
                findMaxMin(arr, size);
                break;
            case 3: {
                int target;
                printf("Enter element to search: ");
                scanf("%d", &target);
                searchElement(arr, size, target);
                break;
            }
            case 4:
                sortArray(arr, size);
                printf("Array sorted successfully\n");
                displayArray(arr, size);
                break;
            case 5:
                printf("Exiting program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please choose again.\n");
        }
    } while (choice != 5);

    return 0;
}