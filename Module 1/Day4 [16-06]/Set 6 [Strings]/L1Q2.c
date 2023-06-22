/*
    Convert A String To Integer
*/

#include <stdio.h>
#include <stdlib.h>

int stringToInteger(const char* str) {
    int result = 0;
    int sign = 1;
    int i = 0;

    if (str[0] == '-') {
        sign = -1;
        i = 1;
    }

    while (str[i] != '\0') {
        if (str[i] >= '0' && str[i] <= '9') {
            result = result * 10 + (str[i] - '0');
        } else {
            break;
        }
        i++;
    }

    return result * sign;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int result = stringToInteger(str);

    printf("Converted integer: %d\n", result);

    return 0;
}
