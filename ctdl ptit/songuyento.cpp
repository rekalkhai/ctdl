#include<bits/stdc++.h>
using namespace std;
int mang[1005];  
int n,k,p,s,dem2=0;
vector<int>ve;
vector<int>ve2;
int kiemtra(){
	int sum2=0;
	for(int i=1;i<=k;i++){
		sum2+=ve[mang[i]-1];
	}
	if(sum2!=s) return 0;
	return 1;
}
int songuyento(int m){
	if(m<2) return 0;
	for(int i=2;i<=sqrt(m);i++){
		if(m%i==0) return 0;
	}
	return 1;
}
void ToHop(int i) {
    for (int j = mang[i - 1] + 1; j <= n - k + i; j++) {
        mang[i] = j;
        if (i == k){
        	if(kiemtra()==1){
			dem2++;
			for(int p2=1;p2<=k;p2++){
				ve2.push_back(ve[mang[p2]-1]);
			}
		}
		}
        else
            ToHop(i + 1);
    }
}
int main() {
    int t;
    cin >> t;
    while (t--) {
    dem2=0;
    cin>>k>>p>>s;
	for(int i=p+1;i<=s;i++){
		if(songuyento(i)) ve.push_back(i);
	}
	n=ve.size();
    mang[0] = 0;  
	ToHop(1);
    cout<<dem2<<endl;
    int dem3=0;
	for(int i: ve2){
		dem3++;
		cout<<i<<" ";
		if(dem3%k==0) cout<<endl;
	}
	ve.clear();ve2.clear();
    }
    return 0;
}
