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

	int n, k;
	cin >> n >> k;

	int arr[n];

	for (int i = 0; i < n; i++)
		cin >> arr[i];

//	for (int i = 0; i < n; i++)
//	cout << arr[i] << " ";
//	cout << endl;

	int dp[n];
	dp[0] = arr[0];
	int mn = INT_MAX;

	for (int i = 1; i < k; i++) {
		dp[i] = dp[i - 1] + arr[i];

	}
	mn = dp[k - 1];
	int index = 1;

	for (int i = k; i < n; i++)
	{
		dp[i] = dp[i - 1] + arr[i] - arr[i - k];
		if (dp[i] < mn)
		{
			mn = dp[i];
			index = i + 2 - k;
		}
	}
//	for (int i = 0; i < n; i++)
//	cout << dp[i] << " ";
//	cout << endl;

	//cout << mn << endl;
	cout << index << endl;



}

