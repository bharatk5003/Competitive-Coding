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

	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		map < string, int>m;

		for (int i = 0; i < n; i++)
		{
			string s;
			cin >> s;
			int num;
			cin >> num;
			m[s] = m[s] + num;

		}
		for (int i = 0; i < n; i++)
		{
			string s;
			cin >> s;
			int num;
			cin >> num;
			m[s] = m[s] + num;

		}
		for (int i = 0; i < n; i++)
		{
			string s;
			cin >> s;
			int num;
			cin >> num;
			m[s] = m[s] + num;

		}
		vector<int>v;
		for (auto it = m.begin(); it != m.end(); it++)
		{
			v.push_back(it->second);
		}

		sort(v.begin(), v.end());
		for (int i = 0; i < v.size(); ++i)
		{
			cout << v.at(i) << " ";
		}
		cout << endl;




	}

}



