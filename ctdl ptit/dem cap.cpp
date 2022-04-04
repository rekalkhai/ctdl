#include <bits/stdc++.h>

using namespace std;
int find(int b[], int l, int r, int x)
{
    int res = -1;
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (b[m] > x)
        {
            res = m;
            r = m - 1;
        }
        else
            l = m + 1;
    }
    return res;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int cnt[5] = {0};
        int n, m;
        cin >> n >> m;
        int a[n + 5], b[m + 5];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
            if (b[i] <= 4)
                cnt[b[i]]++;
        }
        sort(b, b + m);
        int dem = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0 || a[i] == 1)
            {
                if (a[i] == 0)
                    continue;
                else
                    dem += cnt[0];
            }
            else
            {
                dem += cnt[0];
                dem += cnt[1];
                int tmp = find(b, 0, m - 1, a[i]);
                if (tmp != -1)
                {
                    dem += m - tmp;
                }
                if (a[i] == 2)
                {
                    dem -= cnt[3];
                    dem -= cnt[4];
                }
                if (a[i] == 3)
                    dem += cnt[2];
            }
        }
        cout << dem << endl;
    }
}

