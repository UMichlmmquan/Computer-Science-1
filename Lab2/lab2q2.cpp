// put here header comments that give information about the program
/*
 *Author: Quan Le
 *Creation Date: 1/19/2024
 *Modification Date: 1/23/2024
 *Purpose: Add code for the program.
 `		   The program reads two integers from the user, calculates.
		   And displays the sum of the two integers.
*/

#include <iostream>	// put here the compiler directive for the library necessary for reading and writing
using namespace std;

int main()
{
	int x, y, sum;								// declare three variables of type int
	
	cout << "Please enter a value for x: ";		// display a message asking the user to enter a first integer
	cin >> x;									// get a value from the user

	cout << "Please enter a value for y: ";		// display a message asking the user to enter a second integer
	cin >> y;									// get a value from the user

	sum = x + y;// add the two input values and assign to 3rd variable as total 

	cout << "The sum of the two integers is " << sum << endl;	// display the message

	system("pause");
	return 0;
}

