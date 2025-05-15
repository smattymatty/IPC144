#include <stdio.h>
/* I am a comment */
/* "" indicates character arrays, not strings */
/* c doesn't have a built in string type */
int main() {
    printf("Hello, world!\n");
    /* %d is for integers */
    printf("Answer %d\n", 42);
    /* %s is for character arrays */
    /* terminated by a null character at the end */
    /* different from strings */
    printf("Name: %s\n", "Mathew");
    /* %f is for floating point numbers */
    printf("x %.1f i %d\n", 3.5, 100);
    /* %c is for characters */
    printf("Letter: %c\n", 'a');
    /* %x is for hexadecimal numbers */
    printf("Hex: %x\n", 0xFF);
    return 0;
}