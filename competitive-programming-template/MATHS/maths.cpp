//             <--- M - A - T - H - S --->
bool isprime(int n)
{
    for (int i = 2; i * i <= n; ++i)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int factorial(int n) { return (n == 1 || n == 0) ? 1 : n * factorial(n - 1); }
int power_mod(int a, int b)
{
    int res = 1;
    while (b > 0)
    {
        if (b & 1)
        {
            res = (res * a) % mod;
        }
        a = (a * a) % mod;
        b = b >> 1;
    }
    return (res) % mod;
}
int power(int a, int b)
{
    int res = 1;
    // if(b<0){a=1/a;b=abs(b);}
    while (b > 0)
    {
        if (b & 1)
        {
            res = (res * a);
        }
        a = (a * a);
        b = b >> 1;
    }
    return (res);
}
int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }
int lcm(int a, int b) { return a * b / gcd(a, b); }
int ncr(int n, int r)
{
    long long ans = 1;
    for (int i = 1; i <= r; i++)
    {
        ans *= (n - r) + i;
        ans /= i;
    }
    return ans;
}
int npr(int n, int r)
{
    int ans = 1;
    for (int i = 0; i < r; i++)
        ans = (ans * (n - i));
    return ans;
}