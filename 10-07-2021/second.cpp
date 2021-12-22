#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

string substring1(string s)
{
	if (s.size() == 1)
		return "";
	else
		return s.substr(1);

}

string substring2(string s)
{
	int n = s.size();
	if (n == 1)
		return "";
	else
		return s.substr(0, n - 1);
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
	string s = "";
	unordered_map < string, bool>m;
	m[""] = true;
	while (t--)
	{
		string cr;
		cin >> cr;

		string mat1 = substring1(cr);
		string mat2 = substring2(cr);

		cout << mat1 << " " << mat2 << endl;

		if (m[mat1] == true || m[mat2] == true)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
		s += cr;
		m[s] = true;


	}




}


