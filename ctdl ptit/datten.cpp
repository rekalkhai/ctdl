#include <bits/stdc++.h>
using namespace std;
int n2, n, ok = 1, k, mang[100];
void khoitao()
{
    for (int i = 1; i <= k; i++)
    {
        mang[i] = i;
    }
}
void sinh()
{
    int i = k;
    while (mang[i] == n - k + i)
        i--;
    if (i <= 0)
        ok = 0;
    else
        mang[i]++;
    int p = mang[i];
    while (i <= k)
        mang[i++] = p++;
}
int main()
{
    cin >> n2 >> k;
    set<string> se;
    string s;
    for (int i = 0; i < n2; i++)
    {
        cin >> s;
        se.insert(s);
    }
    n = se.size();
    vector<string> ve;
    for (string x : se)
        ve.push_back(x);
    khoitao();
    while (ok)
    {
        for (int i = 1; i <= k; i++)
        {
            cout << ve[mang[i] - 1] << " ";
        }
        cout << endl;
        sinh();
    }
}
