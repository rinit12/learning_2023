/*
Find the largest number by deleting single digit in a 4 digit number 5872 - 872, 9856 - 986

Concepts to be used.
- Loops
- Operators
*/

#include <stdio.h>

int findLargestNumber(int num) {
    int largestNum = 0;
    int divisor = 1;
    int currentNum;

    while (divisor <= 1000) {
        currentNum = (num / (divisor * 10)) * divisor + (num % divisor);

        if (currentNum > largestNum) {
            largestNum = currentNum;
        }

        divisor *= 10;
    }

    return largestNum;
}

int main() {
    int number;

    printf("Enter a 4-digit number: ");
    scanf("%d", &number);

    if (number < 1000 || number > 9999) {
        printf("Invalid input! Please enter a valid 4-digit number.\n");
        return 0;
    }

    int largestNumber = findLargestNumber(number);
    printf("Largest number by deleting a single digit: %d\n", largestNumber);

    return 0;
}
