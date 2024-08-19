/*
 *Author: Quan Le
 *Creation Date: 1/27/2024
 *Modification Date: 1/30/2024
 *Purpose: Input an integer
 *		   if x >= 15, it will execute codes in if branch
 *		   if x < 15, it will execute codes in else branch
 *		   Finally, the program will output the value of x and y 
*/


#include <iostream>

using namespace std;

int main() {
	int x, y;

	cout << "Please enter an integer value : ";
	cin >> x;

	if (x >= 15)
	{
		x++;
		y = x + x - 7;
	}
	else
	{
		x = x * 2;
		y = x * x + 7;
	}

	cout << "x = " << x << " y = " << y << endl;

	system("pause");
	return 0;
}
