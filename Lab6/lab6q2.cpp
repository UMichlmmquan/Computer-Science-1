/*
 *Author: Quan Le
 *Creation Date: 2/20/2024
 *Modification Date: 2/20/2024
 *Purpose: User input symbol, height and width
 *		   If width > 1, height > 2, the program then prints a C shape with symbols
 *		   Else if symbol is *, output "Don't use *"
		   Else, output "Can't produce a C shape."
*/

#include <iostream>

using namespace std;

//Prototype
void displayVerticalLine(char ,int );
void displayHorizontalLine(char ,int);

int main()
{
	//Declare variable
	char symbol;
	int width, height;

	//User input
	cout << "Input character (except *): ";
	cin >> symbol;
	cout << "Input width: ";
	cin >> width;
	cout << "Input height: ";
	cin >> height;

	//Output
	if (width > 1 && height > 2 && symbol != '*')
	{
		//Print a C shape
		displayHorizontalLine(symbol, width);
		displayVerticalLine(symbol, height - 2); // Minus 2 because it doesn't include 2 horizontal lines
		displayHorizontalLine(symbol, width);
	}
	else if (symbol == '*') // Use *
		cout << "Don't use *" << endl;
	else //Can't produce a C shape
		cout << "Can't produce a C shape." << endl;


	system("pause");
	return 0;
}
/*
 *Author: Quan Le
 *Creation Date: 2/20/2024
 *Modification Date: 2/20/2024
 *Purpose: Print a line with the 1 input symbol (column)
*/
void displayVerticalLine(char symbol, int height) // Print a line with 1 symbol
{
	for (int i = 0; i < height; i++)
	{
		cout << symbol << endl; 
	}
}

/*
 *Author: Quan Le
 *Creation Date: 2/20/2024
 *Modification Date: 2/20/2024
 *Purpose: Print a line with the input symbols (row)
*/
void displayHorizontalLine(char symbol, int width) // Print a line with symbols
{
	for (int i = 0; i < width; i++)
	{
		cout << symbol;
	}
	cout << endl;
}