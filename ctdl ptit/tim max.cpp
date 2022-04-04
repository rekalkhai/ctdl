#include<bits/stdc++.h>

using namespace std;
int mod=1e9+7;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long long n; cin >> n;
		long long a[n+5];
		for(long long i=0;i<n;i++) cin >> a[i];
		sort(a,a+n);
		long long sum=0;
		for(long long i=0;i<n;i++)
		{
			sum+=(i*a[i])%mod;
			sum%=mod;
		}
		cout << sum << endl;
	}
}
