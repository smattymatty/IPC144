#include <stdio.h>

int main() {
    char line[1000];
    printf("Enter a line of text:\n");
    fgets(line, 1000, stdin);
    printf("You entered: %s\n", line);
}