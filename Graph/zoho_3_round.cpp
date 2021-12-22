#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

class customer
{
Public:
	int  cust_id;
	int  account_no;
	string name;
	double balance;
	string password;
	/*
		customer(int cu, int a, string name, double b, String s)
		{
			this.cust_id = cu;
			this.account_no = a;
			this.name = name;
			this.balance = b;
			this.password = s;

		}
	*/

	public void setId(int cust_id)
	{
		if ()
			this.cust_id = cust_id;
	}

	public void setAccNo(int account_no)
	{
		this.account_no = account_no;
	}

	public void setName(string name)
	{
		this.name = name;
	}
	public void setBalance(double balance)
	{
		this.balance = balance;
	}
	public void setPassword(string password)
	{
		this.password = password;

	}


	public void addCustomer(string name, string password)
	{
		this.name = name;
		this.password = password;


	}



}

void customerDetail()



int main()
{
#ifndef ONLINE_JUDGE
	// for getting input from input.txt
	freopen("../input.txt", "r", stdin);
	// for writing output to output.txt
	freopen("../output.txt", "w", stdout);
#endif

	customer arr[3];

	for (int i = 0;)






		cout << "Select Your Choice" << endl;

	cout << " 1. customer detail " << endl;
	cout << "2. Add new Customer" << endl;
	cout << "3. ATM withdrawl"    << endl;
	cout << "4. cash deposit"   << endl;

	int n;
	cin >> n;
	switch (n)
	{
	case 1: customerDetail() << endl;
		break;
	case 2: AddCustomer() << endl;
		break;
	case 3: atmWithdraw() << endl;
		break;
	case 4: cashDeposit() << endl;
	}


}
