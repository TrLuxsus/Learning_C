// Exercise 1-3. Modify the temperature conversion program to print a heading
// above the table.

#include <stdio.h>

#define LOWER 0   /*lower limit of table*/
#define UPPER 300 /* upper limit */
#define STEP 20   /* step size */

/* print Fahrenheit-Celsius table
    for fahr = 0, 20, ..., 300; floating-point version with heading */

main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = LOWER; /* lower limit of temperature table */
    upper = UPPER; /* upper limit */
    step = STEP;   /* step size */

    fahr = lower;
    printf("%3s\t%6s\n", "F", "C");
    while (fahr <= upper)
    {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%3.0f\t%6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}
