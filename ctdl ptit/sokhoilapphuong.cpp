#include <bits/stdc++.h>
using namespace std;
map<long long, bool> mp;
int n, k, ok = 1, mang[1000];
void khoitao()
{
	for (int i = 0; i < n; i++)
	{
		mang[i] = 0;
	}
}
void sinh()
{
	int i = n - 1;
	while (i >= 0 && mang[i] == 1)
	{
		mang[i] = 0;
		i--;
	}
	if (i == -1)
		ok = 0;
	else
		mang[i] = 1;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	for (long long i = 1; i <= 1000; i++)
	{
		mp[i * i * i] = true;
	}
	int t;
	cin >> t;
	while (t--)
	{
		long long x, check = 0;
		cin >> x;
		vector<int> mang2;
		while (x != 0)
		{
			int p = x % 10;
			mang2.push_back(p);
			x /= 10;
		}
		n = mang2.size();
		reverse(mang2.begin(), mang2.end());
		khoitao();
		ok = 1;
		long long Max = 0, sum = 0;
		while (ok)
		{
			sum = 0;
			for (int i = 0; i < n; i++)
			{
				if (mang[i] == 1)
				{
					sum = sum * 10 + mang2[i];
				}
			}
			if (mp[sum] == true && sum > Max)
			{
				check = 1;
				Max = sum;
			}
			sinh();
		}
		if (check == 1)
			cout << Max << endl;
		else
			cout << -1 << endl;
	}
}
