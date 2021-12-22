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

		int n, k;
		cin >> n >> k;
		//cout << n << endl;
		//int ans = ceil(n / float(2) );
		vector<ll>v;
		for (int i = 0; i < n; ++i)
		{
			ll a;
			cin >> a;
			v.push_back(a);
		}
		sort(v.begin(), v.end(), greater<int>());

		/*	for (int i = 0; i < v.size(); i++)
			{
				cout << v.at(i) << " ";
			}
			cout << endl;
		*/
		ll maxa = 0, maxb = 0;
		for (int i = 0; i < 2 * k ; i++)
		{

			if (i % 2 == 0)
			{
				maxa += v.at(i);

			}

			else
			{
				maxb += v.at(i);
				if (i == (2 * k - 1)) {
					maxb += v.at(i + 1);
					break;
				}
			}
		}

		//	cout << "i " << i << " maxa: " << maxa << " maxb" << maxb << endl;





		cout << max(maxa, maxb) << endl;




	}

}