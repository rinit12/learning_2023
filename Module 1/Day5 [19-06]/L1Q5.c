/*
Write a program to demonstrate the swapping the fields of two structures using pointers
*/

#include <stdio.h>

struct Student {
    char name[50];
    
};

void swapFields(struct Student* s1, struct Student* s2) {
    struct Student temp = *s1;
    *s1 = *s2;
    *s2 = temp;
}

int main() {
    struct Student student1 = {"Rinit Hedaoo"};
    struct Student student2 = {"Yogesh Nanhe"};

    printf("Before swapping:\n");
    printf("Student 1:\nName: %s\n", student1.name);
    printf("Student 2:\nName: %s\n", student2.name);

    swapFields(&student1, &student2);

    printf("\nAfter swapping:\n");
    printf("Student 1:\nName: %s\n", student1.name);
    printf("Student 2:\nName: %s\n", student2.name);

    return 0;
}
