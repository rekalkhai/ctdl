#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n; cin >> n;
	int a[1001][1001]={0};
	cin.ignore();
	for(int i=1;i<=n;i++)
	{
		string s;
		getline(cin,s);
		stringstream ss(s);
		string tmp;
		while(ss >> tmp)
		{
			int res=stoi(tmp);
			a[i][res]=1;
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}
