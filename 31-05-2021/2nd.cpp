#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
#ifndef ONLINE_JUDGE
	// for getting input from input.txt
	freopen("input.txt", "r", stdin);
	// for writing output to output.txt
	freopen("output.txt", "w", stdout);
#endif

	int t;
	cin >> t;
	while (t--)
	{

		int a, b, c, d, k;
		cin >> a >> b >> c >> d >> k;

		int sr = abs(a - c);
		int sc = abs(b - d);

		if (sr + sc == k)
		{
			cout << "YES" << endl;
		}
		else if (sr + sc < k)
		{
			if ((sr + sc) % 2 == k % 2)
				cout << "YES" << endl;
			else

				cout << "NO" << endl;
		}
		else
			cout << "NO" << endl;











	}

}