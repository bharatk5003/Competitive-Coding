#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;


void solve()
{

	ll n;
	cin >> n;
	ll c1 = 0, c2 = 0;
	// if (n == 1)
	// {
	// 	cout << 1 << " " << c2 << "\n";
	// }
	// else if (n == 2)
	// {
	// 	cout << 0 << " " << 1 << "\n";
	// }
	ll ans = n % 3;
	c1 = n / 3;
	c2 = c1;
	if (ans == 1)
	{
		c1 = c1 + 1;
	}
	else if (ans == 2)
	{
		c2 += 1;
	}
	cout << c1 << " " << c2 << "\n";






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

		solve();
	}





}

