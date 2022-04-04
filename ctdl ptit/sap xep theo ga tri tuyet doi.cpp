#include<bits/stdc++.h>

using namespace std;
struct sapxep{
	int vt,gt,ttd;
}; 
bool cmp(sapxep x,sapxep y)
{
	if(x.ttd==y.ttd)
	{
		return x.vt<y.vt;
	}
	return x.ttd<y.ttd;
}
int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n,k;
		cin >> n >> k;
		int a[n+5];
		sapxep list[n+5];
		for(int i=0;i<n;i++)
		{
			cin >> a[i];
			list[i].gt=a[i];
			list[i].vt=i;
			list[i].ttd=abs(k-a[i]);
		}
		sort(list,list+n,cmp);
		for(int i=0;i<n;i++) cout << list[i].gt << " ";
		cout << endl;
	}
}

