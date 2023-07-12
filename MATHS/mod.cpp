int inverse(int a, int m)
{
    int m0 = m;
    int y = 0, x = 1;
    if (m == 1)
        return 0;
    while (a > 1)
    {
        int q = a / m;
        int t = m;
        m = a % m, a = t;
        t = y;
        y = x - q * y;
        x = t;
    }
    if (x < 0)
        x += m0;

    return x;
}

int add(int a, int b, int c)
{
    return ((a % c) + (b % c)) % c;
}
int sub(int a, int b, int c)
{
    return ((a % c) - (b % c) + c) % c;
}
int mul(int a, int b, int c)
{
    return ((a % c) * (b % c)) % c;
}
int div(int a, int b, int c)
{
    return ((a % c) * (inverse(b, c) % c)) % c;
}