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
        int min;
        int dem=0;
        for(int i=0;i<n-1;i++){
            min=i;
            for(int j=i+1;j<n;j++){
                if(a[j]<a[min]) min=j;
            }
            if(min!=i){
                swap(a[min],a[i]);
                dem++;
            }
        }
        cout<<dem<<endl;
    }
}
