#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;


bool isPalindrome(string s, ll n)
{
	for (ll i = 0, j = n - 1; i < j; i++, j--)
	{
		if (s[i] != s[j])
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
		ll a, b;
		cin >> a >> b;
		string s;
		cin >> s;
		int count_a = 0;
		int count_b = 0;
		for (ll i = 0; i < (ll) s.size(); i++)
		{
			if (s[i] == '0')
				count_a++;
			if (s[i] == '1')
				count_b++;
		}
		a = a - count_a;
		b = b - count_b;

		ll n = (ll)s.size();

		for (int i = 0, j = n - 1; i <= j; i++, j-- )
		{
			if ((s[i] == '0' && s[j] == '1') || s[i] == '1' && s[j] == '0')
				break;


			else if (s[i] == '0' && s[j] == '0')
				continue;
			else if (s[i] == '1' && s[j] == '1')
				continue;
			else if (s[i] == '0' && s[j] != '0')
			{
				s[j] = '0';
				a = a - 1;
			}
			else if (s[i] == '1' && s[j] != '1')
			{
				s[j] = '1';
				b = b - 1;
			}
			else if (s[i] == '?' && s[j] == '0')
			{
				s[i] = '0';
				a = a - 1;
			}
			else if (s[i] == '?' && s[j] == '1')
			{
				s[i] = '1';
				b = b - 1;
			}
			else if (s[i] == '?' && i == j)
			{
				if (a > b)
				{
					s[i] = '0';
					a--;
				}
				else if (b > a)
				{
					s[i] = '1';
					b--;
				}
				break;
			}
			else if (s[i] == '?' && s[j] == '?')
			{
				if (a >= 2)
				{
					s[i] = '0';
					s[j] = '0';
					a = a - 2;
				}
				else if (b >= 2)
				{
					s[i] = '1';
					s[j] = '1';
					b = b - 2;
				}
			}


		}
		//	cout << "a: " << a << " b: " << b << endl;
		bool ans = isPalindrome(s, n);
		if (ans && (a == 0 && b == 0) )
			cout << s << endl;
		else
			cout << -1 << endl;

	}


}