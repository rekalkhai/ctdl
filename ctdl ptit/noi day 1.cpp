#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t; cin >>t;
	while(t--)
	{
		int n; cin >> n;
		int a[n+5];
		priority_queue<int,vector<int>,greater<int>> q;
		for(int i=0;i<n;i++)
		{
			cin >> a[i];
			q.push(a[i]);
		}
		long long tmp=0;
		while(1)
		{
			int x=q.top();
			q.pop();
			int y=q.top();
			q.pop();
			tmp+=x+y;
			if(q.empty()) break;
			q.push(x+y);
			
			
		}
		cout << tmp << endl;
	}
}
