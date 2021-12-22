#include <bits/stdc++.h>
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


		ll D, d, p, Q;
		cin >> D >> d >> p >> Q;
		/*		ll total = 0;
				for (ll i = 0; i < D; i = i + d)
				{

					if (D - i >= d)
						total += p * d ;
					else
						total += (D - i) * p;
					p = p + Q;
				}
				cout << total << endl;
		*/

		int times = D / d;
		int rem = D % d;
		ll ans1 = d * (times * (2 * p + (times - 1) * Q)) / 2 ;
		//count << ans1 << endl;
		ll ans2 = rem * (p + (times ) * Q);
		//cout << ans2 << endl;
		//	cout << ans1 << " " << ans2 << endl;
		cout << ans1 + ans2 << endl;



	}

}