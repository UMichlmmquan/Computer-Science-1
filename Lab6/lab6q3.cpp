/*
 *Author: Quan Le
 *Creation Date: 2/20/2024
 *Modification Date: 2/20/2024
 *Purpose: User input number of integers they want to input
 *		   If the number > 0, the program asks user to input each integer, find the highest and lowest value of input numbers
 *		   Finally, it will output the highest and the lowest value.
 *		   Else, it will output "You must enter an interger greater than 0"
*/

#include <iostream>

using namespace std;

int main()
{
	//Declare variables
	int N, input, max, min;
	max = INT_MIN;
	min = INT_MAX;

	//Ask user to input number of integers 
	cout << "Input number of integers you want to input: ";
	cin >> N;

	if (N > 0)
	{
		for (int i = 0; i < N; i++)
		{
			// Ask user to input from first number to N-th number
			cout << "Input integer " << i + 1 << ": ";
			cin >> input;
			if (input > max) // Update max
				max = input;
			if (input < min) // Update min
				min = input;
		}

		//Output
		cout << "Highest value is: " << max << endl;
		cout << "Lowest value is: " << min << endl;
	}
	else // N <= 0
		cout << "You must enter an interger greater than 0" << endl; 
	
	
	system("pause");
	return 0;
}