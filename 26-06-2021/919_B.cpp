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

	int k;
	cin >> k;

	vector<ll>v;

	for (int i = 19; v.size() <= k; i = i + 9)
	{

		int a = i;
		int n = 0;
		while (a > 0)
		{
			n += a % 10;
			a = a / 10;
		}
		if (n == 10)
			v.push_back(i);

	}

	cout << v.at(k - 1) << endl;


}