/*
Write a function to display all members in the above array of structures
*/

void displayStudents(const struct Student* students, int size) {
    for (int i = 0; i < size; ++i) {
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
    }
}