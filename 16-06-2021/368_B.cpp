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
	unordered_map<int, int> m;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	int dp[n];
	dp[n - 1] = 1;
	m[arr[n - 1]]++;

	for (int i = n - 2; i >= 0; i--)
	{
		if (m[arr[i]] == 0) {
			dp[i] = dp[i + 1] + 1;
			m[arr[i]]++;
		}
		else
			dp[i] = dp[i + 1];
	}

	for (int i = 0; i < k; i++)
	{
		int index;
		cin >> index;
		cout << dp[index - 1] << endl;;

	}







}





