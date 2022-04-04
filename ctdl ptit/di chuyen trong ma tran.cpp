#include <bits/stdc++.h>
using namespace std;
int n,m,a[100][100],dem;
void init(){
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++) cin>>a[i][j];
    }
}
void Try(int i, int j){
    if(i==n && j==m){
        dem++;
        return;
    }
    if(i<n){
        Try(i+1,j);
    }
    if(j<m){
        Try(i,j+1);
    }
    if(i>n || j>m) return;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        init();
        dem=0;
        Try(1,1);
        cout<<dem<<endl;
    }
}
