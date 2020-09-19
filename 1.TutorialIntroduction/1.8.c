// Exercise 1-8. Write a program to count blanks, tabs, and newline

#include <stdio.h>

main()
{
    int c, nb, nt, nl;

    nb = 0;
    nt = 0;
    nl = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
            ++nb;
        if (c == '\t')
            ++nt;
        if (c == '\n')
            ++nl;
    }

    printf("Balnks: %d;\nTabs: %d;\nNewlines: %d;\n", nb, nt, nl);
}
