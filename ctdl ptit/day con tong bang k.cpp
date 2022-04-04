#include<bits/stdc++.h>
using namespace std;
int n=8,ok=1;
char s[1000];
vector<string>ve;
void khoitao(){
	for(int i=0;i<n;i++){
		s[i]='0';
	}
	s[1]='2';
	s[4]='2';
}
void sinh(){
	int i=n-1;
	while(i>=0 && s[i]=='2'){
		s[i]='0';
		i--;
	}
	if(i==-1) ok=0;
	else s[i]='2';
}
int kiemtra(){
	char a[1000]="";
	int j=0;
	if(s[2]!='0' || s[3]!='2') return 0;
	if(s[4]=='0') return 0;
//	for(int i=n-1;i>=0;i--) {
//		a[j]=s[i];
//		j++;
//	}
//	j--;
//	for(int i=0;i<n;i++){
//		if(s[i]!=a[i]) return 0;
//	}
	return 1;
}
int main(){
	khoitao();
	while(ok){
		if(kiemtra()){
			for(int i=0;i<n;i++) {
				if(i==2 || i==4) cout<<"/";
				cout<<s[i];
			}
			cout<<endl;
		}
		sinh();
	}
}

