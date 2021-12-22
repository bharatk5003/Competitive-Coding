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

	int matrix[5][5];
	int r, c;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++) {
			cin >> matrix[i][j];
			if (matrix[i][j] == 1) {
				r = i;
				c = j;

			}


		}
	}

	int ans = abs(2 - r) + abs(2 - c);
	cout << ans << endl;
}

