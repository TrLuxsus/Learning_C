// Exercise 2-7. Write a function invert(x,p,n)
// that returns x with the n bits
// that begin at position p inverted (i.e., I changed into 0 and vice versa), leaving
// the others unchanged.

unsigned invert(unsigned x, int p, int n);

int main()
{
    return 0;
}

unsigned invert(unsigned x, int p, int n)
{
    return (((~x >> (p + 1 - n)) & ~(~0 << n)) << (p + 1 - n)) |
           (~(((~0 >> (p + 1 - n)) & ~(~0 << n)) << (p + 1 - n)) & x);
}
