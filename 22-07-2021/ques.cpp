#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;




int main()
{
#ifndef ONLINE_JUDGE
	// for getting input from input.txt
	freopen(".. / input.txt", "r", stdin);
	// for writing output to output.txt
	freopen(".. / output.txt", "w", stdout);
#endif

	int t;
	cin >> t;
	while (t--)
	{
		int n, k;
		cin >> n >> k;

		int c = 0;
		while (n > 0)
		{
			n = n / k;
			c++;

		}

		cout << c << endl;


	}




}

