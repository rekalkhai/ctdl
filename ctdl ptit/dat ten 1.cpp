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
        for(int j=i+1;j<=k ;j++) a[j]=a[j-1] +1;
    }
}
int main(){
    cin>>n>>k;
    khoitao();
    vector<string> v;
    for(int i=1; i<=n ; i++){
        string x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    vector<string> cnt;
    cnt.push_back(v[0]);
    for(int i=1;i<v.size();i++){
        if(v[i]!=v[i-1]) cnt.push_back(v[i]);
    }
    n=cnt.size();
    ok=1;
    vector <string> res;
    while(ok){
        string tmp="";
        for(int i=1;i<=k;i++){
            tmp+=cnt[a[i]-1];
            tmp+=" ";
        }
        res.push_back(tmp);
        sinh();
    }
    sort(res.begin(),res.end());
    cout<<res[0]<<endl;
    for(int i=1;i<res.size();i++){
        if(res[i]!=res[i-1]) cout<<res[i]<<endl;
    }
}
