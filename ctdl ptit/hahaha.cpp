#include<bits/stdc++.h>
using namespace std;
int n,ok=1;
char mang[1000];
void khoitao(){
	for(int i=1;i<=n;i++){
		mang[i]='A';
	}
}
void sinh(){
	int i = n;
        while(i >= 1 && mang[i] == 'H'){
            mang[i] = 'A';
            i--;
        }
        if(i == 0) ok = 0;
        else mang[i] = 'H';
}
int kiemtra(){
	if(mang[1]!='H' || mang[n]!='A') return 0;
	for(int i=1;i<n;i++){
		if(mang[i]=='H' && mang[i+1]=='H') return 0;
	}
	return 1;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		khoitao();
		ok=1;
		while(ok){
			if(kiemtra()==1){
				for(int i=1;i<=n;i++) cout<<mang[i];
				cout<<endl;
			}
			sinh();
		}
	}
}
