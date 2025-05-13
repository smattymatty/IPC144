#include <stdio.h>

int main() {
    int number;

    // Get integer input from the user
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Determine if the number is odd or even using the modulo operator.
    // The modulo operator (%) gives the remainder of a division.
    // If 'number % 2' is 0, it means 'number' is perfectly divisible by 2.
    if ((number % 2) == 0) {
        printf("%d is Even.\n", number);
    } else {
        // If the remainder is not 0, the number is odd.
        printf("%d is Odd.\n", number);
    }

    return 0;
}