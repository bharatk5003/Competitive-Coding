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
	unordered_map<char, int>m;
	for (int i = 0; i < s.size(); i++)
	{
		m[s[i]]++;
	}
	//bool ans = false;

	if (m.size() % 2 == 1)
		cout << "IGNORE HIM!" << endl;
	else
		cout << "CHAT WITH HER!" << endl;


}

