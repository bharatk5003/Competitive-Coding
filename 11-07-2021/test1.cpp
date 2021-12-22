#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int find(string s, char c)
{
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == c)
			return i;
	}

	return -1;

}



bool helper(string s, int k)
{

	if (find(s, '1') == -1)
		return true;


	if ( s.size() < k)
	{
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] != '0')
				return false;
		}
		return true;
	}

	int f1 = find(s, '1');

	for (int i = f1; i < f1 + k; i++)
	{
		if (s[i] == '1')
			s[i] = '0';
		else
			s[i] = '1';
	}
	cout << "string is " << s << endl;

	int f2 = find(s, '1');
	//int size = n - f2;
	cout << "f1 " << f1  << " f2 " << f2 << endl;

	bool ans = helper(s.substr(f2) , k);

	//return ans;
	return ans;

}


void solve()
{
	string s;
	cin >> s;
	int k;
	cin >> k;
	int n = s.size();

	if (helper(s, k))
		cout << 1 << endl;
	else
		cout << 0 << endl;


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

		solve();
	}

}
