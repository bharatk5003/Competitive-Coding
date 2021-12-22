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

	int t;
	cin >> t;
	while (t--)
	{

		int n;
		cin >> n;
		int arr[n];
		queue<int>q1;
		queue<int>q2;
		for (int i = 0; i < n; ++i)
		{
			cin >> arr[i];
			if (arr[i] % 2 == 0)
			{
				q1.push(arr[i]);
			}
			else
			{
				q2.push(arr[i]);

			}

		}
		list<int>l;
		int ans[n];
		//vector<int>v;
		int c = 0;
		if (q2.size() > 0) {
			//v[n - 1] = q2.front();
			ans[n - 1] = q2.front();
			l.push_back(q2.front());
			q2.pop();
			c++;
		}
		int i = 0;
		while (c < n )
		{
			if (q1.size() > 0)
			{
				l.push_back(q1.front());
				ans[i++] = q1.front();

				//	v.push_back(q1.front());
				c++;
				q1.pop();
			}
			if (q2.size() > 0)
			{
				l.push_back(q2.front());
				ans[i++] = q2.front();
				//v.push_back(q1.front());
				c++;
				q2.pop();
			}
			//cout << "count" << c << endl;

		}
		//showlist(l);
		for (int i = 0; i < n; ++i)
		{
			cout << ans[i] << " ";
		}
		cout << endl;

	}
}

