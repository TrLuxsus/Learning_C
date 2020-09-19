// Exercise 1-4. Write a program to print the corresponding Celsius to Fahrenheit
// table.

#include <stdio.h>

/* print Celsius-Fahrenheit table
    for celsius = 0, 10, ..., 100; floating-point version with heading */

main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;   /* lower limit of temperature table */
    upper = 100; /* upper limit */
    step = 10;   /* step size */

    celsius = lower;
    printf("%3s\t%6s\n", "C", "F");
    while (celsius <= upper)
    {
        fahr = celsius * (9.0 / 5.0) + 32.0;
        printf("%3.0f\t%6.0f\n", celsius, fahr);
        celsius = celsius + step;
    }
}
