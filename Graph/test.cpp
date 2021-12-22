#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;


string DecimalToBinaryString(int a)
{
	string binary = "";
	int mask = 1;
	for (int i = 0; i < 31; i++)
	{
		if (mask & a)
			binary = "1" + binary;
		else
			binary = "0" + binary;
		mask <<= 1;
	}

	return binary;
}

vector<int> preCalculate(int max,
                         string pattern)
{
	vector<int> arr(max + 1, 0);

	// If 0 is a valid number
	if (pattern == "0")
		arr[0] = 1;
	else
		arr[0] = 0;

	// For every element i
	for (int i = 1; i <= max; i++)
	{
		// If i is avalid number
		if (DecimalToBinaryString(i).find(pattern) !=
		        std::string :: npos)
		{
			arr[i] = 1 + arr[i - 1];
		}
		else
		{
			arr[i] = arr[i - 1];
		}
	}
	return arr;
}

void solve(int l, int r)
{

	int arr[r - l + 1];



}





int main()
{
#ifndef ONLINE_JUDGE
	// for getting input from input.txt
	freopen("../input.txt", "r", stdin);
	// for writing output to output.txt
	freopen("../output.txt", "w", stdout);
#endif


	solve(l, r, k);


}