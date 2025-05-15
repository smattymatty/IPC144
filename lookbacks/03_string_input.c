#include <stdio.h>

int main() {
    /* Declare a character array to store the name */
    /* remember, there is no string type in C */
    /* 100 is the size of the array */
    /* they have no auto-extend, so you must specify the size */
    /* if you put 101 in, it will crash */
    char name[100];
    printf("Enter your name: ");
    /* scanf reads in the input from the user */
    /* %99s is the limit of the input */
    scanf("%99s", name);
    printf("Hello, %s!\n", name);
}