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

	int n, k;
	cin >> n >> k;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	int num = arr[k - 1];
	int c = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] >= num && arr[i] > 0)
			c++;
	}
	cout << c << endl;



}