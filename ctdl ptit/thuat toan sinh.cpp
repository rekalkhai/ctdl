#include <bits/stdc++.h>
using namespace std;
int n,a[1000]={0} , ok;
int check(int x , int b[])
{
    for(int i=0; i<x; i++){
        if(b[i]!= b[x-i-1]) return 0;
    }
    return 1;
}
void sinh ()
{
    int i=n-1;
    while(i>=0 && a[i]==1){
        a[i] = 0;
        i--;
    }
    if(i==-1) ok=0;
    else a[i] = 1;
}
main ()
{
    cin >> n;
    ok=1;
    while(ok)
    {
        if(check(n,a)==1) 
        {
            for (int  i = 0; i < n; i++)
            {
                /* code */
                cout<<a[i]<<" ";
                
            }
            cout<<endl;
            
        }
        sinh();
    }
}
