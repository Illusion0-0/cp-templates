struct DSU
{
    int n;
    vector<int> p;
    DSU(int N)
    {
        n = N;
        p.assign(n + 1, -1);
        for (int i = 0; i <= n; i++)
            p[i] = i;
    }
    int Find(int i)
    {
        if (p[i] == i)
            return i;
        return p[i] = Find(p[i]);
    }
    void Merge(int a, int b)
    {
        a = Find(a), b = Find(b);
        if (a != b)
            p[b] = a;
    }
};
