#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mod 1000000007;

long long int powerfun(ll x, ll y)
{
	ll res = 1;
	x = x % mod;
	if (x == 0)
		return 0;
	while (y > 0)
	{
		if (y & 1)
			res = (res * x) % mod;
		y >> 1;
		x = (x * x) % mod;
	}
	return res;
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
		ll pos = n;
		ll number = powerfun(2, m);
		ll total_no = powerfun(number, pos);

		cout << number << " " << total_no << endl;



	}



}