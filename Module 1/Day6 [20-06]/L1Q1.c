/*
    Assume User will be providing input in the form of a string as show below. 
    Write a function to parse the string and initialize an array of structures. 

    Example String : "1001 Aron 100.00" 
    Example Structure : 
        struct Student{
            int rollno;
            char name[20];
            float marks;
        };
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void initializeStudents(const char* input, struct Student* students, int numStudents) {
    char* str = strdup(input);
    char* token;
    const char* delimiter = " ";

    token = strtok(str, delimiter);
    for (int i = 0; i < numStudents; ++i) {
        students[i].rollno = atoi(token);

        token = strtok(NULL, delimiter);
        strncpy(students[i].name, token, sizeof(students[i].name));

        token = strtok(NULL, delimiter);
        students[i].marks = atof(token);

        token = strtok(NULL, delimiter);
    }

    free(str); 
}

int main() {
    int numStudents;
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);
    getchar(); 

    char input[100];
    printf("Enter the student details: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0'; 

    struct Student* students = malloc(numStudents * sizeof(struct Student));
    if (students == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    initializeStudents(input, students, numStudents);

    
    for (int i = 0; i < numStudents; ++i) {
        printf("Student %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
    }

    free(students);

    return 0;
}
