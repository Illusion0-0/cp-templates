struct fenwick
{
    vector<int> bit; // binary indexed tree
    int n;
    const int INF = (int)1e9;
    fenwick(int n)
    {
        this->n = n + 1;
        bit.assign(n + 1, 0);
    }

    fenwick(vector<int> a) : fenwick(a.size())
    {
        for (size_t i = 0; i < a.size(); i++)
            add(i, a[i]);
    }

    int sum(int idx)
    {
        int ret = 0;
        for (++idx; idx > 0; idx -= idx & -idx)
            ret += bit[idx];
        return ret;
    }

    int sum(int l, int r)
    {
        return sum(r) - sum(l - 1);
    }

    void add(int idx, int delta)
    {
        for (++idx; idx < n; idx += idx & -idx)
            bit[idx] += delta;
    }

    void range_add(int l, int r, int val)
    {
        add(l, val);
        add(r + 1, -val);
    }
};