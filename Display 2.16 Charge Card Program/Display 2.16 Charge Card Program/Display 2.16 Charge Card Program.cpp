// Display 2.16 Charge Card Program.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	double balance = 50.00;
	int count = 0;

	cout << "This program tells you how long it takes\n"
		<< "to accumalate a debt of R100, starting with\n"
		<< "an initial balance of R50 owed.\n"
		<< "The interest rate is 2% per month.\n";

	while (balance < 100.00)
	{
		balance = balance + 0.2 * balance;
		count++;
	}
	
	cout << "After " << count << " months, \n";
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	cout << "your balance duw will be R" << balance << endl;

	system("pause");

	return 0;
}

