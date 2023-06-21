/*
Write a function to perform a search operation on the array of structures based on name of the student
*/

#include <stdio.h>
#include <string.h>

#define MAX_NAME_LENGTH 100
#define MAX_STUDENTS 100

typedef struct {
    char name[MAX_NAME_LENGTH];
    int age;
    char grade;
} Student;

void searchStudentsByName(Student students[], int numStudents, char* name) {
    int found = 0;
    for (int i = 0; i < numStudents; i++) {
        if (strcmp(students[i].name, name) == 0) {
            printf("Student Name: %s\n", students[i].name);
            found = 1;
        }
    }

    if (!found) {
        printf("No students found with the name '%s'\n", name);
    }
}

int main() {
    Student students[MAX_STUDENTS] = {
        {"John", 20, "A+"},
        {"Alice", 19,"B"},
        {"John", 21, "A+"},
        // Add more students here if needed
    };
    int numStudents = sizeof(students) / sizeof(students[0]);

    char searchName[MAX_NAME_LENGTH];
    printf("Enter the name to search: ");
    scanf("%s", searchName);

    searchStudentsByName(students, numStudents, searchName);

    return 0;
}
