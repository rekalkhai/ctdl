#include <bíts/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(s[0]=='0'){
            cout<<0<<endl;
            continue;
        }
        int n=s.length();
        int d[n+5];
        d[0]=1;
        d[1]=1;
        for(int i=2;i<=n;i++){
            d[i]=0;
            
        }
    }
}