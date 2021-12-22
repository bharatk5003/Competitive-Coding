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

	ll n, q;
	cin >> n >> q;
	ll arr[n];
	for (ll i = 0; i < n; i++)
	{
		cin >> arr[i];

	}

	for (ll i = 0; i < q; i++)
	{

		int q1;
		cin >> q1;
		if (q1 == 1)
		{
			ll  b, c, d;
			cin >> b >> c >> d;

			for (ll j = b ; j <= c; j++)
			{
				ll  ans = (ll)((d + j  - b) * (d + j - b));
				arr[j - 1] = arr[j - 1] + ans;
				//cout << "change: " << ans << endl;
			}

		}
		else if (q1 == 2)
		{
			ll  m;
			cin >> m;

			cout << arr[m - 1] << endl;

		}


	}

// for (int i = 0; i < n; i++)
// {
// 	cout << arr[i] << " ";
// }



}


