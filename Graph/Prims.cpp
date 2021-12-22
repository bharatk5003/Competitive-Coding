
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int getMinVertex(int* weight, int* visited, int n)
{
	int minVertex = -1;
	for (int i = 0; i < n; i++)
	{
		if (!visited[i] && (minVertex == -1 || weight[minVertex] > weight[i]))
			minVertex = i;
	}
	return minVertex;
}


void Prims(int** edge, int n)
{
	bool* visited = new bool[n];
	int* weight = new int[n];
	int* parents = new int[n];
	for (int i = 0; i < n; i++)
		weight[i] = INT_MAX;
	parents[0] = -1;
	weight[0] = 0;

	for (int i = 0; i < n; i++)
	{

		int minVertex = getMinVertex(weight, visited, n);
		visited[minVertex] = true;
		for (int j = 0; j < n; j++)
		{

			if (edge[minVertex][j] != 0 && !visited[j]) {
				if (weight[j] > edge[minVertex][j])
					weight[j] = edge[minVertex][j];
				parents[j] = minVertex;
			}

		}


	}

	for (int i = 1; i < n; i++)
	{
		if (parents[i] < i)
			cout << parents[i] << " " << i << " " << weight[i] << endl;
		else
			cout << i << " " << parents[i] << " " << weight[i] << endl;

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

	int V, E;
	cin >> V >> E;

	int ** edge = new int*[V];
	for (int i = 0; i < V; i++)
	{
		edge[i] = new int[V];
		for (int j = 0; j < V; j++)
			edge[i][j] = 0;
	}


	for (int i = 0; i < E; i++)
	{
		int s, d, w;
		cin >> s >> d >> w;
		edge[s][d] = w;
		edge[d][s] = w;
	}

	Prims(edge, V);



}