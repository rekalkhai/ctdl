#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long long a, b, n, m;
		cin >> a >> b;
		int mang1[100], mang2[100], mang[2000] = {0};
		for (int i = 0; i < a; i++)
			cin >> mang1[i];
		for (int i = 0; i < b; i++)
			cin >> mang2[i];
		for (int i = 0; i < a; i++)
		{
			for (int j = 0; j < b; j++)
			{
				mang[i + j] = mang[i + j] + mang1[i] * mang2[j];
			}
		}
		for (int i = 0; i < a + b - 1; i++)
		{
			cout << mang[i] << " ";
		}
		cout << endl;
	}
}
