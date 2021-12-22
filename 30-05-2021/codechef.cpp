#include <bits/stdc++.h>
using namespace std;

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
		int n;
		cin >> n;
		int arr[n];
		unordered_map<int, int>m;
		for (int i = 0; i < n; ++i)
		{
			cin >> arr[i];
			m[i + 1] = arr[i];
		}
		int max = INT_MIN;

		for (int i = 0; i < n; ++i)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
		//	cout << "hello world";
		cout << "My name is Bhaar";


	}

}