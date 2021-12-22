#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;


bool compare(pair<int, int> A, pair<int, int> B)

{

	if (A.first = B.first)

		return A.second < B.second;

	return A.first < B.first;

}

int solve(int location[], int n)

{

	pair<int, int> range[n];

	for (int i = 0; i < n; i++)

	{

		int id = i + 1;

		range[i].first = max(1, id - location[i]);

		range[i].second = min(n, id + location[i]);

	}

	sort(range, range + n, compare);

	int i = 0;

	int ans = 0;

	while (i < n)

	{

		pair<int, int> p = range[i];

		ans++;

		while (i + 1 < n && range[i].first == range[i + 1].first)

		{

			p.second = max(p.second, range[i + 1].second);

			i++;

		}

		//cout<<p.second<<" "<<i<<endl;

		while (i < n && range[i].second <= p.second)

			i++;

		//cout<<p.second<<" "<<i<<endl;

	}

	return ans;

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

	int location[n];

	for (int i = 0; i < n; i++)

		cin >> location[i];

	cout << solve(location, n) << endl;

	return 0;



}

