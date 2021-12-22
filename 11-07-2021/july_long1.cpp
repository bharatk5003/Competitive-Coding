#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;




int main()
{
#ifndef ONLINE_JUDGE
	// for getting input from input.txt
	freopen(".. / input.txt", "r", stdin);
	// for writing output to output.txt
	freopen(".. / output.txt", "w", stdout);
#endif

	int t;
	cin >> t;
	while (t--)
	{
		int a, b;
		cin >> a >> b;
		int x = (a + b) / 2;

		int ans = floor((b - x) / 2) + floor((x - a) / 2);

		cout << ans << endl;



	}




}

