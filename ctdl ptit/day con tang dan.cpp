#include<bits/stdc++.h>

using namespace std;
int n,a[100],b[100]={0};
vector<string> res;
void inkq()
{
	vector<int> v;
	for(int i=1;i<=n;i++)
	{
		if(b[i]==1) v.push_back(a[i]);
	}
	if(v.size()>=2)
	{
		int check=0;
		for(int i=1;i<v.size();i++)
		{
			if(v[i]<v[i-1])
			{
				check=1;
				break;
			}
		}
		if(check==0)
		{
			string tmp="";
			for(int i=0;i<v.size();i++)
			{
				if(i!=v[v.size()-1])
				{
					tmp+=to_string(v[i]);
					tmp+=" ";
				}
				else tmp+=to_string(v[i]);
			}
			res.push_back(tmp);
		}
	}
}
void Try(int i)
{
	for(int j=0;j<=1;j++)
	{
		b[i]=j;
		if(i==n) inkq();
		else Try(i+1);
	}
}
int main()
{
	cin >> n;
	for(int i=1;i<=n;i++) cin >> a[i];
	Try(1);
	sort(res.begin(),res.end());
	for(int i=0;i<res.size();i++)
	{
		cout << res[i] << endl;
	}
}

