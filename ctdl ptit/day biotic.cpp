#include<bits/stdc++.h>

using namespace std;

int main()
{
   int t = 1, n;
   cin >> t;
   while(t--)
   {
       cin >> n;
       vector<int> a(n);
       for(int &i : a) cin >> i;
       vector<int> dpL(n, 0), dpR(n, 0);
       for(int i = 0; i < n; ++i)
       {
           dpL[i] = a[i];
           for(int j = 0; j < i; ++j)
               if(a[i] > a[j]) dpL[i] = max(dpL[i], dpL[j] + a[i]);
       }
       for(int i = n - 1; ~i; --i)
       {
           dpR[i] = a[i];
           for(int j = n - 1; j > i; --j)
               if(a[i] > a[j]) dpR[i] = max(dpR[i], dpR[j] + a[i]);
       }
       int res = -1;
       for(int i = 0; i < n; ++i) res = max(res, dpL[i] + dpR[i] - a[i]);
       cout << res << endl;
   }
   return 0;
}
