#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mod 1000000007;





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
		ll n;
		cin >> n ;
		int arr[n];
		int lf_mn_idx = 0;
		int lf_mx_idx = 0;

		int mn = INT_MAX;
		int mx = INT_MIN;
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
			if (arr[i] > mx)
			{
				mx = arr[i];
				lf_mx_idx = i + 1;
			}
			if (arr[i] < mn)
			{
				mn = arr[i];
				lf_mn_idx = i + 1;
			}
		}
		int rg_mn_idx = 0;
		int rg_mx_idx = 0;
		mn = INT_MAX;
		mx = INT_MIN;



		for (int i = n - 1, j = 0; i >= 0; i--, j++)
		{
			if (arr[i] > mx)
			{
				mx = arr[i];
				rg_mx_idx = j + 1;
			}
			if (arr[i] < mn)
			{
				mn = arr[i];
				rg_mn_idx = j + 1;
			}

		}

		int lft_op = max(lf_mn_idx, lf_mx_idx);
		int rgt_op = max(rg_mn_idx, rg_mx_idx);

		int lmnrmax = lf_mn_idx + rg_mx_idx;
		int lmaxrmin = lf_mx_idx + rg_mn_idx;

		//	cout << "lft_op " << lft_op << " rgt_op " << rgt_op << endl;
		//	cout << "lmaxrmin " << lmaxrmin << " lmnrmax" << lmnrmax << endl;


		int ans = min(min(lft_op, rgt_op), min(lmaxrmin, lmnrmax));
		cout << ans << endl;




	}



}