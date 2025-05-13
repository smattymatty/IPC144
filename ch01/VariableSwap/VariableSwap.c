#include <stdio.h> // For input/output functions like printf

int main() {
    // Declare and initialize our two variables
    int a = 5;
    int b = 10;
    int temp; // Declare a temporary variable for the swap

    // Print the values before swapping
    printf("Before swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("--------------------\n");

    // Step 1: Store the value of 'a' in 'temp'
    temp = a;
    // Now, temp holds the original value of a (temp = 5)
    // a still holds 5
    // b still holds 10

    // Step 2: Copy the value of 'b' into 'a'
    a = b;
    // Now, a holds the value of b (a = 10)
    // temp still holds the original value of a (temp = 5)
    // b still holds 10 (but its value has been copied to a)

    // Step 3: Copy the value from 'temp' (original value of 'a') into 'b'
    b = temp;
    // Now, b holds the value from temp (b = 5)
    // a holds 10
    // temp holds 5

    // Print the values after swapping
    printf("After swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0; // Indicate successful execution
}