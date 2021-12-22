#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

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
		int n;
		cin >> n;
		ll arr[n];
		for (int i = 0; i < n; i++)
			cin >> arr[i];

		//	bool ans = false;
		int dp[n];
		dp[n - 1] = 1;
		for (int i = n - 2; i >= 0; i--)
		{
			if (arr[i] > 1 && dp[i + 1] == 1)
			{
				dp[i] = 1;
			}
			else if (arr[i] == 1 && dp[i + 1] == 1 )
			{
				dp[i] = 2;
			}
			else if (arr[i] == 1 && dp[i + 1] == 2)
			{
				dp[i] = 1;
			}
			else if (arr[i] > 1 && dp[i + 1] == 2)
			{
				dp[i] = 1;
			}
		}

		if (dp[0] == 1)
			cout << "First" << endl;
		else
			cout << "Second" << endl;

	}


}

