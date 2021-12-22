#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;


void solve()
{
	int n, k;
	cin >> n >> k;
	int arr[n];

	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}


	unordered_map<int, queue<int>>m;

	for (int i = 0; i < n; i++)
	{
		m[arr[i]].push(arr[i]);
	}

	cout << "Bharat" << endl;
	vector<int>ans;
	for (int i = 0; i < n; i++)
	{

		cout << m[arr[i]].front() << " \n";

		if (k - m[arr[i]].size() > 0 )
			ans.push_back(k - m[arr[i]].size());
		else
			ans.push_back(0);
		m[arr[i]].pop();

	}

	for (int i = 0; i < n; i++)
		cout << ans[i] << " ";
	cout << "\n";


}




int main()
{
#ifndef ONLINE_JUDGE
	// for getting input from input.txt
	freopen(".. / input.txt", "r", stdin);
	// for writing output to output.txt
	freopen(".. / output.txt", "w", stdout);
#endif


	int t;
	cin >> t;
	while (t--)
	{

		solve();
	}





}

