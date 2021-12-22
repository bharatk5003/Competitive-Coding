#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

//Question 3



vector<string> printLexagrophcal(string s)
{

	if (s.size() == 0)
	{
		vector<string>v;
		v.push_back("");
		return v;

	}
	vector<string> o;
	for (int i = 0; i < s.size(); i++)
	{
		o = printLexagrophcal(s.substr(i , s.size()));
	}



	for (int i = 0; i < o.size(); i++)
	{
		o[i] += s;
	}
	return o;
}

/*

//Question2

int hleper(Node* list1, Node* list2)
{
int ans1 = 0;
while (list1 != NULL)
{
ans1 = ans1 * 10 + list1->data ;

list1 = list1->next;


}
int ans2 = 0;
while (list2 != NULL)
{
ans2 = ans2 * 10 + list2->data;
list2 = list2->next;


}

return ans1 + ans2;



}

*/






int main()
{
#ifndef ONLINE_JUDGE
	// for getting input from input.txt
	freopen("../input.txt", "r", stdin);
	// for writing output to output.txt
	freopen("../output.txt", "w", stdout);
#endif


	string s = "ABC";

	vector<string>ans = printLexagrophcal(s);

	cout << ans.size() << endl;

	for (int i = 0; i < ans.size(); i++)
	{
		cout << ans[i] << endl;
	}


}


