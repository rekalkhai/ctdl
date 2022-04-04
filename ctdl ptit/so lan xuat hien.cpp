#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t; cin >>t;
	while(t--)
	{
		
		int n,k; cin >> n >> k;
		int a[n+5];
		int dem=0;
		for(int i=0;i<n;i++)
		{
			cin >> a[i];
			if(a[i]==k) dem++;
		}
		if(dem==0) cout << -1 << endl;
		else cout << dem << endl;
	}
}

