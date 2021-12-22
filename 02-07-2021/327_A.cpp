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
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}
	int current = 0;
	int best_sum = 0;
	int count = 0;
	int si = 0, ei = n - 1;

	for (int i = 0; i < n; ++i)
	{

		if (arr[i] == 1)
		{

			current -= 1;
		}
		else
		{
			current += 1;
			count++;
		}

		if (current >= best_sum) {
			best_sum = current;
			ei = i;
		}
		if (current < 0)
			current = 0;
		if (best_sum == 1 && current == 1 )
			si = i;


		cout << "count at " << i << " : " << current << endl;


	}
	cout << "Initial Count " << count << endl;

	cout << "si " << si << "ei " << ei << endl;

	for (int i = 0; i < si; i++)
	{
		if (arr[i] == 1)
			count++;
	}

	for (int i = ei + 1; i < n; ++i)
	{
		if (arr[i] == 1)
			count++;
	}



	cout << count << endl;




}


