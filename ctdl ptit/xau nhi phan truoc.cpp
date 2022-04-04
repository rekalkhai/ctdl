#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.length()-1;
        while(n>=0 && s[n]=='0') n--;
        if(n==-1){
            for(int i=0;i<s.length();i++) cout<<1;
        }
        else {
            s[n]='0';
            for(int i=n+1 ; i<s.length();i++) s[i]='1';
            cout<<s;
        }
        cout<<endl;
    }
}
