#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

vector<int> helper(ll n)
{
	vector<int>ans;
	while (n > 0)
	{
		int a = n % 10;
		ans.push_back(a);
		n = n / 10;
	}

	return ans;

}




int main()
{
#ifndef ONLINE_JUDGE
	// for getting input from input.txt
	freopen("../input.txt", "r", stdin);
	// for writing output to output.txt
	freopen("../output.txt", "w", stdout);
#endif

	ll n;
	cin >> n;
	ll count = 0;

	while (n > 0) {
		//cout << "value of n: " << n << "\n";

		vector<int>ans = helper(n);
		ll mx = INT_MIN;

		for (int i = 0; i < ans.size(); i++)
		{
			//	cout << "value of ans[i]: " << ans[i] << "\n";
			if (ans[i] > mx)
				mx = ans[i];
			//	cout << mx << endl;
		}
		n = n - mx;
		count++;



	}
	cout << count << "\n";



}


