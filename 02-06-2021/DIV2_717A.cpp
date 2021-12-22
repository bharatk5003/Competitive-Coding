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


		int n, k;
		cin >> n >> k;
		//cout << n << k << endl;

		int arr[n];
		for (int i = 0; i < n; i++)
			cin >> arr[i];
		int i = 0;
		while (i < k)
		{
			int dif = arr[i];
			if (k > = diff)
			{
				arr[i] = 0;
				arr[n - 1] += diff;
			}
			else
			{
				arr[i] -= k;
				arr[n - 1] += k;
				break;
			}

		}






	}

}