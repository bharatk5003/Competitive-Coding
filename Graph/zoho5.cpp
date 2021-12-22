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
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	unordered_map<int, int>m;

	for (int i = 0; i < n; i++)
		m[arr[i]]++;

	for (auto it = m.begin(); it != m.end(); it++)
	{
		cout << it->first << " " << it->second << endl;
	}







	// for (int i = 1; i <= 100; i++)
	// {
	// 	int ans1 = i / 3;
	// 	int ans2 = i / 5;

	// 	if ((ceil(ans1) == floor(ans1)) && ceil((ans2) == floor(ans2))

	// 	        if (i % 3 == 0 && i % 5 == 0)
	// 		        cout << i << " FiZZBUZZ" << endl;
	// 		        else if (i % 3 == 0)
	// 			        cout << i << " FIZZ" << endl;
	// 			        else if (i % 5 == 0)
	// 				        cout << i << " BUZZ" << endl;
	// 				        else
	// 					        cout << i << " :" << endl;

	// 				}

	int p = 0X01020304;
	unsigned char arr[6] = {2, 4, 6, 8, 10, 12};
	int const *ptr = arr

	                 cout << *(p + 3) << endl






}

