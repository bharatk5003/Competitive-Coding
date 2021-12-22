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
	int boys[n];

	for (int i = 0; i < n; ++i)
	{
		cin >> boys[i];
	}
	int m;
	cin >> m;
	int girls[m];
	for (int i = 0; i < m; ++i)
	{
		cin >> girls[i];
	}
	sort(boys, boys + n);
	sort(girls, girls + m);
	// int l = min(n, m);
	// int i = 0;
	int count = 0;
	int i = 0, j = 0;
	while (i < n && j < m )
	{

		if (abs(boys[i] - girls[j]) <= 1)
		{
			i++;
			j++;
			count++;

		}
		else if (boys[i] < girls[j])
		{
			i++;
		}
		else {
			j++;
		}


	}
	cout << count << endl;





}


