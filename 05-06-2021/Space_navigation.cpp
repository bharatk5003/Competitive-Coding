#include <bits/stdc++.h>
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


		int p, q;
		cin >> p >> q;
		unordered_map<char, int>m;
		string s;
		cin >> s;
		for (int i = 0; i < s.size(); i++)
		{
			m[s[i]]++;
		}
		if (p >= 0 && q >= 0)
		{
			if (m['R'] >= p && m['U'] >= q)
				cout << "YES" << endl;
			else
				cout << "NO" << endl;
			// return 0;
		}
		else if (p >= 0 && q <= 0)
		{
			if (m['R'] >= p && m['D'] >= q * -1)
				cout << "YES" << endl;
			else
				cout << "NO" << endl;
			//return 0;
		}
		else if (p <= 0 && q <= 0)
		{
			if (m['L'] >= -1 * p && m['D'] >= -1 * q)
				cout << "YES" << endl;
			else
				cout << "NO" << endl;
		}
		else if (p <= 0 && q >= 0)
		{
			if (m['L'] >= -1 * p && m['U'] >= q)
				cout << "YES" << endl;
			else
				cout << "NO" << endl;

		}






	}

}