/*
 *Author: Quan Le
 *Creation Date: 1/27/2024
 *Modification Date: 1/30/2024
 *Purpose: Input hours worked and pay rate
 *		   if hours worked <= 40, execute the if true branch, which outputs the gross pay for the week
 *		   if hours worked > 40, execute the else if branch, which outputs the gross pay for the week (included the overtime hours pay)
*/

#include <iostream>

using namespace std;

int main()
{
	double hoursWorked, hoursOvertime, payRate, weekPay;	//Declare variables

	cout << "Enter the hours worked and the pay rate: ";
	cin >> hoursWorked >> payRate;

	if (hoursWorked <= 40.0)			// No overtime work
		weekPay = hoursWorked * payRate;
	else if (hoursWorked > 40.0)		// Overtime work
	{
		hoursOvertime = hoursWorked - 40.0;	//Calculate overtime hours
		weekPay = 40.0 * payRate + hoursOvertime * 1.5 * payRate;
	}

	cout << "Gross pay for the week is $" << weekPay << endl;

	system("pause");
	return 0;
}