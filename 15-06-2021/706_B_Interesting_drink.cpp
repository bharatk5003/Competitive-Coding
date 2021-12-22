#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
/*
int search(int *array, int start_idx, int end_idx, int search_val) {

	if ( start_idx == end_idx )
		return array[start_idx] <= search_val ? start_idx : -1;

	int mid_idx = start_idx + (end_idx - start_idx) / 2;

	if ( search_val < array[mid_idx] )
		return search( array, start_idx, mid_idx, search_val );

	int ret = search( array, mid_idx + 1, end_idx, search_val );
	return ret == -1 ? mid_idx : ret;
}
*/



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
//	vector<int>v;
	int arr[n];

	for (int i = 0; i < n; i++)
	{
		//		int p;
		//	cin >> p;
		//	v.push_back(p);
		cin >> arr[i];
	}

	sort(arr, arr + n);


	int q;
	cin >> q;
	for (int i = 0; i < q; i++)
	{
		int m;
		cin >> m;

		cout << (upper_bound(arr, arr + n, m) - arr) << endl;

	}



}

