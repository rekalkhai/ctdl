#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,s;
        cin>>n>>s;
        int a,dp[40005]={0};
        dp[0]=1;
        for(int i=1;i<=n;i++){
            cin>>a;
            dp[a]=1;
            for(int j=s;j>=a;j--){
                if(dp[j-a]==1) dp[j]=1;
            }
        }
        if(dp[s]==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}n#include <bits/stdc++.h>
using namespace std;
const long long mod=1e9+7;
long long dp[1005][1005];
int main(){
    for(int i=0;i<=1000;i++){
        for(int j=0;j<=i;j++){
            if(i==j || j==0) dp[i][j]=1;
            else dp[i][j]=dp[i-1][j-1] + dp[i-1][j];
            dp[i][j]%=mod;
        }
    }
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        cuot<,dp[n][k]<<endl;
    }
}
