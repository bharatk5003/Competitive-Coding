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
	int n;
	cin >> n;
	string s;
	cin >> s;
	int c = 0;
	for (int i = 0; i < n - 1; i++)
	{
		if (s[i] == s[i + 1])
			c++;
	}

	cout << c << endl;


}

