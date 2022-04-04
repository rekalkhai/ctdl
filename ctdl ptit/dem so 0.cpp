#include<bits/stdc++.h>

using namespace std;
int n,a[1000];
int find(int a[],int l,int r)
{
	int res=-1;
	while(l<=r)
	{
		int m=(l+r)/2;
		if(a[m]==1)
		{
			res=m;
			r=m-1;
		}
		else
		{
			l=m+1;
		}
	}
	return res; 
}
int main()
{
	int t ; cin >> t;
	while(t--)
	{
		cin >> n;
		for(int i=0;i<n;i++) cin >> a[i];
		if(find(a,0,n-1)==-1) cout << n;
		else cout << find(a,0,n-1);
		cout << endl;
	}
}
