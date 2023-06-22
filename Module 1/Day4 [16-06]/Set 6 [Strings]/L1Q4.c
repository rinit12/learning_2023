/*
    Rotate a String
*/

#include <stdio.h>
#include <string.h>

void rotateString(char* str, int positions) {
    int length = strlen(str);
    if (length <= 1)
        return;

    positions = positions % length;

    if (positions < 0)
        positions += length;

    char temp;
    for (int i = 0; i < positions; i++) {
        temp = str[0];
        for (int j = 0; j < length - 1; j++) {
            str[j] = str[j + 1];
        }
        str[length - 1] = temp;
    }
}

int main() {
    char str[100];
    int positions;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter the number of positions to rotate: ");
    scanf("%d", &positions);

    str[strcspn(str, "\n")] = '\0';

    rotateString(str, positions);

    printf("Rotated string: %s\n", str);

    return 0;
}
