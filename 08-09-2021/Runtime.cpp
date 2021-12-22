#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;


class vehicle
{
public:
	virtual void print()
	{
		cout << "vehicle class print" << endl;
	}

	void show()
	{
		cout << "vehicle class show " << endl;
	}

};

class car: public vehicle
{
public:
	void print()
	{
		cout << "Car class print" << endl;
	}
	void show()
	{
		cout << "Car class show" << endl;
	}
};



int main()
{
#ifndef ONLINE_JUDGE
	// for getting input from input.txt
	freopen("../input.txt", "r", stdin);
	// for writing output to output.txt
	freopen("../output.txt", "w", stdout);
#endif

	vehicle *v = new car;
	v->print();
	v->show();


}