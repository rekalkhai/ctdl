#include <bits/stdc++.h>
using namespace std;
int mod = 1e9 + 7;
long long lt(int n, int k)
{
    if (k == 0)
        return 1;
    long long x = lt(n, k / 2);
    if (k % 2 == 0)
    {
        return x * x % mod;
    }
    return ((x * x) % mod) * n % mod;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, k;
        cin >> n >> k;
        cout << lt(n, k) << endl;
    }
}
