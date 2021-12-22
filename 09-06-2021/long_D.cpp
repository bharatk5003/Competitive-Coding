#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll mod = 1000000007;

/*
long long int helper(ll x, ll y)
{

	ll ans = 1;
	while (y > 0)
	{

		if (y % 2)ans = (ans * x) % mod;
		x = (x * x) % mod;

		y >>= 1;
	}
	return ans;

}
*/
int main()
{
#ifndef ONLINE_JUDGE
	// for getting input from input.txt
	freopen("../input.txt", "r", stdin);
	// for writing output to output.txt
	freopen("../output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;
	while (t--)
	{

		int n, m;
		cin >> n >> m;
		int arr[n];
		for (int i = 0; i < n; i++)
			cin >> arr[i];
		int ans1[n];
		int ans2[n];
		ans1[0] = 0;
		int mn = arr[0];

		for (int i = 1; i < n; i++)
		{
			if (arr[i] == 1) {
				ans1[i] = 0;
				mn = 1;
			}
			else  {
				if (mn == 1)
				{
					ans1[i] = ans1[i - 1] + 1;
				}
				else
				{
					ans1[i] = -1;
				}
			}


		}

		int mx = arr[n - 1];
		for (int j = n - 1; j >= 0; j--)
		{
			if (arr[j] == 2 )
			{
				ans2[j] = 0;
				mx = 2;
			}
			else
			{
				if (mx == 2)
				{
					ans2[j] = ans2[j + 1] + 1;
				}
				else
				{
					ans2[j] = -1;
				}
			}
		}

		for (int i = 0; i < m; i++)
		{
			int index;
			cin >> index;
			if (ans1[index - 1] != -1 && ans2[index - 1] != -1)
			{
				cout << min(ans1[index - 1], ans2[index - 1]) << " ";
			}
			else
			{
				cout << max(ans1[index - 1], ans2[index - 1]) << " ";
			}

		}
		cout << "\n";


	}

}