// Exercise 2-4. Write an alternate version of squeeze (s1,s2) that deletes
// each character in s1 that matches any character in the string s2

#include <stdio.h>

/* squeeze: delete all characters from s2 in s1. */
void squeeze(char s1[], char s2[]);

int main()
{
    char s1[] = "ababam\0";
    char s2[] = "bvv\0";

    squeeze(s1, s2);

    printf(s1);

    return 0;
}

/* squeeze: delete all c from s */
void squeeze(char s1[], char s2[])
{
    int i, j, k;
    int occured = 0;

    for (i = j = 0; s1[i] != '\0'; i++)
    {
        for (k = 0; s2[k] != '\0'; k++)
        {
            if (s1[i] == s2[k])
                occured = 1;
        }

        if (!occured)
            s1[j++] = s1[i];

        occured = 0;
    }
    s1[j] = '\0';
}
