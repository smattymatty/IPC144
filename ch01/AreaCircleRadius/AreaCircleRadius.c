#include <stdio.h>

// Here, we define a constant for PI.
// #define is a preprocessor directive. It tells the compiler to replace
// every occurrence of 'PI' in the code with '3.14' before the actual compilation begins.
// Using a named constant makes the code more readable and maintainable.
#define PI 3.14

// This is the main function where our program's execution begins.
int main() {
    // Declare variables to store the radius and the calculated area.
    // We use 'float' because the radius and area can have decimal values.
    float radius;
    float area;

    // --- Get Input from the User ---

    // Print a message asking the user to enter the radius of the circle.
    printf("Enter the radius of the circle: ");

    // Read the floating-point number entered by the user and store it
    // in the 'radius' variable.
    // "%f" is the format specifier for reading a float.
    // '&radius' is the memory address of the 'radius' variable,
    // so scanf knows where to put the value it reads.
    scanf("%f", &radius);

    // --- Calculate the Area ---

    // Calculate the area using the formula: area = PI * radius * radius
    // We use the 'PI' constant we defined earlier.
    // r^2 (radius squared) is calculated as radius * radius.
    area = PI * radius * radius;

    // --- Display the Result ---

    // Print the calculated area to the screen.
    // "%.2f" tells printf to display the float variable with
    // two digits after the decimal point. You can change this if you want
    // more or fewer decimal places (e.g., "%.4f" for four).
    printf("------------------------------------\n");
    printf("Radius entered: %.2f\n", radius);
    printf("Area of the circle: %.2f\n", area);
    printf("------------------------------------\n");

    // Return 0 to the operating system, indicating that the program
    // finished successfully.
    return 0;
}