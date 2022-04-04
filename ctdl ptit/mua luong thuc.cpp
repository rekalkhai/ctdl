#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n,s,m;
		cin >> n >> s >> m;
		int x=s/7;
		int y=s-x;
		int res=m*s;
		if(n*y < m*s) cout << -1 << endl;
		else
		{
			int cnt=1;
			while(cnt*n<res) cnt++;
			cout << cnt << endl;
		}
	}
}

