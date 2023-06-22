/*
    Min & Max Of 1D Array
*/

#include <stdio.h>

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int array[size];
    int min, max;
    int i;

    printf("Enter %d integers:\n", size);

    for (i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    min = array[0];
    max = array[0];

    for (i = 1; i < size; i++) {
        if (array[i] < min) {
            min = array[i];
        }
        if (array[i] > max) {
            max = array[i];
        }
    }

    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);

    return 0;
}
