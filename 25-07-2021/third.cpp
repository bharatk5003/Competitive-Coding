#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;


for (int i = 0; i < s.size(); i++)
{
	if (i % 2 == 1)
		cout << s[i] << " ";

}

int solve(string s, string t)
{

	if (s.size() % t.size() != 0)
		return -1;




}

int gcd(int a, int b)
{
	if (b == 0)
		return a;
	return gcd(b, a % b);
}

int lcm(int a, int b)
{
	return (a / gcd(a, b)) * b;
}

void findSmallestString(string s, string t)
{

	int n = s.length(), m = t.length();

	int l = lcm(n, m);


	string s1 = "", t1 = "";


	for (int i = 0; i < l / n; i++) {
		s1 += s;
	}


	for (int i = 0; i < l / m; i++) {
		t1 += t;
	}


	if (s1 == t1)
		cout << s1;

	else
		cout << -1;
}
int MAXIMUM_LENGTH(int N, int[] A) {
	int sum = A[0];
	int max_sum  = A[0];

	for (int i = 1; i < N; i++)
	{
		if ( sum < 0)
			sum = 0;
		sum += A[i];

		if ( sum > max_sum)
			max_sum = sum;
	}

	return max_sum;
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
		int n, k;
		cin >> n >> k;
		ll range = pow(2, n) - 1;
		int c = range;
		ll ans = 0;

		int loop = min(k, c / 2);

		ans = 2 * range * loop;

		cout << ans << "\n";


	}

}


