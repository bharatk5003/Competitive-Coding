#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
	int k, n, m;
	cin >> k >> n >> m;
	int arr1[n];
	int arr2[m];
	queue<int>zero;
	queue<int>num;
	for (int i = 0; i < n; i++) {
		cin >> arr1[i];
		if (arr1[i] != 0)
			num.push(arr1[i]);
		else
			zero.push(0);

	}
	for (int i = 0; i < m; i++)
	{
		cin >> arr2[i];
		if (arr2[i] != 0)
			num.push(arr2[i]);
		else
			zero.push(0);
	}
	// cout << "NUM SIZE " << num.size() << endl;
	// cout << "ZERO SIZE " << zero.size() << endl;

	vector<int>ans;
	while (!(num.size() == 0 && zero.size() == 0))
	{
		if (k >= num.front()) {
			ans.push_back(num.front());
			num.pop();
		}
		else if (k < num.front() && zero.size() > 0)
		{
			zero.pop();
			k++;
			ans.push_back(0);
		}
		else
		{
			break;
		}



	}
	//if (ans.size())
	//cout << "Size " << ans.size() << endl;
	if (ans.size() != (n + m))
	{
		cout << -1 << endl;
		return;
	}
	else
	{
		for (int i = 0; i < ans.size(); ++i)
		{
			cout << ans[i] << " ";
		}
		cout << endl;

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
	while (t--)
	{

		solve();
	}

}
