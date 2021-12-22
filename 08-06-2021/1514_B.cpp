#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll mod = 1000000007;


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

		ll n, m;
		cin >> n >> m;
		//ans1=(nc1+nc2+nc3.....ncn)-1;

		ll ans1 = helper(n, m) ;
		//	ll ans2 = helper(ans1, m) % mod;

		cout << ans1 << endl;


	}

}