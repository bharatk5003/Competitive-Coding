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
		int n;
		cin >> n;
		ll arr[n];
		//take the Input
		unordered_map < int, int>m;
		for (int i = 0; i < n; i++)
			cin >> arr[i];
		//	int matrix[n + 1][n + 1];
		int mx = INT_MIN;


		for (int i = 0; i < n; i++)
		{
			m[i] = m[i] + arr[i];
			m[i  + arr[i]] = max(m[i], m[i + arr[i]]);
			mx = max(mx, m[i]);
		}

		cout << mx << endl;


		/*	for (int i = 0; i < n; i++) {
				int count = 0;

				for (int j = i; j < n;)
				{
					count += arr[j];
					j = j + arr[j];

				}
				mx = max(mx, count);
			}

			cout << mx << endl;
		*/

	}


}

