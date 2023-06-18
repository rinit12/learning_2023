/*
Write a program to swap every alternate element of a given array starting for element 0
For example, let's say we have a[5] = {10, 20, 30, 40, 50}, the result should be a[5] = {30, 20, 10, 40, 50}
one more example a[5] = {10, 20, 30, 40, 50, 60}, the result should be a[5] = {30, 20, 10, 60, 50, 40}

Topics to be covered
- Arrays
- Loops
- Basic Operators
*/


#include <stdio.h>

void swapAlternate(int array[], int size) {
    for (int i = 0; i < size - 1; i += 2) {
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
    }
}

void printArray(int array[], int size) {
    printf("Result: {");
    for (int i = 0; i < size; i++) {
        printf("%d", array[i]);
        if (i != size - 1) {
            printf(", ");
        }
    }
    printf("}\n");
}

int main() {
    int array1[] = {10, 20, 30, 40, 50};
    int size1 = sizeof(array1) / sizeof(array1[0]);

    printf("Original array: {10, 20, 30, 40, 50}\n");
    swapAlternate(array1, size1);
    printArray(array1, size1);

    int array2[] = {10, 20, 30, 40, 50, 60};
    int size2 = sizeof(array2) / sizeof(array2[0]);

    printf("Original array: {10, 20, 30, 40, 50, 60}\n");
    swapAlternate(array2, size2);
    printArray(array2, size2);

    return 0;
}
