#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;


int helper(string s, string t) {
	if (s.length() % t.length() > 0)
		return -1;

	string bha;
	for (int i = 0; i * t.length() < s.length(); i++) {
		bha.append(t);
	}
	if (bha != s)
		return -1;
	for (int i = 1; i <= t.length(); i++) {
		bha = "";
		string subStr = t.substr(0, i);
		while (bha.length() < t.length()) {
			bha.append(subStr);
		}
		if (bha == t)
			return i;
	}
	return -1;
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
		string s1 = "bcdbcdbcdbcd", t1 = "bcdbcd";
		string s2 = "bcdbcdbcd", t2 = "bcdbcd";


		cout << helper(s1, t1) << endl;
		cout << helper(s2, t2) << endl;
	}




}



