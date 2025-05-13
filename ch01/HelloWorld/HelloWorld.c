#include <stdio.h>
#include <stdlib.h> // For realloc, free, NULL, exit

struct string {
    char *str;
    int len;
};

void printString(struct string s) {
    int i;
    for (i = 0; i < s.len; i++) {
        printf("%c", s.str[i]);
    }
    // Consider if you want the newline here or after the call in main
}

int main(void) {
    puts("Hello, my fellow gamers!");
    char c;

    struct string s;
    s.str = NULL; // Initialize s.str to NULL
    s.len = 0;    // Initialize s.len to 0

    printf("Enter text, then press Enter:\n");

    // Also good to check for EOF (End Of File)
    while ((c = getchar()) != '\n' && c != EOF) {
        // Calculate new size (for current characters + new one + null terminator)
        // It's safer to allocate space for a null terminator too
        int new_len_with_null = s.len + 1 + 1;
        char *temp_str = (char *)realloc(s.str, sizeof(char) * new_len_with_null);

        if (temp_str == NULL) {
            // Handle realloc failure
            perror("Failed to reallocate memory");
            free(s.str); // Free any previously allocated memory
            return 1;    // Exit with an error code
        }
        s.str = temp_str; // Update s.str only if realloc was successful

        s.str[s.len] = c;    // Add the new character
        s.len++;             // Increment the length
        s.str[s.len] = '\0'; // Add null terminator for safety with other string functions

        if (c == 'w' || c == 'W') {
            printf("You are a winner.\n");
        }
        if (c == 'l' || c == 'L') {
            printf("You are a loser.\n");
        }
        // printf("You typed: %c.\n", c); // This might be a bit noisy here
    }

    printf("The string is: ");
    printString(s); // Now this is safer
    printf("\n");   // Ensure a newline after printing the string

    free(s.str); // Free the final allocated memory
    s.str = NULL; // Good practice: set pointer to NULL after freeing

    return 0; // Indicate successful execution
}