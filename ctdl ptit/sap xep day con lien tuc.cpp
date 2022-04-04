#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n + 5];
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            v.push_back(a[i]);
        }
        sort(v.begin(), v.end());
        int l, r;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != v[i])
            {
                l = i;
                break;
            }
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (a[i] != v[i])
            {
                r = i;
                break;
            }
        }
        cout << l + 1 << " " << r + 1 << endl;
    }
}
