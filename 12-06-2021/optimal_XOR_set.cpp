#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mod 1000000007;

ll helper(ll n)
{

	ll res = 1;
	while (res <= n)res = res << 1;

	return (res - 1);

}
void makeCombiUtil(vector<vector<int> >& ans,
                   vector<int>& tmp, int n, int left, int k)
{
	// Pushing this vector to a vector of vector
	if (k == 0) {
		ans.push_back(tmp);
		return;
	}

	// i iterates from left to n. First time
	// left will be 1
	for (int i = left; i <= n; ++i)
	{
		tmp.push_back(i);
		makeCombiUtil(ans, tmp, n, i + 1, k - 1);

		// Popping out last inserted element
		// from the vector
		tmp.pop_back();
	}
}

vector<vector<int> > makeCombi(int n, int k)
{
	vector<vector<int> > ans;
	vector<int> tmp;
	makeCombiUtil(ans, tmp, n, 1, k);
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

	int t;
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> t;
	while (t--)
	{
		//cout << "test" << endl;

		ll n, k;
		cin >> n >> k;

		if (k == 1)
			cout << n << endl;
		else {

			ll req_no = helper(n);

			vector<vector<int> > ans = makeCombi(n, k);
			int arr[k];
			int xor_mx = INT_MIN;

			for (int i = 0; i < ans.size(); i++)
			{
				int xr = 0;
				int j = 0;
				for (; j < k; j++)
				{
					//cout << ans[i][j] << " ";
					xr = xr ^ ans[i][j];
					//		cout << "xr : " << xr << endl;

				}
				//	cout << endl;
				//cout << "XOR: " << xr << endl;
				if (xr > xor_mx)
				{
					for (int l = 0; l < k; l++)
					{
						arr[l] = ans[i][l];
					}
					xor_mx = xr;
				}



				/*

				if (xr == req_no)
				{
				 for (int k = 0; k < ans[i].size(); k++)
				{
				 cout << ans[i][k] << " ";
				}
				 cout << endl;
				 break;
				}

				 */
			}



			//	cout << "The required distinct element for:" << xor_mx << "is\n";
			for (int l = 0; l < k; l++)
			{

				cout << arr[l] << " ";
			}
			cout << endl;
			//	cout << "no " << req_no << endl;

		}

	}


}



