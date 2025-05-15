#include <stdio.h>

int main() {
    char line[1000];
    /* File is a Type, *hand is a pointer to a file */
    FILE *hand;
    hand = fopen("input.txt", "r");
    /* NULL is a special value that means end of file */
    while (fgets(line, 1000, hand) != NULL) {
        printf("%s", line);
    }
}