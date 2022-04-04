#include<bits/stdc++.h>

using namespace std;
int n,a[100]={0},ok;
void sinh()
{
	int i=n;
	while(i>0 && a[i]==1)
	{
		a[i]=0;
		i--;
	}
	if(i==0) ok=0;
	else a[i]=1;
}
int check(int a[],int n)
{
	if(a[1]==0) return 0;
	if(a[n]==1) return 0;
	int cnt=0,res=0;
	for(int i=2;i<=n;i++)
	{
		if(a[i]==1 && a[i-1]==1) return 0;
		if(a[i]==0)
		{
			cnt++;
			res=max(res,cnt);
		}
		else cnt=0;
	}
	if(res>3) return 0;
	return 1;
}
int main()
{
	cin >> n;
	ok=1;
	while(ok)
	{
		if(check(a,n)==1)
		{
			for(int i=1;i<=n;i++)
			{
				if(a[i]==1) cout << 8 ;
				else cout << 6;
			}
			cout << endl;
		}
		sinh();
	}
}

