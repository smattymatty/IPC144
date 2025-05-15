#include <stdio.h>

int main() {
    int N;                       // The upper limit, input by the user
    int i;                       // Loop counter, representing the current 'term' or number
    long long int evensum = 0LL; // Variable to store the sum of even numbers, initialized to 0
    long long int oddsum = 0LL;  // Variable to store the sum of odd numbers, initialized to 0

    // Get the value of N from the user
    printf("Enter the value of N (upper limit for summing odd/even numbers): ");
    scanf("%d", &N);

    // It's generally expected N will be 1 or greater for this problem.
    // If N is less than 1, the loop won't execute, and sums will correctly remain 0.
    if (N < 1) {
        printf("N is less than 1. Both odd and even sums will be 0.\n");
    }

    // Loop through each number from 1 up to N (inclusive)
    for (i = 1; i <= N; i++) {
        // Check if the current number 'i' is even or odd
        if ((i % 2) == 0) {
            // If 'i % 2' is 0, the number is even
            evensum += i; // Add 'i' to the sum of even numbers
        } else {
            // If 'i % 2' is not 0, the number is odd
            oddsum += i;  // Add 'i' to the sum of odd numbers
        }
    }

    // Print the calculated sums
    printf("For numbers from 1 to %d:\n", N);
    printf("Sum of even numbers: %lld\n", evensum);
    printf("Sum of odd numbers:  %lld\n", oddsum);

    return 0;
}