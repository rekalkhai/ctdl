#include<bits/stdc++.h>
using namespace std;
long long n,ok=1,k,dem=0;
int mang[1000],mang2[1000];
void khoitao(){
	for(int i=1;i<=n;i++){
		mang[i]=0;
	}
}
void sinh(){
	int i = n;
        while(i >= 1 && mang[i] == 1){
            mang[i] = 0;
            i--;
        }
        if(i == 0) ok = 0;
        else mang[i] = 1;
}
int kiemtra(){
	long long sum=0;
	for(int i=1;i<=n;i++){
		if(mang[i]==1) sum+=mang2[i];
	}
	if(sum==k) return 1;
	return 0;
}
int main(){
		cin>>n>>k;
		khoitao();
		ok=1;
		dem=0;
		for(int i=1;i<=n;i++) cin>>mang2[i];
		sort(mang2+1,mang2+n+1);
		while(ok){
			if(kiemtra()==1){
				dem++;
				for(int i=1;i<=n;i++){
					if(mang[i]==1) cout<<mang2[i]<<" ";
				}
				cout<<endl;
			}
			sinh();
		}
		cout<<dem<<endl;
}
