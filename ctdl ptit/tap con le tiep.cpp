#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k,a[1000];
		cin>>n>>k;
		for(int i=0;i<k;i++){
			cin>>a[i];
		}
		int i=k-1;
		while(i>=0 && a[i]==n-k+i+1) i--;
		if(i==-1)
		{
			for(int x=0;x<k;x++) cout<<x+1<<" ";
		}
		else {
			a[i]++;
			for(int j=i+1;j<k;j++) a[j]=a[j-1]+1;
			for(int x=0;x<k;x++) cout<<a[x]<<" ";
		}
		cout<<endl;
	}
}
