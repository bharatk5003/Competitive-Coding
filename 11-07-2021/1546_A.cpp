#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;


void solve()
{

	int n;
	cin >> n;
	int arr1[n];
	int arr2[n];
	unordered_map<int, int>inc, dec;

	for (int i = 0; i < n; ++i)
	{
		cin >> arr1[i];
	}

	for (int i = 0; i < n; ++i)
	{
		cin >> arr2[i];
	}

	int sum1 = 0, sum2 = 0;
	for (int i = 0; i < n; ++i)
	{
		if (arr1[i] < arr2[i])
		{
			inc[i + 1] = arr2[i] - arr1[i];
			sum1 += inc[i + 1];
		}
		else if (arr1[i] > arr2[i])
		{
			dec[i + 1] = arr1[i] - arr2[i];
			sum2 += dec[i + 1];
		}
	}

	if (sum1 != sum2)
	{
		cout << -1 << endl;
		return;
	}
	vector<int>v1;
	vector<int>v2;

	for (auto it = inc.begin(); it != inc.end(); it++)
	{
		v1.insert(v1.end(), it->second, it->first);
		//cout << "first " << it->first << " second " << it->second << endl;
	}

	for (auto it = dec.begin(); it != dec.end(); it++)
	{
		v2.insert(v2.end(), it->second, it->first);
		//cout << "first " << it->first << " second " << it->second << endl;
	}


	cout << v1.size() << endl;
	for (int i = 0; i < v1.size(); i++)
	{
		cout << v2[i] << " " << v1[i] << endl;
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
