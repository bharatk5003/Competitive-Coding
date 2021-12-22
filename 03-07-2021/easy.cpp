#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

public void getTableValues()
{

	fNametext = driver.findElement(By.xpath("//*[@id='ttab']/tbody/tr/td[1]")).getText();
	INametext = driver.findElement(By.xpath("//*[@id='ttab']/td[2]")).getText();
	uNametext = driver.findElement(By.xpath("//*[@id='ttab']/td[3]")).getText();

	citytext = driver.findElement(By.xpath("//*[@id='tbrow']/td[4]")).getText();



}





int main()
{
#ifndef ONLINE_JUDGE
	// for getting input from input.txt
	freopen("../input.txt", "r", stdin);
	// for writing output to output.txt
	freopen("../output.txt", "w", stdout);
#endif


	int a, b;
	cin >> a >> b;

	int i = 0;
	while (a  <= b )
	{
		i++;
		a = a * 3;
		b = b * 2;
		//cout << "a " << a << " b " << b << endl;
	}
	cout << i << endl;




}





