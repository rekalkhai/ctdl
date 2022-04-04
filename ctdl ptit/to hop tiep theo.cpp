#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,a[10000];
        cin>>n>>k;
        for(int i=1 ; i<=k;i++) cin>>a[i];
        int j=k;
        while(j>=1 && a[j]==n-k+j) j--;
        if(j==0) cout<<k<<endl;
        else{
            int x=j+1;
            int y,z=a[j+1];
            a[j]++;
            for(int i=j+1;i<=k;i++) a[i]=a[i-1]+1;
            for(int i=1;i<=k;i++){
                if(a[i]==z){
                    y=i;
                    break;
                }
            }
            int dem=0;
            while(x<=k && y<=k){
                if(z==a[y]) dem++;
                z++;
                x++;
                y++;
            }
            cout<<k-dem-j+1<<endl;
        }
    }
}
