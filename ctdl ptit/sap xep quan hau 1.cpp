#include <bits/stdc++.h>
using namespace std;
int n,dem,cot[100]={0},d1[100]={0},d2[100]={0};
void Try(int i){
    for(int j=1;j<=n;j++){
        if(cot[j]==0 && d1[i-j+n] ==0 && d2[i+j-1]==0){
            cot[j]=1;
            d1[i-j+n]=1;
            d2[i+j-1]=1;
            if(i==n) dem++;
            else {
                Try(i+1);

            }
            cot[j]=0;
            d1[i-j+n]=0;
            d2[i+j-1]=0;
        }
    }
}
int main()
{
	int t; cin >> t;
	while(t--)
	{
		cin >> n;
		dem=0;
		Try(1);
		cout << dem << endl;
	}
}

