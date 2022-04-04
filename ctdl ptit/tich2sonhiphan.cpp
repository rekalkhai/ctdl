#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    string s1, s2;
    cin >> s1 >> s2;
    long long x1 = 0, x2 = 0;
    reverse(s1.begin(), s1.end());
    reverse(s2.begin(), s2.end());
    for (int i = 0; i < s1.size(); i++)
    {
      if (s1[i] == '1')
        x1 += pow(2, i);
    }
    for (int i = 0; i < s2.size(); i++)
    {
      if (s2[i] == '1')
        x2 += pow(2, i);
    }
    cout << x1 * x2 << endl;
  }
}
