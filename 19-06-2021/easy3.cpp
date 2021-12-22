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

	ll k, n, w;
	cin >> k >> n >> w;

	ll ans = ((2 * k + (w - 1) * k) * w) / 2;

	if (ans > n)
	{
		cout << ans - n << endl;
	}
	else
		cout << 0 << endl;






}

