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

		int x1, y1, x2, y2, x3, y3;
		cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
		int ans;

		if (x1 == x2 && x1 == x3)
		{

			if ((y3 < y2 && y1 < y3) || (y3 > y2 && y3 < y1))
			{
				ans = abs(y2 - y1) + 2;
				//cout << "In first " << endl;
			}
			else
			{
				ans = abs(y2 - y1);
				//cout << "in second" << endl;
			}
		}
		else if (y1 == y2 && y2 == y3)
		{


			if ((x2 > x3 && x3 > x1) || (x3 > x2 && x3 < x1))
			{
				ans = abs(x2 - x1) + 2;
			}
			else
			{
				ans = abs(x2 - x1);
			}

		}
		else
		{
			ans = abs(x2 - x1) + abs(y2 - y1);
		}

		cout << ans << endl;

	}




}


