#include <stdio.h>

/* print Farenheight-Celcius table */
int main() {
    int lower, upper, step;
    float fahr, celcius;
    lower = 0 /* lower limit of temperature table */;
    upper = 300; /* upper limit of temperature table */
    step = 20; /* step size of temperature table */

    fahr = lower; /* initialize fahr to lower limit */

    while (fahr <= upper) {
        celcius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%4.0f %6.1f\n", fahr, celcius);
        fahr = fahr + step;
    }
}