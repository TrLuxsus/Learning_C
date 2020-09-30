// Exercise 2-8. Write a function rightrot(x,n)
// that returns the value of the
// integer x rotated to the right by n bit positions.

unsigned rightrot(unsigned x, int n);

int main()
{
    return 0;
}

unsigned rightrot(unsigned x, int n)
{
    return x >> n;
}
