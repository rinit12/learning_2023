/*
    Diffrence between even & odd indexed elements
*/

#include <stdio.h>

int calculateDifference(int arr[], int size) {
    int evenSum = 0;
    int oddSum = 0;

    for (int i = 0; i < size; i++) {
        if (i % 2 == 0) {
            evenSum += arr[i];
        } else {
            oddSum += arr[i];
        }
    }

    return evenSum - oddSum;
}

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int difference = calculateDifference(arr, size);

    printf("Difference between the sum of even and odd indexed elements: %d\n", difference);

    return 0;
}
