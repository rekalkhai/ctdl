#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<int , int> res;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        res[x]++;
        if(res[x]==1){
            cout<<x<<" ";
        }
    }
}
