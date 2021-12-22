#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mod 1000000007;



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
		ll l, r;
		cin >> l >> r;

		ll value = (r - l);
		int div = 10;
		while ((r / div - l / div) > 0)
		{
			value += (r / div - l / div) ;
			div = div * 10;
		}
		cout << value << endl;



	}


}





