// Exercise 1-4. Write a program to print the corresponding Celsius to Fahrenheit
// table.

#include <stdio.h>

#define LOWER 0   /*lower limit of table*/
#define UPPER 300 /* upper limit */
#define STEP 10   /* step size */

/* print Celsius-Fahrenheit table
    for celsius = 0, 10, ..., 100; floating-point version with heading */

main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = LOWER; /* lower limit of temperature table */
    upper = UPPER; /* upper limit */
    step = STEP;   /* step size */

    celsius = lower;
    printf("%3s\t%6s\n", "C", "F");
    while (celsius <= upper)
    {
        fahr = celsius * (9.0 / 5.0) + 32.0;
        printf("%3.0f\t%6.0f\n", celsius, fahr);
        celsius = celsius + step;
    }
}
