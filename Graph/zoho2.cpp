#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool compare( pair<int, int> a, pair<int, int>b)
{
	return a.first > b.first;

}



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
	int arr[n];
	unordered_map<int, int>m;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		m[arr[i]]++;
	}
	vector<pair<int, int>>v;

	for (auto it = m.begin(); it != m.end(); it++)
	{
		v.push_back({it->second, it->first});

	}

	sort(v.begin(), v.end(), compare);

	for (int i = 0; i < v.size(); i++)
	{

		for (int j = 0; j < v[i].first; j++)
		{

			cout << v[i].second << " ";

		}

	}

// 7
// 2 2 2 3 3 5 4





}