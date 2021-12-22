#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;


bool isPrime(int n)
{
	if (n == 1)
		return true;
	if (n == 2 )
		return true;

	for (int i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
			return false;
	}
	return true;

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


		int a, b, x, y;
		cin >> a >> b >> x >> y;
		int ans1 = ceil((double)x / a) + ceil((double)y / b);
		cout << ans1 << endl;

	}

}