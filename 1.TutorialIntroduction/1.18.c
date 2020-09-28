// Exercise 1-18. Write a program to remove trailing blanks and tabs from each
// line of input, and to delete entirely blank lines.

#include <stdio.h>

#define MAXLINE 10 /* maximum input line size */

int myGetline(char line[], int maxline);
int removeBlanks(char input[], char output[]);

int main()
{
    int len;               /* current line length */
    char line[MAXLINE];    /* current input line */
    char newLine[MAXLINE]; /* changed line */

    len = 0;

    while ((len = myGetline(line, MAXLINE)) > 0)
    {
        if ((len = removeBlanks(line, newLine)) != 1)
            printf("%s", line);
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

/* change: changes string 'in' into 'out'; removes trailing blanks and tabs */
int removeBlanks(char in[], char out[])
{

    int c, i, j, sflag;

    i = 0;
    j = 0;
    sflag = 0;
    while ((c = in[i]) != '\n')
    {
        if (c == ' ' || c == '\t')
        {
            if (sflag == 0)
            {
                out[j] = ' ';
                sflag = 1;
                ++j;
            }
        }
        else
        {
            out[j] = c;
            sflag = 0;
            ++j;
        }
        ++i;
    }

    if (c == '\n')
    {
        out[j] = c;
        ++j;
    }
    out[j] = '\0';
    return j;
}
