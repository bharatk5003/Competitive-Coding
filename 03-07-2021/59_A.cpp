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


	string s;
	cin >> s;

	int n = s.size();
	int c1 = 0;
	int c2 = 0;
	for (int i = 0; i < n; ++i)
	{

		if (s[i] >= 'a' && s[i] <= 'z')
		{
			c1++;
		}
		else
		{
			c2++;
		}
	}

	if (c1 >= c2) {
		transform(s.begin(), s.end(), s.begin(), ::tolower);
	}
	else
	{
		transform(s.begin(), s.end(), s.begin(), ::toupper);
	}
	cout << s << endl;






}


