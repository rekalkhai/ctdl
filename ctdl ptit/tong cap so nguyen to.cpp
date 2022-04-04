#include<bits/stdc++.h>

using namespace std;
int snt(int n)
{
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0) return 0;
	}
	return 1;
}
int main()
{
	int t; cin >>t;
	while(t--)
	{
		int n; cin >> n;
		int tmp=1;
		if(snt(n-2)==1)
		{
			cout << 2 << " "<< n-2 << endl;
			tmp=0;
		}
		else
		{
			int i=3;
			while(i<=n/2)
			{
				if(snt(i)==1 && snt(n-i)==1)
				{
					cout << i << " " << n-i << endl;
					tmp=0;
					break;
				}
				else i+=2;
			}
		}
		if(tmp==1) cout << -1 << endl;
	}
}
