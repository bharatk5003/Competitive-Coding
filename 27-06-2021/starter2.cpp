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

		int n, a, b;
		cin >> n >> a >> b;

		ll sum = 2 * (180 + n);

		ll ans = sum - (a + b);
		cout << ans << endl;


	}

}


