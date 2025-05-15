#include <stdio.h>

int main() {
    char line[1001];
    printf("Enter a line of text:\n");
    /* [^\n] matches any character thats not a newline */
    /* This says to scan up to the end of a line, or until the 1000th character */
    scanf("%1000[^\n]", line);
    printf("You entered: %s\n", line);
}