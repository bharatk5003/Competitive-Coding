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

		int n, sum;
		cin >> n >> sum;
		int arr[n];
		int total = 0;
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
			total += arr[i];
		}

		if (sum == total) {
			cout << "NO" << endl ;

		}
		else {
			cout << "YES" << endl;
			total = 0;

			for (int i = 0; i < n; i++) {
				total += arr[i];
				if (total == sum)
				{
					int temp = arr[i];
					arr[i] = arr[i + 1];
					arr[i + 1] = temp;
				}
				cout << arr[i] << " " ;

			}
			cout << endl;

		}





	}

}