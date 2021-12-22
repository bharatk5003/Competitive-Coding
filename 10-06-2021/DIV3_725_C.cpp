#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mod 1000000007;

ll lowerIndex(int arr[], int n, int x)
{
	ll l = 0, h = n - 1;
	while (l <= h) {
		ll mid = (l + h) / 2;
		if (arr[mid] >= x)
			h = mid - 1;
		else
			l = mid + 1;
	}
	return l;
}

// function to find last index <= y
ll upperIndex(int arr[], int n, int y)
{
	ll l = 0, h = n - 1;
	while (l <= h) {
		ll mid = (l + h) / 2;
		if (arr[mid] <= y)
			l = mid + 1;
		else
			h = mid - 1;
	}
	return h;
}






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
		ll n, l, r;
		cin >> n >> l >> r;
		int arr[n];
		for (int i = 0; i < n; i++)
			cin >> arr[i];
		sort(arr, arr + n);
		ll count = 0;
		for (ll i = 1; i < n  ; i++) {
			ll ans1 = lowerIndex(arr + i, n - i, l - arr[i - 1]);

			ll ans2 = upperIndex(arr + i , n  - i, r - arr[i - 1]);
			count += ans2  - ans1 + 1;

			//	cout << "ans1 " << ans1 << " ans2 " << ans2 << " Count " << count << endl;





		}

		cout << count << endl;





	}
	return 0;


}