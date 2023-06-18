/*
 Write a program to swap any type of data passed to an function.

Topics to be covered
- Pointers
- Type Casting

*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void swap(void *a, void *b, size_t size) {
    char *temp = (char *)malloc(size);

    memcpy(temp, a, size);

    memcpy(a, b, size);

    memcpy(b, temp, size);

    free(temp);
}

int main() {
    int a = 5, b = 10;
    printf("Before swap: a = %d, b = %d\n", a, b);
    swap(&a, &b, sizeof(int));
    printf("After swap: a = %d, b = %d\n", a, b);

    double x = 1.23, y = 4.56;
    printf("Before swap: x = %f, y = %f\n", x, y);
    swap(&x, &y, sizeof(double));
    printf("After swap: x = %f, y = %f\n", x, y);

    char c1 = 'A', c2 = 'B';
    printf("Before swap: c1 = %c, c2 = %c\n", c1, c2);
    swap(&c1, &c2, sizeof(char));
    printf("After swap: c1 = %c, c2 = %c\n", c1, c2);

    return 0;
}
