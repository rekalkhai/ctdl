#include <bits/stdc++.h>
using namespace std;
int five(int n){
	string s=to_string(n);
	for(int i=0;i<s.length();i++){
		if(s[i]=='5') s[i]='6';
	}
	return stoi(s);
}
int six(int n){
	string s=to_string(n);
	for(int i=0;i<s.length();i++){
		if(s[i]=='6') s[i]='5';
	}
	return stoi(s);
}
int main(){
	int m,n;
	cin>>m>>n;
	cout<<six(m)+six(n)<<" "<<five(m)+five(n);
}
