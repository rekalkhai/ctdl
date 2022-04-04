#include <bits/stdc++.h>
using namespace std;
int n,k,a[10000],ok;
void sinh(){
    int i=n-1;
    while(i>=0 && a[i]==1){
        a[i]=0;
        i--;
    }
    if(i==-1) ok=0;
    else {
        a[i]=1;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>k;
        ok=1;
        while(ok){
            int dem=0;
            for(int i=0;i<n;i++) {
                if(a[i]==1) dem++;
            }
            if(dem==k) {
                for(int i=0;i<n;i++){
                    cout<<a[i];

                }
                cout<<endl;
            }
            sinh();
        }
    }
}
