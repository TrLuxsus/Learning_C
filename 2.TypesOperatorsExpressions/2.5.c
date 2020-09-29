// Exercise 2-5. Write the function any (s1, s2), which returns the first location
// in the string s1 where any character from the string s2 occurs, or -1 if s1
// contains no characters from s2

#include <stdio.h>

/* squeeze: returns the first location in the string s1
   where any character from the string s2 occurs. */
int any(char s1[], char s2[]);

int main()
{
    char s1[] = "ababam\0";
    char s2[] = "mvv\0";

    printf("%d\n", any(s1, s2));

    return 0;
}

/* squeeze: delete all c from s */
int any(char s1[], char s2[])
{
    int i, j;

    for (i = 0; s1[i] != '\0'; i++)
    {
        for (j = 0; s2[j] != '\0'; j++)
        {
            if (s1[i] == s2[j])
                return i;
        }
    }

    return -1;
}
