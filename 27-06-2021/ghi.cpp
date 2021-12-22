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

	int a, b, c;
	cin >> a >> b >> c;

	int ans1 = a + b + c;
	int ans2 = (a + b) * c;
	int ans3 = a + b * c;
	int ans4 = a * (b + c);
	int ans5 = a * b * c;
	int ans = max(max(ans1, ans2), max( max(ans3, ans4), ans5));
	cout << ans << endl;

}


