// Exercise 2-9. In a two's complement number system, x &= (x-1) deletes the
// rightmost l-bit in x. Explain why. Use this observation to write a faster ver-
// sion of bitcount.

int bitcount(unsigned x);

int main()
{
    return 0;
}

int bitcount(unsigned x)
{
    int b;
    for (b = 0; x != 0; x &= (x - 1))
        b++;
    return b;
}
