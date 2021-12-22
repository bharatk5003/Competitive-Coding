#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;


bool isOperator(char ch) {
	if (ch - 'a' >= 0 && ch - 'a' <= 25) {
		return true;
	}
	else if (ch - '0' >= 0 && ch - '0' <= 9) {
		return true;
	}
	else {
		return false;
	}
}


string infixToPostfix(string exp)
{
	string ans = "";
	stack<char> s;

	// Precedence of the operators
	unordered_map<char, int> precedence;

	precedence['^'] = 3;
	precedence['*'] = 2;
	precedence['/'] = 2;
	precedence['+'] = 1;
	precedence['-'] = 1;
	precedence['('] = 0;
	precedence[')'] = 0;

	for (int i = 0; i < exp.length(); i++)
	{
		if (isOperator(exp[i]))
		{
			ans += exp[i];
		}
		else if (exp[i] == ')')
		{

			// Remove till the last opening
			while (s.top() != '(')
			{
				ans += s.top();
				s.pop();
			}
			s.pop();
		}
		else if (exp[i] == '(')
		{
			s.push(exp[i]);
		}
		else {

			// Remove lower precedence operators
			while (s.size() && precedence[s.top()] >= precedence[exp[i]]) {
				ans += s.top();
				s.pop();
			}
			s.push(exp[i]);
		}
	}
	while (s.size())
	{
		ans += s.top();
		s.pop();
	}
	return ans;

}

char* infixToPostfix(char* input)
{


	string s = "";
	for (int i = 0; input[i] != '\0'; i++)
	{
		s += input[i];
	}
	string ans = infixToPostfix(s);
//	cout << ans << endl;
	char* res = new char[ans.size()];
	for (int i = 0; i < ans.size(); i++)
		res[i] = ans[i];
	return res;

}


int main()
{
#ifndef ONLINE_JUDGE
	// for getting input from input.txt
	freopen("../input.txt", "r", stdin);
	// for writing output to output.txt
	freopen("../output.txt", "w", stdout);
#endif

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	char *c = new char[10];
	cin >> c;
//	cout << c << endl;

	cout << infixToPostfix(c) << endl;



}






