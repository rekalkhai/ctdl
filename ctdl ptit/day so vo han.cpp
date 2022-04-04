#include <bits/stdc++.h> 
using namespace std;
const long long c = 1e9 + 7;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long f[100];
		int n;
		cin>>n;
		f[0]=0;
		f[1]=1;
		for(int i=2;i<=n;i++)
		{
			f[i]=f[i-1]+f[i-2];
		}
		cout<<f[n]%c<<endl;
	}
}
