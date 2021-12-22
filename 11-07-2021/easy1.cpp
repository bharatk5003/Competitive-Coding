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


	int n;
	cin >> n;


	for (int i = (n + 1) ; i <= 90000; i++ )
	{
		set<int>s;
		int ans = i;
		//cout << "the number " << i << endl;
		while (ans > 0)
		{
			int r = ans % 10;
			s.insert(r);
			ans = ans / 10;
			//cout << " " << r << " ";
		}
		//	cout << s.size() << endl;
		if (s.size() == 4)
		{
			cout << i << endl;
			break;
		}


	}

}

