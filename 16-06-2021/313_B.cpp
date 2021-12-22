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


	string s;
	cin >> s;
	int q;
	cin >> q;
	int dp[s.size()];

//	int c = 0;
	dp[0] = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == s[i + 1])
			dp[i + 1] = dp[i] + 1;
		else
			dp[i + 1] = dp[i];
	}

	while (q--)
	{
		int l, r;
		cin >> l >> r;

		cout << (dp[r - 1] - dp[l - 1]) << endl;



	}



}

