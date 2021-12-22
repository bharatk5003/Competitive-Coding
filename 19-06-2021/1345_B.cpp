#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;


int search(ll *arr, int start_idx, int end_idx, ll search_val) {

	if ( start_idx == end_idx )
		return arr[start_idx] <= search_val ? start_idx : -1;

	int mid_idx = start_idx + (end_idx - start_idx) / 2;

	if ( search_val < arr[mid_idx] )
		return search( arr, start_idx, mid_idx, search_val );

	int ret = search( arr, mid_idx + 1, end_idx, search_val );
	return ret == -1 ? mid_idx : ret;
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
	while (t--)
	{
		ll n;
		cin >> n;

		ll arr[100000];
		arr[0] = 0;
		for (int i = 1; i < 100000; i++ )
		{
			arr[i] = (i - 1) + 2 * i + arr[i - 1];
		}
		//	cout << "hello" << endl;
		int count = 0;
		while (n > 1)
		{
			int index = search(arr, 0, 100000, n);
			//	cout << "index " << index << " element " << arr[index ] << endl;
			n = n - arr[index];
			count++;

		}
		cout << count << "\n";


	}


}

