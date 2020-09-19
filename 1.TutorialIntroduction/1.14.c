// Exercise 1-14. Write a program to print a histogram of the frequencies of dif-
// ferent characters in its input

#include <stdio.h>

#define EN_ALPHABET_LENGTH 52

main()
{
    int c, i;
    int nc[EN_ALPHABET_LENGTH];

    i = 0;

    for (i = 0; i < EN_ALPHABET_LENGTH; ++i)
        nc[i] = 0;

    while ((c = getchar()) != EOF)
    {
        if (c >= 'A' && c <= 'Z')
            ++nc[c - 'A'];
        if (c >= 'a' && c <= 'z')
            ++nc[c - 'a' + 26];
    }
    
    // print histohram
    for (i = 0; i < EN_ALPHABET_LENGTH; ++i)
    {
        int offset;

        if (i >= 26)
            offset = 6;
        else
            offset = 0;

        printf("%c frequence: %d\n", 'A' + i + offset, nc[i]);
    }
}
