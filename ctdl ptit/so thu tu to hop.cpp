#include <bits/stdc++.h>
using namespace std;
int n,k,a[1000],b[1000],ok;
void khoitao(){
    for(int i=1;i<=k;i++) a[i]=i;
}
void sinh(){
    int i=k;
    while(i>0 && a[i]==n-k+i) i--;
    if(i==0) ok=0;
    else {
        a[i]++;
        for(int j=i+1;j<=k;j++) a[j]=a[j-1]+1;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>k;
        for(int i=1;i<=k;i++) cin>>b[i];
        khoitao();
        ok=1;
        int x=1;
        while(ok){
            int check=0;
            for(int i=1;i<=k;i++){
                if(a[i]!=b[i]){
                    check=1;
                    break;
                }
            }
            if(check==0){
                cout<<x;
                break;
            }
            else x++;
            sinh();
        }
        cout<<endl;
    }
}
