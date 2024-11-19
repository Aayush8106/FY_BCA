#include <stdio.h>

#define MAX_STUDENTS 10
#define MAX_SUBJECTS 3

typedef struct {
    int rollNo;
    char name[50];
    int marks[MAX_SUBJECTS];
    int total;
} Student;

void printStudent(Student student) {
    printf("Roll No: %d\n", student.rollNo);
    printf("Name: %s\n\n", student.name);
    printf("Marks: \n");
    for (int i = 0; i < MAX_SUBJECTS; i++) {
        printf("Subject %d: %d\n", i + 1, student.marks[i]);
    }
    printf("Total: %d\n", student.total);
}

void printStudents(Student students[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Student %d:\n\n", i + 1);
        printStudent(students[i]);
        printf("\n");
    }
}

int main() {
    Student students[MAX_STUDENTS];
    int size;

    printf("Enter number of students: ");
    scanf("%d", &size);

    for (int i = 0; i < size; i++) {
        printf("Enter student %d details:\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &students[i].rollNo);
        printf("Name: ");
        scanf("%s", students[i].name);

        printf("Enter marks for %d subjects:\n", MAX_SUBJECTS);
        students[i].total = 0;
        for (int j = 0; j < MAX_SUBJECTS; j++) {
            printf("Subject %d: ", j + 1);
            scanf("%d", &students[i].marks[j]);
            students[i].total += students[i].marks[j];
        }
    }

    printf("\n\nStudent List:\n\n");
    printStudents(students, size);

    return 0;
}