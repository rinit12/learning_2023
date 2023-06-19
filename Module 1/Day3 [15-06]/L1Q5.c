/*
Write a program to find both smallest and largest digits in given n numbers
For example let's say we have n = 3, and n1 = 8, n2 = 156, n3 = 123450, 
the result will be "Not Valid", 1 and 6, 0 and 5
*/

#include <stdio.h>
#include <limits.h>

void findSmallestAndLargestDigits(int n, int numbers[]) {
    int i, j;
    int smallestDigit = INT_MAX;
    int largestDigit = INT_MIN;
    int currentNum, digit;

    for (i = 0; i < n; i++) {
        currentNum = numbers[i];

        while (currentNum > 0) {
            digit = currentNum % 10;

            if (digit < smallestDigit) {
                smallestDigit = digit;
            }
            if (digit > largestDigit) {
                largestDigit = digit;
            }

            currentNum /= 10;
        }
    }

    if (smallestDigit == INT_MAX || largestDigit == INT_MIN) {
        printf("Not Valid\n");
    } else {
        printf("Smallest Digit: %d\n", smallestDigit);
        printf("Largest Digit: %d\n", largestDigit);
    }
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input! Please enter a positive value for n.\n");
        return 0;
    }

    int numbers[n];
    int i;

    printf("Enter the %d numbers: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    findSmallestAndLargestDigits(n, numbers);

    return 0;
}
