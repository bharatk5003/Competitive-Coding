#include <bits/stdc++.h>
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

	string s1, s2;
	cin >> s1 >> s2;
	transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
	transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
	//s1 = tolower(s1);
	//s2 = tolower(s2);
	//sort(s1.begin(), s1.end());
	//sort(s2.begin(), s2.end());
//	cout << s1 << endl;
//	cout << s2 << endl;

	if (s1.compare(s2) < 0)
		cout << -1 << endl;
	else if (s1.compare(s2) == 0)
		cout << 0 << endl;
	else
		cout << 1 << endl;





}