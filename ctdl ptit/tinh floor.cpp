#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		long long n,k; cin >> n >>k;
		long long a[n+5];
		int res=-1;
		for(long long i=0;i<n;i++)
		{
			cin >> a[i];
			if(a[i]<=k) res=i+1;
		} 
		cout << res << endl;
	}
}

