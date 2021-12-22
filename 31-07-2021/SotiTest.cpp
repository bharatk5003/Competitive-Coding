#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int helper(int* arr, int n)
{
	int si = 0;
	int ei = 0;
	int maxi = 0;
	for (int i = 0; i < n - 1; i++) {
		maxi = max(maxi, i + arr[i]);
		if ( i == ei ) {
			si++;
			ei = maxi;
		}
	}
	return si;
}

int fountainActivation(vector<int> &locations) {
	int n = locations.size();
	int arr[n];
	for (int i = 1; i <= n; i++)
	{
		int l = max(1, i - arr[i - 1]);
		int r = min(n, i + arr[i - 1]);
		arr[l] = max(arr[l], r - l);
	}
	int longest = helper(arr, n);
	if (n ==  longest) {
		return 0;
	} else {
		return n - longest - 1;
	}
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
	while (t--) {

		int n;
		cin >> n;
		int arr[n];
		vector<int>v;
		for (int i = 0; i < n; i++)
		{
			int a;
			cin >> a;
			v.push_back(a);

		}

		cout << fountainActivation(v) << endl;;


	}


}

