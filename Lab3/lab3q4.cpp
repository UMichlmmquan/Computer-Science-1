/*
 *Author: Quan Le
 *Creation Date: 1/27/2024
 *Modification Date: 1/30/2024
 *Purpose: Input a, b and c which represent the coefficients in the quadratic equation ax^2 + bx + c = 0: 
 *		   if a = 0, output "No real root"
 *		   if a != 0, calculate b^2 - 4ac
 *		   if b^2-4ac < 0, output no real root
 *		   if b^2-4ac = 0, output only one root
 *		   if b^2-ac > 0, ouput 2 roots
*/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	double a, b, c;		//Declare variables

	cout << "Enter a, b and c which represent the coefficients in the quadratic equation ax^2 + bx + c = 0: ";
	cin >> a >> b >> c;

	if (a == 0)
		cout << "No real root" << endl;				// No solution
	else if (a != 0)
	{
		double delta = b * b - 4 * a * c; //Delta = b^2 - 4ac
		cout << fixed << setprecision(6);
		if (delta < 0)					  // No solution
			cout << "No real root" << endl;
		else if (delta == 0)			  // Only 1 root
			cout << "Root is " << -b / (2 * a) << endl;				
		else if (delta > 0)				 // 2 roots 
		{
			cout << "Root 1 is " << (-b + sqrt(delta)) / (2 * a) << endl;
			cout << "Root 2 is " << (-b - sqrt(delta)) / (2 * a) << endl;
		}
	}

	system("pause");
	return 0;
}