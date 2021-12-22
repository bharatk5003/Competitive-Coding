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

	unordered_map<char, int>m;

	string s;
	cin >> s;
	int n = s.size();
	string str = "";
	//unordered_map<char, int>m;
	char cc;
	for (int i = 0; i < n; i++)
	{
		//cout << m[s[i]] << " " << cc << endl;;
		if (m[s[i]] == 0)
		{
			m[s[i]]++;
			cc = s[i];
		}
		else
		{
			s[i] =  (s[i - 1] + 1);
			cc = s[i];
			m[s[i]]++;
		}


	}
	//cout << endl;

	cout << s << endl;






}