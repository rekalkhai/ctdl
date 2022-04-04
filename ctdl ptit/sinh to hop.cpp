#include <bits/stdc++.h>
using namespace std;
int a[15],n,ok=0;
void in()
{
    for(int i=0;i<=n;i++) cout<<a[i]<<" ";
    cout<<endl;
}
void sinh(){
    int i=n-1;
    while(a[i]>a[i+1]) i--;
    if(i==0) ok=1;
    else{
        int j=n;
        while(a[j]<a[i]) j--;
        int t=a[i];
        a[i]=a[j];
        a[j]=t;
        int d=i+1,c=n;
        while(d<c){
            t=a[d];
            a[d]=a[c];
            a[c]=t;
            d++;
            c--;
        }
    }
}
main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=1;i<=n;i++) a[i]=i;
        while(!ok){
            in();
            sinh();
        }
        cout<<endl;
    }
}
