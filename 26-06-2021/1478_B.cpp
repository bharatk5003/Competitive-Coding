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
		int n, d;
		cin >> n >> d;
		ll arr[n];
		for (int i = 0; i < n; ++i)
		{
			cin >> arr[i];
		}
		for (int i = 0; i < n; i++)
		{
			ll sum = 0;
			string s = "NO";
			while (sum <= arr[i])
			{
				sum += d;
				if ((arr[i] - sum) % 10 == 0)
				{
					s = "YES";
					break;
				}

			}
			cout << s << endl;

		}

	}

}


