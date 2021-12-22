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
	bool ans = false;

	if (n % 4 == 0 || n % 7 == 0)
	{
		cout << "YES" << "\n";
	}
	else {

		while (n > 0)
		{
			int a = n % 10;
			//	cout << a << "\t";
			if (a != 7 && a != 4)
			{
				ans = true;
				break;
			}

			n = n / 10;

		}
		if (ans == false)
		{
			cout << "YES" << "\n";
		}
		else
		{
			cout << "NO" << "\n";
		}

	}

}


