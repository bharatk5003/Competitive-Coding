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
	vector<char>v;
	for (int i = 0; i < s.size(); i++)
	{
		if (i % 2 == 0)
			v.push_back(s[i]);

	}
	sort(v.begin(), v.end());

	for (int i = 0; i < v.size(); i++)
	{
		if (i != v.size() - 1)
			cout << v.at(i) << "+";
		else
			cout << v.at(i) << " ";

	}
	cout << endl;




}

