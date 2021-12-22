#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

vector<nt> TopView(Node* root)
{
	vector<int>ans;
	if (root == NULL)
		return ans;
	map<int, int>m;
	queue<pair<Node*, int>>q;
	q.push({root, 0});

	while (!q.empty())
	{

		auto it = q.front();
		q.pop();
		Node* node = it.first;
		int line = it.second;

		if (m.count(line) == 0)
			m[line] = node->data;

		if (root->left != NULL)
		{
			q.push({root->left, line - 1});
		}
		if (root->right != NULL)
		{
			q.push({root->right, line + 1});
		}


	}

	for (auto it : m)
	{
		ans.push_back(it.second);
	}



}