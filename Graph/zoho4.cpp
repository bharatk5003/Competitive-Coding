#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;


void helper(string s, int si, int ei)
{
	if (si == ei)
		cout << s << endl;

	for (int i = si; i <= ei; i++)
	{
		char temp1 = s[si];
		s[si] = s[i];
		s[i] = temp1;
		helper(s, si + 1, ei);

		char temp2 = s[si];
		s[si] = s[i];
		s[i] = temp2;

	}

}



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
	int n = s.size();

	helper(s, 0, n - 1);




}