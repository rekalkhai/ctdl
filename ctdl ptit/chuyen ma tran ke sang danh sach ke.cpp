#include <bits/stdc++.h>
using namespace std;
#include <vector>
int a[1001][1001];
int main()
{
    int n;
    cin>>n;
    vector<int> res[10001];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
            if(a[i][j]==1){
                res[i].push_back(j);
            }
        }
    }
    for(int i=1;i<=n;i++){
        for(int j:res[i]) cout<<j<<" ";
        cout<<endl;
    }
}
