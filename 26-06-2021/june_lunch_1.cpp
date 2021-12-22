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
		string s;
		cin >> s;
		if (s[0] != '1')
		{
			s.insert(0, "1");
		}
		else
		{
			s.insert(1, "0");
		}

		cout << s << endl;
	}




}


