// Exercise 1-17. Write a program to print all input lines that are longer than 80
// characters.

#include <stdio.h>

#define MAXLINE 10 /* maximum input line size */

int myGetline(char line[], int maxline);

/* print longest input line */
int main()
{
    int len;            /* current line length */
    int cont;           /* continue printing */
    int last;           /* last symbol of line */
    char line[MAXLINE]; /* current input line */

    cont = 0;
    len = 0;

    while ((len = myGetline(line, MAXLINE)) > 0)
    {
        last = line[len - 1];
        if (len == MAXLINE - 1 && last != '\n')
        {
            printf("%s", line);
            cont = 1;
        }
        else if (cont == 1)
        {
            printf("%s\n", line);
            cont = 0;
        }
    }

    return 0;
}

/* myGetline: read a line into s, return length */
int myGetline(char s[], int lim)
{
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if (c == '\n')
    {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}
