#include<bits/stdc++.h>

using namespace std;
int n,k,a[1000],b[1000],ok;
void ktao()
{
	for(int i=1;i<=k;i++) a[i]=i;
}
void sinh()
{
	int i=k;
	while(i>0 && a[i]==n-k+i) i--;
	if(i==0) ok=0;
	else
	{
		a[i]++;
		for(int j=i+1;j<=k;j++) a[j]=a[j-1]+1;
	}
}
int main()
{
	
		cin >> n >> k;
		for(int i=0;i<n;i++) cin >> b[i];
		sort(b,b+n);
		vector<int> v;
		v.push_back(b[0]);
		for(int i=1;i<n;i++)
		{
			if(b[i]!=b[i-1]) v.push_back(b[i]);
		}
		n=v.size();
		ktao();
		ok=1;
		while(ok)
		{
			for(int i=1;i<=k;i++) cout << v[a[i]-1]<< " ";
			cout << endl;
			sinh();
		}
}


