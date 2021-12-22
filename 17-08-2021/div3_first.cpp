#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;



void solve()
{
	ll n;
	cin >> n;
	double root1 = floor((double)sqrt(n));
	double root2 = ceil((double)sqrt(n));

	if (root1 != root2)
		root1 = root2;
	int row = root1 ;
	int col = root1 ;
	int ans = root1 * root1;

	int ar = row, ac = 1;
	bool result = false;
	cout << "ans: " << ans << endl;

	for (int i = 1; i <= col; i++)
	{
		if (ans == n)
		{
			result = true;
			ar = row;
			break;
		}
		ans--;
		ac++;

	}
	cout << ans << endl;

	for (int j = col; j >= 0 && result == false; j--)
	{
		if (ans == n)
		{
			result = true;
			ac = col;
			break;
		}
		ans--;
		ar--;
	}
	cout << ar << " " << ac << endl;



}



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
	while (t--) {

		solve();




	}


}






