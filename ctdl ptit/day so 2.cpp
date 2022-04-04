#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t ; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		int a[100];
		vector<int> tmp;
		for(int i=0;i<n;i++)
		{
			cin >> a[i];
			tmp.push_back(a[i]);
		}
		vector<vector<int>> res;
		res.push_back(tmp);
		for(int i=n-1;i>=1;i--)
		{
			vector<int> v;
			for(int j=0;j<i;j++)
			{
				a[j]=a[j]+a[j+1];
				v.push_back(a[j]);
			}
			res.push_back(v);
		}
		for(int i=res.size()-1;i>=0;i--)
		{
			cout << "[";
			for(int j=0;j<res[i].size();j++)
			{
				if(j==res[i].size()-1) cout << res[i][j] ;
				else cout << res[i][j] << " ";
			}
			cout << "] ";
		}
		
		cout << endl;
	}
}

