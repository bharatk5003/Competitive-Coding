#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
#ifndef ONLINE_JUDGE
	// for getting input from input.txt
	freopen("input.txt", "r", stdin);
	// for writing output to output.txt
	freopen("output.txt", "w", stdout);
#endif

	int t;
	cin >> t;
	while (t--)
	{

		int n, k;
		cin >> n >> k;
		string s;
		cin >> s;
		int arr[k];
		for (int i = 0; i < k; i++)
		{	int num;
			cin >> num;
			arr[i] = num - 1;

		}
		int prev = 0;
		for (int i = 0; i < s.size() - 1; i++)
		{
			if (s[i] == s[i + 1])
				prev += 2;
			else
				prev += 1;

		}


		int curr = 0;
		int ans = 0;
		/*
				int pos = arr[0];
				s[pos] = s[pos] == '0' ? '1' : '0';
				if (pos - 1 >= 0)
				{
					if (s[pos] == s[pos - 1])
					{
						ans += 2;
					}
					else
					{
						ans += 1;
					}

				}
				if (pos + 1 <= n - 1)
				{
					if (s[pos] == s[pos + 1])
					{
						ans += 2;
					}
					else
					{
						ans += 1;
					}

				}
				cout << ans << endl;
		*/
		ans = prev;
		for (int i = 0; i < k; i++)
		{

			int position = arr[i];


			s[position] = s[position] == '0' ? '1' : '0';
			if (position - 1 >= 0)
			{
				if (s[position] == s[position - 1])
				{
					ans += 2;
				}
				else
				{
					ans -= 1;
				}
			}
			if (position + 1 <= n - 1)
			{
				if (s[position] == s[position + 1])
				{
					ans += 2;
				}
				else
				{
					ans -= 1;
				}

			}
			//cout << s << endl;
			//cout << prev << endl;
			cout << abs(ans - prev) << endl;
			prev = ans;

		}









	}

}