#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
#ifndef ONLINE_JUDGE
	// for getting input from input.txt
	freopen("input.txt", "r", stdin);
	// for writing output to output.txt
	freopen("output.txt", "w", stdout);
#endif

	int t;
	cin >> t;
	while (t--)
	{


		int k;
		cin >> k;
		int water = 100 - k;

		int gcd = __gcd(k, water);
		//	cout << gcd << endl;

		cout << (100) / gcd << endl;


	}




}