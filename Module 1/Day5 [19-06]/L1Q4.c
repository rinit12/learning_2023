/*
write a program to Store Data for n students in Structures Dynamically
*/

#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int age;
    int rollNo;
    char studentClass[20];
};

void storeData(struct Student* students, int n) {
    int i;

    for (i = 0; i < n; ++i) {
        printf("Enter details for Student %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", students[i].name);

        printf("Age: ");
        scanf("%d", &students[i].age);

        printf("Roll No: ");
        scanf("%d", &students[i].rollNo);

        printf("Class: ");
        scanf("%s", students[i].studentClass);

        printf("\n");
    }
}

void displayData(const struct Student* students, int n) {
    int i;

    for (i = 0; i < n; ++i) {
        printf("Details of Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Roll No: %d\n", students[i].rollNo);
        printf("Class: %s\n", students[i].studentClass);
        printf("\n");
    }
}

int main() {
    int n, i;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student* students = (struct Student*)malloc(n * sizeof(struct Student));

    storeData(students, n);

    printf("----- Data for Students -----\n");
    displayData(students, n);

    free(students);

    return 0;
}
