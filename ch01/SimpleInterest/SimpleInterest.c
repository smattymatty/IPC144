#include <stdio.h>

// Every C program must have a main function.
// "int" means this function will return an integer value when it finishes.
int main() {
    // Declare variables to store the principal, rate, time, and simple interest.
    // We use 'float' as the data type. 'float' allows us to store numbers
    // with decimal points, which is important for money and percentages.
    float principal, rate, time_period, simple_interest;

    // --- Get Input from the User ---

    // Print a message to the screen asking the user to enter the principal amount.
    // '\n' at the end of the string moves the cursor to a new line.
    printf("Enter the principal amount: ");
    // Read the floating-point number typed by the user and store it in the 'principal' variable.
    // "%f" is a format specifier that tells scanf to expect a float.
    // '&principal' gives scanf the memory address of the 'principal' variable so it knows where to store the input.
    scanf("%f", &principal);

    // Ask the user for the rate of interest.
    // For example, if the rate is 7.5%, the user should enter 7.5.
    printf("Enter the rate of interest (e.g., 7.5 for 7.5%%): ");
    // Read the rate and store it in the 'rate' variable.
    scanf("%f", &rate);

    // Ask the user for the time period in years.
    printf("Enter the time period (in years): ");
    // Read the time period and store it in the 'time_period' variable.
    scanf("%f", &time_period);

    // --- Calculate Simple Interest ---

    // This is the core calculation based on the formula: SI = (P * R * T) / 100
    // We multiply principal, rate, and time_period together.
    // Then, we divide the result by 100.0.
    // IMPORTANT: We use 100.0 (a floating-point number) instead of 100 (an integer).
    simple_interest = (principal * rate * time_period) / 100.0;

    // --- Display the Result ---

    // Print the calculated simple interest to the screen.
    // "%.2f" is a format specifier that tells printf to print a float
    // with exactly two digits after the decimal point. This is nice for currency.
    printf("-------------------------------------\n");
    printf("Principal Amount: $%.2f\n", principal);
    printf("Rate of Interest: %.2f%%\n", rate); // To print a '%' sign, we use '%%'
    printf("Time Period:      %.2f years\n", time_period);
    printf("Simple Interest:  $%.2f\n", simple_interest);
    printf("-------------------------------------\n");

    // The 'main' function returns 0 to the operating system,
    // indicating that the program executed successfully.
    return 0;
}