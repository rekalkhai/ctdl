#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i = 0 ; i < n ; i++){
        cin>>a[i];
    }
    sort(a,a+n);
    long long max = a[n-1] * a[n-2];
    if(max < a[0] * a[1]){
        max = a[0] * a[1];
    }
    if(max < a[n-1]  * a[n-2] *a[n-3]){
        max = a[n-1]  * a[n-2] *a[n-3];
    }
    if(max < a[0] * a[1]*a[n-1]){
        max = a[0] * a[1]*a[n-1];
    }
    cout<<max;
}
