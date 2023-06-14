//  Write a function to find biggest of 2 numbers using - ternary operator
#include <stdio.h>


int findBiggestNumber(int a, int b) {
    int biggest = (a > b) ? a : b;
    return biggest;
}

int main() {
    int num1, num2, biggest;
    
    printf("Enter the first number: ");
    scanf("%d", &num1);
    
    printf("Enter the second number: ");
    scanf("%d", &num2);
    
    biggest = findBiggestNumber(num1, num2);
    
    printf("The biggest number is: %d\n", biggest);
    
    return 0;
}
