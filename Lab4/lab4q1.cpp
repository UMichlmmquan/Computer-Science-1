/*
 *Author: Quan Le
 *Creation Date: 2/4/2024
 *Modification Date: 2/6/2024
 *Purpose: Input the current temperature (in F)
 *		   The program then executes the if-else branch code
 *		   Finally, it will output the results corresponding to each case of the branch
*/


// Include ALL the compiler directives you need in the program
/* to be filled in*/
#include <iostream>

using namespace std;

int main()
{
	//Declare variable
	int tem;	

	//Input the temperature
	cout << "Please enter the current temperature(F) : ";
	cin >> tem;

	// add cascading if-else statements to complete the program
	if (tem > 90)
		cout << "Go swimming." << endl;
	else if (tem > 80)
		cout << "Turn on air conditioning." << endl;
	else if (tem > 70)
		cout << "Do nothing." << endl;
	else if (tem > 55)
		cout << "Turn on heat." << endl;
	else if (tem > 30)
		cout << "Wear a heavy coat." << endl;
	else if (tem > 0)
		cout << "Wear gloves." << endl;
	else
		cout << "Stay inside, make a fire." << endl;

/* to be filled in by student */

	system("pause");
	return 0;
}
