#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mod 1000000007;





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
		ll n;
		cin >> n ;
		int arr[n];
		int sum = 0;
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
			sum = sum + arr[i];
		}
		int count = 0;
		if (sum % n != 0)
		{
			cout << -1 << endl;
		}
		else
		{

			for (int i = 0; i < n; i++)
			{
				if (arr[i] > (sum / n))
					count++;
			}
			cout << count << endl;
		}






	}



}