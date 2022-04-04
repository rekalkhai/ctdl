#include <bits/stdc++.h>
using namespace std;
int n,a[1000];
void inkq(int i){
    cout<<"[";
    for(int j=1;j<=i;j++)
    {
        if(j!=i) cout<<a[j]<<" ";
        else cout<<a[j]<<"]"<<endl;
    }
}
void Try(int i){
    for(int j=1;j<=i;j++){
        a[j]=a[j]+a[j+1];
        if(j==i){
            inkq(i);
            Try(i-1);
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=1;i<=n;i++) cin>>a[i];
        inkq(n);
        Try(n-1);
    }
}
