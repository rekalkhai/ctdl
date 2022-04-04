#include <bits/stdc++.h>
using namespace std;
bool h[11], c[11], nguoc[22], xuoi[22];
int s, res, n;
int a[100];
int mang[100][100];
void khoitao()
{
	for (int i = 1; i <= 8; i++)
	{
		for (int j = 1; j <= 8; j++)
		{
			cin >> mang[i][j];
		}
	}
	n = 8;
	for (int i = 0; i < 11; i++)
		h[i] = c[i] = false;
	for (int i = 0; i < 22; i++)
		nguoc[i] = xuoi[i] = false;
	res = 0;
}
void Try(int i)
{
	for (int j = 1; j <= n; j++)
	{
		if (!h[j] && !c[j] && !nguoc[i + j - 1] && !xuoi[i - j + n])
		{
			h[j] = c[j] = nguoc[i + j - 1] = xuoi[i - j + n] = true;
			a[i] = j;
			if (i == n)
			{
				int ans = 0;
				for (int l = 1; l <= 8; l++)
				{
					ans += mang[l][a[l]];
				}
				res = max(res, ans);
			}
			else
				Try(i + 1);
			h[j] = c[j] = nguoc[i + j - 1] = xuoi[i - j + n] = false;
		}
	}
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		khoitao();
		Try(1);
		cout << res << endl;
	}
}
