#include<bits/stdc++.h>
using namespace std;
static int edges[101][101];

void print(int v, bool* visited, int sv)
{
	cout << sv << endl;
	visited[sv] = true;
	for (int i = 0; i <  v; i++)
	{
		if (edges[sv][i] == 1 && visited[i] == false)
			print(v, visited, i);
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
	int v, e;
	cin >> v >> e;

	//int edges[v][v] = {0};
	memset(edges, 0, sizeof(edges));
	for (int i = 0; i < e; i++)
	{
		int a, b;
		cin >> a >> b;
		edges[a][b] = 1;
		edges[b][a] = 1;
	}
	bool *visited = new bool[v];
	for (int i = 0; i < v; i++)
		visited[i] = false;

	for (int i = 0; i < v; i++)
	{
		if (visited[i] == false)
		{
			print(v, visited, i);
		}
	}


}