#include<bits/stdc++.h>

using namespace std;
int find(int a[],int l,int r,int x)
{
	int res=-1;
	while(l<r)
	{
		int m=(l+r)/2;
		if(a[m]==x)
		{
			res=m;
			break;
		}
		else
		{
			if(a[m]>x) r=m-1;
			else l=m+1;
		}
	}
	return res;
}
int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n,k; cin >> n>>k;
		int a[n+5];
		for(int i=0;i<n;i++) cin >> a[i];
		if(find(a,0,n,k)==-1) cout << "NO" << endl;
		else cout << find(a,0,n,k)+1 << endl;
	}
}
