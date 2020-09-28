// Exercise 1-16. Revise the main routine of the longest-line program so it will
// correctly print the length of arbitrarily long input lines, and as much as possible
// of the text.

#include <stdio.h>

#define MAXLINE 10 /* maximum input line size */

int myGetline(char line[], int maxline);
void copy(char to[], char from[]);

/* print longest input line */
int main()
{
    int fra;               /* current line fragment length */
    int len;               /* current line length */
    int max;               /* maximum length seen so far */
    char line[MAXLINE];    /* current input line */
    char longest[MAXLINE]; /* longest line saved here */

    max = 0;
    len = 0;

    while ((fra = myGetline(line, MAXLINE)) > 0)
    {
        len = len + fra;
        if (fra != MAXLINE - 1)
        {
            if (len > max)
            {
                max = len;
                copy(longest, line);
            }
            len = 0;
        }
    }
    if (max > 0) /* there was a line */
        printf("\nlongest line (%d): %s", max, longest);
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

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[])
{
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}
