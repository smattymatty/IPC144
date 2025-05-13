#include <stdio.h>

int main() {
    int number;

    // Get integer input from the user
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Determine if the number is positive, negative, or zero
    // using the nested if structure as discussed.

    // First, check if the number is zero.
    if (number == 0) {
        printf("The number is Zero.\n");
    } else {
        // If the number is not zero, then it's either positive or negative.
        // This is the nested if part.
        if (number < 0) {
            printf("The number is Negative.\n");
        } else {
            // If it's not zero and not less than zero, it must be greater than zero.
            printf("The number is Positive.\n");
        }
    }

    return 0;
}