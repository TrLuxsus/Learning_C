// Exercise 2·3. Write the function htoi(s), which converts a string of hexa-
// decimal digits (including an optional Ox or 0X) into its equivalent integer value.
// The allowable digits are 0 through 9, a through f, and A through F.

/* lower: convert c to lower case; ASCII only */
int lower(int c);

/* htoi: convert hex to int */
int htoi(char h[]);

/* hexSybToIint: convert symblolic hex numbers to int */
int hexSymbToIint(int h);

int main()
{
    int n;
    char h[] = "0xff1A\0";
    return 0;
}

int htoi(char h[])
{
    int i = 0;
    int answer = 0;
    int valid = 1;
    int hexSymb;

    if (h[i] == '0')
    {
        ++i;
        if (h[i] == 'x' || h[i] == 'X')
        {
            ++i;
        }
        else
            valid = 0;
    }
    else
        valid = 0;

    while (valid && h[i] != '\0')
    {
        answer = answer * 16;
        if (h[i] >= '0' && h[i] <= '9')
        {
            answer = answer + (h[i] - '0');
        }
        else
        {
            h[i] = lower(h[i]);
            hexSymb = hexSymbToIint(h[i]);
            if (hexSymb == 0)
            {
                valid = 0;
            }
            else
            {
                answer = answer + hexSymb;
            }
        }
        ++i;
    }

    if (!valid)
    {
        printf("The string isn't valid hex numbern");
        answer = 0;
    }

    return answer;
}

int lower(int c)
{
    if (c >= 'A' && c <= 'Z')
        return c + 'a' - 'A';
    else
        return c;
}

int hexSymbToIint(int c)
{
    char hexSymb[] = "abcdef";
    int i;
    int answer = 0;

    for (i = 0; answer == 0 && hexSymb[i] != '\0'; i++)
    {
        if (hexSymb[i] == c)
        {
            answer = 10 + i;
        }
    }

    return answer;
}
