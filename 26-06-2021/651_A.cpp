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

	int a, b;
	cin >> a >> b;

	int counter = 0;

	while (a > 0 && b > 0) {

		if (a == 1 && b == 1)
			break;

		counter++;
		if (a > b)
			swap(a, b);
		a++;
		b -= 2;
	}

	cout << counter << endl;


}


