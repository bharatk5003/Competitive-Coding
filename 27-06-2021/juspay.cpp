#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
static int edges[100001][1000001];


bool has_path(int n, int s, int e, bool* visited)
{

	visited[s] = true;
	if (edges[s][e] == 1)
		return true;
	bool ans = false;
	for (int i = 0; i < n; ++i)
	{
		if (edges[s][i] == 1 && !visited[i])
		{
			ans = has_path(n, i, e, visited);
			if (ans == true)
				return ans;
		}
	}
	return ans;

}


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
	int mx = INT_MIN;
	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		mx = max(a, mx);

	}

	//int edges[mx + 1][mx + 1];
	memset(edges, 0, sizeof(edges));

	int m;
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		int u, v;
		cin >> u >> v;
		edges[u][v] = 1;
		//edges[v][u] = 1;
	}

	int u1, v1;
	cin >> u1 >> v1;

	bool* visited = new bool[mx + 1];
	for (int i = 0; i <= mx + 1; i++) {
		visited[i] = false;
	}
	cout << "The ans is" << endl;

	bool ans = has_path(mx + 1, u1, v1, visited);
	if (ans == false)
		cout << 0 << endl;
	else
		cout << 1 << endl;



}


