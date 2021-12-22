#include <bits/stdc++.h>
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

	int t;
	cin >> t;
	while (t--)
	{
		int s1, s2, s3, s4;
		int arr[4];
		cin >> s1 >> s2 >> s3 >> s4;
		arr[0] = s1;
		arr[1] = s2;
		arr[2] = s3;
		arr[3] = s4;

		int f1 = s1 > s2 ? s1 : s2;
		int f2 = s3 > s4 ? s3 : s4;
		sort(arr, arr + 4);

		if ((f1 == arr[3] || f1 == arr[2]) && (f2 == arr[3] || f2 == arr[2]))


		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}








	}

}