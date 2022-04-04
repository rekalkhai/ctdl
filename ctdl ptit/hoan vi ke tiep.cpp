#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,a[1000],ok;
		cin>>n;
		for(int i=0;i<n;i++) cin>>a[i];
		int i=n-2;
		while(i>=0 && a[i]>a[i+1]) i--;
		if(i==-1) 
		{
			for(int x=1;x<=n;x++) cout<<x<<" ";
		}
		else {
			int j=n-1;
			while(a[j] <a[i]) j--;
			swap(a[i],a[j]);
			int l=j+1,r=n-1;
			while(l<r)
			{
				swap(a[l],a[r]);
				l++;
				r--;
			}
			for(int x=0;x<n;x++) cout<<a[x]<<" ";
		}
		cout<<endl;
	}
}
