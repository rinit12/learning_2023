/*

Write a C program to copy a file by considering the user option to handle the text case
-u, to change file content to Upper Case
-l, to change file content to Lower Case
-s, to change file content to Purely Upper Case
if no options are passed then it should be a normal copy

Example, say we have a file f1 with the following content
f1:
-----------------------
This is the file data
testing Case copy
application
-----------------------

./cp -s f1 f2
f2:
-----------------------
This Is The Tile Data
Testing Case Copy
Application
-----------------------

./cp -l f1 f3
f3:
-----------------------
this is the tile data
testing case copy
application
-----------------------

./cp -u f1 f4
f4:
-----------------------
THIS IS THE FILE DATA
TESTING CASE COPY
APPLICATION
-----------------------

./cp f1 f5
Should perform a normal copy
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void copyFile(FILE *source, FILE *destination, int option) {
    char ch;

    while ((ch = fgetc(source)) != EOF) {
        if (option == 1) { 
            fputc(toupper(ch), destination);
        } else if (option == 2) {
            fputc(tolower(ch), destination);
        } else if (option == 3) { 
            if (isalpha(ch)) {
                fputc(toupper(ch), destination);
            } else {
                fputc(ch, destination);
            }
        } else {
            fputc(ch, destination);
        }
    }
}

int main(int argc, char *argv[]) {
    if (argc < 3) {
        printf("Insufficient arguments!\n");
        printf("Usage: ./cp <option> <source file> <destination file>\n");
        return 1;
    }

    int option = 0;
    FILE *sourceFile, *destinationFile;

    if (argc == 3) {
        sourceFile = fopen(argv[1], "r");
        destinationFile = fopen(argv[2], "w");
    } else if (argc == 4) {
        option = argv[1][1] - '0';
        sourceFile = fopen(argv[2], "r");
        destinationFile = fopen(argv[3], "w");
    } else {
        printf("Invalid arguments!\n");
        printf("Usage: ./cp <option> <source file> <destination file>\n");
        return 1;
    }

    if (sourceFile == NULL) {
        printf("Failed to open the source file.\n");
        return 1;
    }

    if (destinationFile == NULL) {
        printf("Failed to create the destination file.\n");
        fclose(sourceFile);
        return 1;
    }

    copyFile(sourceFile, destinationFile, option);

    printf("File copied successfully.\n");

    fclose(sourceFile);
    fclose(destinationFile);

    return 0;
}
