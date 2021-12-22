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
		int l, h;
		cin >> l >> h;
		string s;
		cin >> s;

		int curr = 0;
		int req = h;
		string ans = "NO";
		int zero = 0;
		for (int i = 0; i < l; i++)
		{

			if (s[i] == '0') {
				curr++;
				zero++;
				if (curr == req)
				{
					ans = "YES";
					break;
				}
			}
			else if ( s[i] == '1')
			{
				if (curr > 0)
				{

					req = 2 * (req - curr);
					curr = 0;
				}
				else
				{
					req = req;
					curr = curr;

				}

			}

		}

		cout << ans << endl;


		// int cc = 0;

		// if (ans == "NO")
		// 	cout << "NO" << endl;
		// else {
		// 	for (int i = 0; i < l; i++)
		// 	{
		// 		if (s[i] == '1')
		// 			cc++;
		// 	}
		// 	//	cout << "ccccc" << cc << endl;
		// 	if (cc > 0)
		// 		cout << "YES" << endl;
		// 	else
		// 		cout << "NO" << endl;


	}

}



