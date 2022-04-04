#include <bits/stdc++.h>
using namespace std;
int const nmax=100006;
vector <int > ke[nmax];
int n,m;
bool chuaxet[nmax];
void nhap(){
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        int u,v;
        cin>>u>>v;
        ke[u].push_back(v);
        ke[v].push_back(u);
    }
    for(int i=1;i<=n;i++) chuaxet[i]=true;
}
void dfsstack(int u){
    stack <int > s;
    s.push(u);
    chuaxet[u]=false;
    cout<<u<<" ";
    while(!s.empty()){
        u=s.top();
        s.pop();
        for(int i=0; i <ke[u].size(); i++)
        {
            int v=ke[u][i];
            if(chuaxet[v]){
                cout<<v<<" ";
                chuaxet[v]=false;
                s.push(u);
                s.push(v);
            }
        }
    }
}
int main(){
    nhap();
    dfsstack(1);
}
