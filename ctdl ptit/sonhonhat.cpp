#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	int s,n;
	cin>>s>>n;
	n--;
	s--;
	vector<int>ve;
	ve.push_back(1);
	while(n!=0){
		if(s>=9) {
			s-=9;
			ve.push_back(9);
			n--;
		}
		else if(s!=0)
		{
			ve.push_back(s);
			n--;
			s=0;
		}
		else 
		{
			ve.push_back(0);
			n--;
		}
	}
	if(s>=9) cout<<-1<<endl;
	else
	{
		if(s!=0) ve.at(0)+=s;
		reverse(ve.begin()+1,ve.end());
		for(int i:ve) cout<<i;
		cout<<endl;
	}
}
}
