#include <stdio.h>

int main() {
    int a, b, c;
    int largest; // Variable to store the largest number, though we can also print directly

    // Get three integer inputs from the user
    printf("Enter three integer numbers (separated by spaces): ");
    scanf("%d %d %d", &a, &b, &c);

    // Determine the largest number using nested if-else statements
    // based on the described logic.

    if (a >= b) {
        // If a is greater than or equal to b, then compare a with c
        if (a >= c) {
            // If a is also greater than or equal to c, then a is the largest
            largest = a;
        } else {
            // If a is not greater than or equal to c (meaning c > a), then c is the largest
            // (since a >= b, and c > a, then c > a >= b)
            largest = c;
        }
    } else {
        // If a is less than b, then compare b with c
        if (b >= c) {
            // If b is greater than or equal to c, then b is the largest
            // (since b > a, and b >= c)
            largest = b;
        } else {
            // If b is not greater than or equal to c (meaning c > b), then c is the largest
            // (since b > a, and c > b, then c > b > a)
            largest = c;
        }
    }

    // Print the result
    printf("The largest number among %d, %d, and %d is: %d\n", a, b, c, largest);

    return 0;
}