#include<bits/stdc++.h>

using namespace std;
int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		int i=9;
		int dem=0;
		int a[10];
		a[0]=1, a[1]=2, a[2]=5, a[3]=10, a[4]=20, a[5]=50, a[6]=100, a[7]=200, a[8]=500, a[9]=1000;
		while(n!=0 && i>=0)
		{
			dem+=n/a[i];
			n%=a[i];
			i--;
		}
		cout << dem << endl;
	}
}

