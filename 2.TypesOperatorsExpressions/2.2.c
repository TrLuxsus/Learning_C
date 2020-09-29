// Exercise 2-2. Write a loop equivalent to the for loop above without using &&
// or ||.

#include <stdio.h>

const int lim = 10;

int main()
{
    int i, c;
    char s[lim];

    // for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
    //     s[i] = c;

    while (i < lim - 1)
    {
        c = getchar();
        if (c != EOF)
            break;
        if (c != '\n')
            break;
        s[i++] = c;
    }

    s[i] = '\0';

    printf("%s", s);

    return 0;
}
