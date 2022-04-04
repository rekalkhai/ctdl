#include <bits/stdc++.h>
using namespace std;
long long mod(int n){
    if(n==1) return 2;
    if(n==0) return 1;
    long long p=mod(n/2);
    if(n%2) return 2*p*p;
    return p*p;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        long long len=mod(n)/2;
        while(1){
            if(n==1){
                cout<<1<<endl;
                break;
            }
            if(len==k){
                cout<<n<<endl;
                break;
            }
            if(k>len){

                k=len-(k-len);
            }
            len/=2;
            n--;
        }
    }
}
