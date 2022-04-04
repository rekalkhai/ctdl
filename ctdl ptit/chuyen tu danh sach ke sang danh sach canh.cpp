#include <bits/stdc++.h>
using namespace std;
#include <vector>
int main(){
    int n;
    cin>>n;
    int a[100][100]={0};
    cin.ignore();
    for(int i=1;i<=n;i++){
        string s,tmp;
        getline(cin,s);
        stringstream ss(s);
        while(ss>>tmp){
            int x=stoi(tmp);
            a[i][x]=1;
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i<j && a[i][j]==1){
                cout<<i<<" "<<j<<endl;
            }
        }
    }
}
