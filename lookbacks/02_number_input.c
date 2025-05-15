#include <stdio.h>

int main() {
    /* Declare two variables to store the floors */ 
    int usf, euf; /* must declare type of variable (int) */
    printf("Enter US Floor\n");
    /* scanf reads in the input from the user */
    /* &usf is the memory address of the variable usf */
    /* scanf will insert the input into the variable usf */
    scanf("%d", &usf);
    euf = usf -1;
    printf("EU Floor: %d\n", euf);
}