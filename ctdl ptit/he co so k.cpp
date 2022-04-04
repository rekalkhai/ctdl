#include<bits/stdc++.h>

using namespace std;
int cnt(string s,int k)
{
	int x=s.length();
	int a=0;
	for(int i=0;i<x;i++)
	{
		int tmp=s[i]-'0';
		a+=tmp*pow(k,x-i-1);
	}
	return a;
}
string tmp(int a,int k)
{
	string res="";
	while(a!=0)
	{
		char tmp=a%k+'0';
		res=tmp+res;
		a/=k;
	}
	return res;
}
int main()
{
	int t; cin >> t;
	while(t--)
	{
		int k; cin >> k; 
		string s1,s2;
		cin >> s1 >> s2;
		int n=cnt(s1,k);
		int m=cnt(s2,k);
		cout << tmp(n+m,k) << endl;
	}
}
