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


		string s;
		string p = "";
		cin >> s;
		if (s.size() < 11)
			cout << s << endl;
		else
		{
			string z = to_string(s.size() - 2);
			p = s[0] + z + s[s.size() - 1];

			cout << p << endl;
		}




	}

}