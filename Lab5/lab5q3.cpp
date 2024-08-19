/*
 *Author: Quan Le
 *Creation Date: 2/8/2024
 *Modification Date: 2/8/2024
 *Purpose: Program prints a menu 1-4. Users input their choices.
 *		   If choice = 1, users are asked to input 2 integer values, if choice = 2, program calculates and outputs the sum of 2 integer values.
 *		   If choice = 3, calculates and outputs the product of 2 integer values, if choice = 4, exit the program.
*/

#include <iostream>

using namespace std;

int main()
{
	//Declare variable
	int choice;
	int x = 0;
	int y = 0;

	do
	{
		//Print menu choice
		cout << "1. Enter Two Integer Values" << endl;
		cout << "2. Add the two values" << endl;
		cout << "3. Multiply the two values" << endl;
		cout << "4. Exit" << endl;
		//Ask user to input their choice
		cout << "Please Enter your Choice (1-4): ";
		cin >> choice;
		cout << endl;

		switch (choice)
		{
			case 1:
				// Input 2 integer values
				cout << "Enter Two Integer Values: ";
				cin >> x >> y;
				cout << endl;
				break;
			case 2:
				// Calculate the sum of 2 integer values
				cout << "The sum is: " << x + y << endl;
				cout << endl;
				break;
			case 3:
				// Calculate the product of 2 integer values
				cout << "The product is: " << x * y << endl;
				cout << endl;
				break;
			case 4: 
				// Exit the program
				break;
			default:
				// Invalid choice. Choice must be 1-4
				cout << "Invalid choice" << endl;
				cout << endl;
				break;
		}
	} while (choice != 4);


	system("pause");
	return 0;
}