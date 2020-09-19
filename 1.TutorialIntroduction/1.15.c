// Exercise 1-15. Rewrite the temperature conversion program of Section 1.2 to
// use a function for conversion


#include <stdio.h>

#define LOWER 0   /*lower limit of table*/
#define UPPER 300 /* upper limit */
#define STEP 20   /* step size */

// Converts temperature in Fahr to Celcius
float fahrToCelsius(float fahr);

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
        celsius = fahrToCelsius(fahr);
        printf("%3.0f\t%6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}

float fahrToCelsius(float fahr)
{
    return (5.0 / 9.0) * (fahr - 32.0);
}
