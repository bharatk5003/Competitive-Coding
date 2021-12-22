#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;


void solve()
{

	int n, m;
	cin >> n >> m;
	string s[n];
	for (int i = 0; i < n; i++)
	{

		cin >> s[i];
	}
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		arr[i] = 0;
	}

	for (int i = 0; i < (n - 1) / 2; i++)
	{
		int x, y, z;
		cin >> x >> y >> z;
		arr[x - 1] = -1;
		arr[y - 1] = -1;
		int j = 0;
		while (j < z)
		{
			int a;
			cin >> a;
			j++;
		}

	}
	for (int i = 0; i < n; ++i)
	{
		int b;
		cin >> b;
	}

	int index = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == 0)
		{
			index = i;
			break;
		}
	}
	cout << s[index] << endl;

}


int main()
{
#ifndef ONLINE_JUDGE
	// for getting input from input.txt
	freopen("../input.txt", "r", stdin);
	// for writing output to output.txt
	freopen("../output.txt", "w", stdout);
#endif

	int t;
	cin >> t;
	while (t--)
	{

		solve();
	}

}
