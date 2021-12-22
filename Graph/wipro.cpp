#include<bits/stdc++.h>
using namespace std;
int x;

int fun(int n)
{
	int i;
	int arr1[n];
	int arr2[n], arr3[n];
	arr1[0] = 0, arr2[0] = 0, arr3[0] = 0;
	arr1[1] = 1, arr2[1] = 2, arr3[1] = 3;

	for (int i = 2; i <= n; i++)
	{
		arr1[i] = arr2[i - 1] + arr3[i - 2];
		arr2[i] = 2 * arr1[i];
		arr3[i] = 3 * arr1[i];

	}
	return arr1[n];

}

int main()
{
#ifndef ONLINE_JUDGE
	// for getting input from input.txt
	freopen("../input.txt", "r", stdin);
	// for writing output to output.txt
	freopen("../output.txt", "w", stdout);
#endif

	int i, j, z, hold, size;
	int arr[] = {19, 14, 7, 13};
	size = sizeof(arr) / sizeof(int);
	i = size / 4;
	for (j = size / 4; j < size; j++)
	{
		for (z = j - i; z > 0; z = z - i)
		{
			if (arr[z + i] > arr[z])
			{
				break;
			}
			else
			{
				hold = arr[z];
				arr[z] = arr[z + i];
				arr[z + i] = hold;

			}
		}
	}
	cout << arr[2] << endl;





}
