#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n,s,m;
		cin >> n>>s>>m;
		int s1 = s- s/7;
		//2*10 = 20
		if(m*s > n*s1) cout <<"-1"<<endl;
		else{
			if((s*m)%n==0) cout <<s*m/n<<endl;
			else cout <<s*m/n+1<<endl;
		}
	}
}

