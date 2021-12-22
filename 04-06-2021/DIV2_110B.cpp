#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;


bool isPrime(int n)
{
	if (n == 1)
		return true;
	if (n == 2 )
		return true;

	for (int i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
			return false;
	}
	return true;

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

		int n;
		cin >> n;
		vector<int>v1;
		vector<int>v2;
		set<int>s1;
		for (int i = 0; i < n; ++i)
		{
			int a;
			cin >> a;
			if (isPrime(a)) {
				v2.push_back(a);
				s1.insert(a);
			}
			else
				v1.push_back(a);
		}

		//	sort(arr, arr + n, greater<int>());
		int pno = v2.size();
		int npno = v1.size();
		/*	for (int i = 0; i < pno; i++)
				cout << v2[i] << " ";
			cout << endl;
			for (int j = 0; j < npno; j++)
				cout << v1[j] << " ";
			cout << endl;
		*/

		int c = 0;

		for (int i = 0; i < npno; i++)
		{
			for (int j = i + 1; j < npno; j++)
			{
				if (__gcd(v1.at(i), 2 * v1.at(j)) > 1)
					c++;
			}
		}
		sort(v2.begin(), v2.end(), greater<int>());
		for (int i = 0; i < pno; i++)
		{
			for (int j = i + 1; j < pno; j++)
			{
				if (__gcd(v2.at(i), 2 * v2.at(j)) > 1)
					c++;
			}
		}

		int ans = c + npno  * pno;
		cout << ans << endl;



	}

}