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


	unsigned char arr[6] = {2, 4, 6, 8, 10, 12};

	unsigned char *ptr = arr;


	for (int i = 0; i < 6; i++)
	{

		cout << *(ptr + 2i) << end;
	}





}