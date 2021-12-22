#include<bits/stdc++.h>
using namespace std;


bool helper(int node, int parent, bool* visited, vector<int> adj)
{
	visited[node] = true;

	for (auto it : adj[node])
	{
		if (visited[it] == false)
		{

			if (helper(it, adj[node], visited, adj))
				return true;

		}
		else if (it != parent)
			return true;


	}
	return false;


}


bool cycle(int v, vector<int>adj)
{

	bool * visited = new bool[v];

	for (int i = 0; i < v; i++)
	{
		if (visited[i] == false)
			if (helper(i, -1, visited, adj))
				return true;
	}
	return false;

}


