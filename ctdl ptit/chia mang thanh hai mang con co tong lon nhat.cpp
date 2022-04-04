#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n,k; cin >> n >> k;
		int a[100];
		int sum=0;
		for(int i=0;i<n;i++)
		{
			cin >> a[i];
			sum+=a[i];
		}
		sort(a,a+n);
		int res=0;
		for(int i=0;i<k;i++)
		{
			res+=a[i];
		}
		int x=sum-res;
		int s1=abs(res-x);
		int tmp=0;
		for(int i=n-1;i>n-k-1;i--)
		{
			tmp+=a[i];
		}
		int y=sum-tmp;
		int s2=abs(tmp-y);
		cout << max(s1,s2) << endl;
	}
}

