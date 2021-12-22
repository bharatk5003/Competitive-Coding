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
//	vector<pair<int, int>>v;
	int arr1[n];
	int arr2[n];
	int arr3[n];
	int mx = INT_MIN;
	int sum = 0;
	for (int i = 0; i < n; ++i)
	{
		int a, b;
		cin >> a >> b;
		//v.push_back({a, b});
		arr1[i] = a;
		arr2[i] = b;
		arr3[i] = b;
		mx = max(mx, b);
		sum += a;
	}

	sort(arr3, arr3 + n, greater<int>());
	int second = arr3[1];


	//cout << "sum " << sum << "max " << mx << "second " << second << endl;




	for (int i = 0; i < n; ++i)
	{
		int width = sum - arr1[i];
		int height = mx;

		if (arr2[i] == mx)
		{
			height = second;
			//	cout << "**" << endl;
		}
		//	int height = mx;
		//	cout << "height " << height << endl;

		cout << (width * height ) << " ";
	}
	cout << endl;







}


