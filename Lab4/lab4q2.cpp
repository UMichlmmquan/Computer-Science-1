/*
 *Author: Quan Le
 *Creation Date: 2/5/2024
 *Modification Date: 2/5/2024
 *Purpose: Input the grade in character (lowercase or uppercase)
 *		   The program then executes switch code
 *		   Finally, it will output the results corresponding to each case of the switch
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	char ch; //Declare variable	

	cout << "Please enter a letter grade: " << endl;	// User input the grade
	cin >> ch;

	// Switch case
	switch (ch)
	{
	//Grade "A"
	case 'A':
	case 'a':
		cout << "Excellent" << endl;
		break;
	//Grade "B"
	case 'B':
	case 'b':
		cout << "Good" << endl;
		break;
	//Grade "C"
	case 'C':
	case 'c':
		cout << "Average" << endl;
		break;
	//Grade "D" or "E"
	case 'D':
	case 'd':
	case 'E':
	case 'e':
		cout << "Below average" << endl;
		break;
	//Grade "F"
	case 'F':
	case 'f':
		cout << "Fail" << endl;
		break;
	//Other input (invalid)
	default:
		cout << "Invalid Grade" << endl;
		break;
	}

	system("pause");
	return 0;
}