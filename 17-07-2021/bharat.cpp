
void(string s)
{

	int n = s.size();

	for (int i = 0; i < n; i++)
	{
		cout << s[i] << "\n";
	}

}


Unordered_map<char, int>m;

for (int i = 0; i < n; i++)
{

	m[s[i]]++;

}

for (auto it = m.begin(); it != m.end(); it++)
{

	cout << it->first << "   " << it->second << endl;

}