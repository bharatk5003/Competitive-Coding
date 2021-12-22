#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mod 1000000007;


ll factorise(ll n)
{
	ll count = 0;
	while (n % 2 == 0)
	{
		count++;
		n = n / 2;
	}
	for (int i = 3; i * i <= n; i = i + 2)
	{
		while (n % i == 0)
		{
			count++;
			n = n / i;
		}

	}
	if (n > 1)count++;
	return count;

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
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> t;
	while (t--)
	{
		ll a, b, k;
		cin >> a >> b >> k;

		if (k > 60)
		{
			cout << "NO" << endl;
			//	return 0;
		}
		else
		{
			int minops = 0;
			int maxops = 0;
			if (a == b)
				minops = 2;
			else if (a % b == 0 || b % a == 0)
				minops = 1;
			else
				minops = 2;

			ll g = __gcd(a, b);
			a = a / g;
			b = b / g;
			ll a1 = factorise(a);
			ll a2 = factorise(b);
			ll a3 = factorise(g);
			maxops = a1 + a2 + 2 * a3;
			//	cout << "maxops " << maxops << endl;
			if (k >= minops && k <= maxops)
				cout << "YES" << endl;
			else
				cout << "NO" << endl;


		}








	}



}