#include <bits/stdc++.h>
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
 
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		ok=true;
		while(ok){
			for(int i=0;i<n;i++){
				if(a[i]==0) cout<<"A";
				else cout<<"B";
			}
			cout<<" ";
			sinh();
		}
		cout<<"\n";
	}
}
