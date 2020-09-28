// Exercise 1-19. Write a function reverse (s) that reverses the character
// string s. Use it to write a program that reverses its input a line at a time.

#include <stdio.h>

#define MAXLINE 10 /* maximum input line size */

int myGetline(char line[], int maxline);
void reverse(char input[], char output[], int len);

int main()
{
    int len;             /* current line length */
    char line[MAXLINE];  /* current input line */
    char rLine[MAXLINE]; /* reversed line */

    len = 0;

    while ((len = myGetline(line, MAXLINE)) > 0)
    {
        reverse(line, rLine, len);
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

/* reverse: reverses string 'in' into 'out' */
void reverse(char in[], char out[], int lim)
  {
      int i;

      i = 0;
      for (i = 0; i < lim-1; ++i) {
          out[lim-2-i] = in[i];
      }
      out[lim-1] = '\n';
      out[lim] = '\0';
  }

