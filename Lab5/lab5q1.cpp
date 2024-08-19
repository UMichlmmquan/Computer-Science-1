/*
 *Author: Quan Le
 *Creation Date: 2/8/2024
 *Modification Date: 2/8/2024
 *Purpose: Input a value or 0 to quit
 *		   While the input is not 0, the program keeps add input to sum until the user enters 0 to quit.
 *		   Finally, when the user inputs 0 to quit, it will display the sum of all input values.
*/

#include <iostream>

using namespace std;

int main()
{
	//Declare variable
	int input; 
	int sum = 0;

	cout << "Enter a value or 0 to quit : "; //Input a value or 0 to quit
	cin >> input;

	while (input != 0) // Keep calculating sum of all input value until input == 0
	{
		sum += input; //Update sum

		//Ask user to input again
		cout << "Enter a value or 0 to quit : "; 
		cin >> input;
	}
	cout << endl;
	cout << "The total is " << sum << endl; //Output the sum

	system("pause");
	return 0;
}