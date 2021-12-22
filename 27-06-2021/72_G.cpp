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

	ll n;
	cin >> n;

	int dp[n + 1];

	dp[0] = 1;
	dp[1] = 1;
	for (int i = 2; i <= n; i++)
	{
		dp[i] = dp[i - 1] + dp[i - 2];
	}

	cout << dp[n] << "\n";








}


