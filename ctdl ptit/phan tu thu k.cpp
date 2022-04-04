#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,k;
        cin>>a>>b>>k;
        int s=a+b;
        int m[s+5];
        for(int i=0;i<s;i++){
            cin>>m[i];
        }
        sort(m,m+s);
        cout<<m[k-1]<<endl;
    }
}
