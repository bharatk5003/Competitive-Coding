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
	string s;
	cin >> s;

	int n = s.size();
	int arr[n];
	arr[0] = 1;
	bool ans = false;
	for (int i = 1; i < n; i++)
	{
		if (s[i] == s[i - 1])
		{
			arr[i] = arr[i - 1] + 1;
		}
		else
		{
			arr[i] = 1;
		}

		if (arr[i] == 7)
		{
			ans = true;
			break;
		}
	}

	if (ans == false)
		cout << "NO" << endl;
	else
		cout << "YES" << endl;





}

