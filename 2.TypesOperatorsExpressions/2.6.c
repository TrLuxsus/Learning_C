// Exercise 2-6. Write a function setbits(x,p,n,y) that returns x with the n
// bits that begin at position p set to the rightmost n bits of y, leaving the other
// bits unchanged.

unsigned setbits(unsigned x, int p, int n, unsigned y);

int main()
{
    return 0;
}

unsigned setbits(unsigned x, int p, int n, unsigned y)
{
    return ((~0 << (p + 1)) & x) | (~(~0 << (p + 1 - n)) & x) |
           (~(~0 << n) & y) << (p + 1 - n);
}
