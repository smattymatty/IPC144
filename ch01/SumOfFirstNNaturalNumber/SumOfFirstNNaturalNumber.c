#include <stdio.h>

int main() {
    int n;                   // Variable to store the number of terms (input by user)
    int i;                   // Loop counter variable
    long long int sum = 0LL; // Variable to store the sum, initialized to 0.
                             // Using 'long long int' to hold potentially large sums.
                             // '0LL' specifies a long long zero.

    // Get the value of 'n' from the user
    printf("Enter the value of n (number of natural numbers to sum): ");
    scanf("%d", &n);

    // Check if n is a positive number.
    // The sum of the first N natural numbers typically implies N >= 1.
    // If n is less than 1, the sum is 0 as the loop won't run.
    if (n < 1) {
        printf("N should be a positive integer. The sum is 0 for n < 1.\n");
    } else {
        // Loop from 1 up to n (inclusive)
        // In each iteration, 'i' will take values 1, 2, 3, ..., n
        for (i = 1; i <= n; i++) {
            // Add the current value of 'i' to the 'sum'
            // sum = sum + i; is equivalent to sum += i;
            sum += i;
        }
        // Print the calculated sum
        printf("The sum of the first %d natural numbers is: %lld\n", n, sum);
    }

    return 0;
}