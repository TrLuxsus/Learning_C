// Exercise 1-13. Write a program to print a histogram of the lengths of words in
// its input. It is easy to draw the histogram with the bars horizontal; a vertical
// orientation is more challenging.

#include <stdio.h>

#define MAX_WORD_LENGTH 45
#define IN 1  /* inside a word */
#define OUT 0 /* outside a word */

main()
{
    int c, nc, i, j, state, wFalg;
    int nw[MAX_WORD_LENGTH];

    nc = 0;
    state = OUT;
    wFalg = 1;

    for (i = 0; i < MAX_WORD_LENGTH; ++i)
        nw[i] = 0;

    while ((c = getchar()) != EOF)
    {
        if (c != ' ' && c != '\n' && c != '\t')
        {
            state = IN;
            ++nc;
        }
        else if (state == IN)
        {
            state = OUT;
            ++nw[nc - 1];
            nc = 0;
        }
    }

    // horizontal bars
    for (i = 0; i < MAX_WORD_LENGTH; ++i)
    {
        printf("Occurence of words with %d letter (%d): ", i + 1, nw[i]);

        for (j = 0; j < nw[i]; ++j)
            putchar('|');

        putchar('\n');
    }

    // vertical bars
    while (wFalg == 1)
    {
        wFalg = 0;

        for (i = 0; i < MAX_WORD_LENGTH; ++i)
        {
            if (nw[i] > 0)
            {
                wFalg = 1;
                putchar('-');
                --nw[i];
            }
            else
                putchar(' ');
        }
        
        putchar('\n');
    }
}
