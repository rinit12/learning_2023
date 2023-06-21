/*
Write a C program that uses functions to perform the following operations: 
     i) Reading a complex number 
     ii) Writing a complex number 
     iii) Addition of two complex numbers 
     iv) Multiplication of two complex numbers 
  (Note: represent complex number using a structure.
*/

#include <stdio.h>

struct Complex {
    float real;
    float imag;
};

struct Complex readComplexNumber() {
    struct Complex complex;

    printf("Enter the real part: ");
    scanf("%f", &complex.real);

    printf("Enter the imaginary part: ");
    scanf("%f", &complex.imag);

    return complex;
}

void writeComplexNumber(struct Complex complex) {
    printf("Complex number: %.2f + %.2fi\n", complex.real, complex.imag);
}

struct Complex addComplexNumbers(struct Complex num1, struct Complex num2) {
    struct Complex sum;

    sum.real = num1.real + num2.real;
    sum.imag = num1.imag + num2.imag;

    return sum;
}

struct Complex multiplyComplexNumbers(struct Complex num1, struct Complex num2) {
    struct Complex product;

    product.real = num1.real * num2.real - num1.imag * num2.imag;
    product.imag = num1.real * num2.imag + num1.imag * num2.real;

    return product;
}

int main() {
    struct Complex num1, num2, sum, product;

    printf("Enter the first complex number:\n");
    num1 = readComplexNumber();

    printf("Enter the second complex number:\n");
    num2 = readComplexNumber();

    printf("\n");

    printf("First complex number:\n");
    writeComplexNumber(num1);

    printf("Second complex number:\n");
    writeComplexNumber(num2);

    printf("\n");

    sum = addComplexNumbers(num1, num2);
    printf("Addition of the complex numbers:\n");
    writeComplexNumber(sum);

    product = multiplyComplexNumbers(num1, num2);
    printf("Multiplication of the complex numbers:\n");
    writeComplexNumber(product);

    return 0;
}
