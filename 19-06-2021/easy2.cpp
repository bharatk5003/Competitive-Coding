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

	int n;
	cin >> n;

	int arr[n][3];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> arr[i][j];
		}
	}
	bool ans = false;

	for (int j = 0; j < 3; j++)
	{
		int sum = 0;
		for (int i = 0; i < n; i++)
		{
			sum += arr[i][j];
		}
		if (sum != 0)
		{
			ans = true;
			break;
		}
	}
	if (ans == true)
		cout << "NO" << endl;
	else
		cout << "YES" << endl;



}

