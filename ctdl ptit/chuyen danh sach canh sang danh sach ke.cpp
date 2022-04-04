#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int v,e; cin >> v >> e;
		vector<int> res[1000];
		for(int i=1;i<=e;i++)
		{
			int x,y;
			cin >> x >> y;
			res[x].push_back(y);
			res[y].push_back(x);
		}
		for(int i=1;i<=v;i++)
		{
			cout << i << ": ";
			for(int j=0;j<res[i].size();j++)
			{
				cout << res[i][j] << " ";
			}
			cout << endl;
		}
	}
}

