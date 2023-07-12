const int MAX = 1e7;
vector<int> d(MAX + 1), ans(MAX + 1, INT_MAX);

void sieve()
{
    for (int i = 1; i <= MAX; ++i)
        for (int j = i; j <= MAX; j += i)
            d[j] += i;
}

void fillans()
{
    for (int i = 1; i < MAX + 1; i++)
    {
        if (d[i] < MAX + 1)
            ans[d[i]] = min(ans[d[i]], i);
    }
}