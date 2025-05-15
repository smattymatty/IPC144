#include <stdio.h>

int main() {
    int mymult();
    int retval;

    retval = mymult(6,7);
    printf("Answer: %d\n", retval);
}

/* Functions can be defined in the same file as main() */
int mymult(a, b)
/* Functions can take parameters */
    int a, b;
{
/* Any variable declared inside a function is local to that function */
    int c = a * b;
    return c;
}