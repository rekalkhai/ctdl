#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n+5];
        for(int i=0;i<n;i++) cin>>a[i];
        int res=-100;
        int sum=0;
        for(int i=0;i<n;i++){
            if(sum+a[i]<0){
                sum=0;
                continue;
            }
            else {
                sum+=a[i];
                res=max(sum,res);
            }
        }
        cout<<res<<endl;
    }
}
