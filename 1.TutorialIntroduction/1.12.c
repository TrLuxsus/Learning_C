// Exercise 1-12. Write a program that prints its input one word per line.

#include <stdio.h>

#define IN 1  /* inside a word */
#define OUT 0 /* outside a word */

/* prints one word per line */
main()
{
    int c, state;

    while ((c = getchar()) != EOF)
    {
        if (c != ' ' && c != '\n' && c != '\t')
        {
            state = IN;
            putchar(c);
        }
        else if (state == IN)
        {
            state = OUT;
            putchar('\n');
        }
    }
}
