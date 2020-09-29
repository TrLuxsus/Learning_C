// Exercise 2-1. Write a program to determine the ranges of char, short,
// int, and long variables, both signed and unsigned, by printing appropriate
// values from standard headers and by direct computation. Harder if you com-
// pute them: determine the ranges of the various floating-point types.

#include <stdio.h>
#include <limits.h>
#include <float.h>

// Pints limints for integers; limints taken from limits.h.
void printIntLimitsLib();

// Pints limints for integers; limints are computed.
void printIntLimitsComp();

// Compute and print limits for char.
void compPrintChar();

// Compute and print limits for short.
void compPrintShort();

// Compute and print limits for int.
void compPrintInt();

// Compute and print limits for long.
void compPrintLong();

// Compute and print limits for signed char.
void compPrintSChar();

// Compute and print limits for unsigned char.
void compPrintUChar();

// Compute and print limits for unsignrd short.
void compPrintUShort();

// Compute and print limits for unsigned int.
void compPrintUInt();

// Compute and print limits for unsigned long.
void compPrintULong();

// Pints limints for floats; limints taken from float.h.
void printFloatLimitsLib();

// Pints limints for floats; limints are computed.
void printFloatLimitsComp();

// Compute and print limits for float.
void compPrintFloat();

// Compute and print limits for double.
void compPrintDouble();

// Prints
int main()
{
    printIntLimitsLib();
    printIntLimitsComp();
    printFloatLimitsLib();
    printFloatLimitsComp();
    return 0;
}

void printIntLimitsLib()
{
    printf("Integer data type limits (library)\n");
    printf("%d <= char <= %d\n", CHAR_MIN, CHAR_MAX);
    printf("%d <= short <= %d\n", SHRT_MIN, SHRT_MAX);
    printf("%d <= int <= %d\n", INT_MIN, INT_MAX);
    printf("%ld <= long <= %ld\n", LONG_MIN, LONG_MAX);
    printf("%d <= signed char <= %d\n", SCHAR_MIN, SCHAR_MAX);
    printf("0 <= unsigned char <= %d\n", UCHAR_MAX);
    printf("0 <= unsigned short <= %d\n", USHRT_MAX);
    printf("0 <= unsigned int <= %u\n", UINT_MAX);
    printf("0 <= unsigned long <= %lu\n", ULONG_MAX);
}

void printIntLimitsComp()
{
    printf("Integer data type limits (computed)\n");
    compPrintChar();
    compPrintShort();
    compPrintInt();
    //compPrintLong();
    compPrintSChar();
    compPrintUChar();
    compPrintUShort();
    compPrintUInt();
    compPrintULong();
}

void compPrintShort()
{
    short n;
    short min;
    short max;

    for (n = 1; n > n - 1; ++n)
        if (n < 0)
            break;

    min = n;
    max = --n;

    printf("%d <= short <= %d\n", min, max);
}

void compPrintChar()
{
    char n;
    char min;
    char max;

    for (n = 1; n > n - 1; ++n)
        if (n < 0)
            break;

    min = n;
    max = --n;

    printf("%d <= char <= %d\n", min, max);
}

void compPrintInt()
{
    int n;
    int min;
    int max;

    for (n = 1; n > n - 1; ++n)
        if (n < 0)
            break;

    min = n;
    max = --n;

    printf("%d <= int <= %d\n", min, max);
}

void compPrintLong()
{
    long n;
    long min;
    long max;

    for (n = 1; n > n - 1; ++n)
        if (n < 0)
            break;

    min = n;
    max = --n;

    printf("%ld <= long <= %ld\n", min, max);
}

void compPrintSChar()
{
    signed char n;
    signed char min;
    signed char max;

    for (n = 1; n > n - 1; ++n)
        if (n < 0)
            break;

    min = n;
    max = --n;

    printf("%d <= signed char <= %d\n", min, max);
}

void compPrintUChar()
{
    unsigned char n;
    unsigned char min;
    unsigned char max;

    n = 0;

    min = n;
    max = --n;

    printf("%d <= unsigned char <= %d\n", min, max);
}

void compPrintUShort()
{
    unsigned short n;
    unsigned short min;
    unsigned short max;

    n = 0;

    min = n;
    max = --n;

    printf("%d <= unsigned short <= %d\n", min, max);
}

void compPrintUInt()
{
    unsigned int n;
    unsigned int min;
    unsigned int max;

    n = 0;

    min = n;
    max = --n;

    printf("%d <= unsigned int <= %u\n", min, max);
}

void compPrintULong()
{
    unsigned long n;
    unsigned long min;
    unsigned long max;

    n = 0;

    min = n;
    max = --n;

    printf("%ld <= unsigned long <= %lu\n", min, max);
}

void printFloatLimitsLib()
{
    printf("Float data type limits (library)\n");
    printf("%e <= float <= %e\n", FLT_MIN, FLT_MAX);
    printf("%e <= double <= %e\n", DBL_MIN, DBL_MAX);
}

void printFloatLimitsComp()
{
    printf("Float data type limits (computed)\n");
    compPrintFloat();
    compPrintDouble();
}

void compPrintFloat()
{
    float n;
    float min;
    float max;

    for (n = 1; n > n / 2; n = n * 2)
        max = n;

    for (n = 1; n < n * 2; n = n / 2)
        min = n;

    printf("%e <= float <= %e\n", min, max);
}

void compPrintDouble()
{
    double n;
    double min;
    double max;

    for (n = 1; n > n / 2; n = n * 2)
        max = n;

    for (n = 1; n < n * 2; n = n / 2)
        min = n;

    printf("%e <= double <= %e\n", min, max);
}
