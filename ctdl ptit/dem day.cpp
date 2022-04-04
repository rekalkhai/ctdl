#include<bits/stdc++.h>

using namespace std;
long long mod=123456789;
long long Mod(long long n)
{
	if(n==1) return 2;
	if(n==0) return 1;
	long long cnt=Mod(n/2)%mod;
	if(n%2==0) return (cnt*cnt)%mod;
	return 2*((cnt*cnt)%mod)%mod;
 } 
int main()
{
	int t; cin >> t;
	while(t--)
	{
		long long n; cin >> n;
		cout << Mod(n-1) << endl;
	}
}

