/*
Use structures to find the volume and the total surface area of the box. 
   You need to access the members of the structure with the help of a structure pointer:
    a. With the help of (*) asterisk or indirection operator and (.) dot operator.
    b. With the help of ( -> ) Arrow operator using pointer as well as dot representation.
*/

#include <stdio.h>

struct Box {
    float length;
    float width;
    float height;
};

float calculateVolume(struct Box* boxPtr) {
    return boxPtr->length * boxPtr->width * boxPtr->height;
}

float calculateSurfaceArea(struct Box* boxPtr) {
    return 2 * (boxPtr->length * boxPtr->width + boxPtr->width * boxPtr->height + boxPtr->height * boxPtr->length);
}

int main() {
    struct Box myBox;
    struct Box* boxPtr = &myBox;

    // Input dimensions of the box
    printf("Enter the length of the box: ");
    scanf("%f", &(*boxPtr).length);
    printf("Enter the width of the box: ");
    scanf("%f", &(*boxPtr).width);
    printf("Enter the height of the box: ");
    scanf("%f", &(*boxPtr).height);

    // Calculate volume and surface area
    float volume = calculateVolume(boxPtr);
    float surfaceArea = calculateSurfaceArea(boxPtr);

    // Output the results
    printf("The volume of the box is: %.2f\n", volume);
    printf("The total surface area of the box is: %.2f\n", surfaceArea);

    return 0;
}
