#include<bits/stdc++.h>

using namespace std;
int n,a[10000]={0},ok;
void sinh()
{
	int i=n-1;
	while(i>=0 && a[i]==1)
	{
		a[i]=0;
		i--;
	}
	if(i==-1) ok=0;
	else a[i]=1;
}
int main()
{
	int k,dem=0;
	cin >> n >> k;
	int b[n+5];
	for(int i=0;i<n;i++)
	{
		cin >> b[i];
	}
	ok=1;
	while(ok)
	{
		int sum=0;
		for(int i=0;i<n;i++)
		{
			if(a[i]==1) sum+=b[i];
		}
		if(sum==k){
			for(int i=0;i<n;i++)
			{
				if(a[i]==1) cout << b[i] << " ";
			}
			cout << endl;
			dem++;
		}
		sinh();
	}
	cout << dem;
}

