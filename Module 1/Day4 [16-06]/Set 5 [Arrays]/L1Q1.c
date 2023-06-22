/*
    Sum & Average Of 1D Array
*/

#include <stdio.h>

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int array[size];
    int sum = 0;
    float average;
    int i;

    printf("Enter %d integers:\n", size);

    for (i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    for (i = 0; i < size; i++) {
        sum += array[i];
    }

    average = (float)sum / size;

    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);

    return 0;
}
