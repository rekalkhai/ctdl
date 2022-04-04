#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int mang[n];
		for(int i=0;i<n;i++){
			cin>>mang[i];
		}
		sort(mang,mang+n);
		long long sum=0,sum2=0;
		for(int i=0;i<n;i++){
			if(i%2==0) sum=sum*10+mang[i];
			else sum2=sum2*10+mang[i];
		}
		cout<<sum2+sum<<endl;
	}
}
