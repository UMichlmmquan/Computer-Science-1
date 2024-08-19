/*
 *Author: Quan Le
 *Creation Date: 3/14/2024
 *Modification Date: 3/14/2024
 *Purpose: Program reads values from the array, asks the user to input a number to be search in the array.
 *	       Then calls 2 functions to find the sum, average and the input number in the array.
 *	       Output the result
*/

#include<iostream>

using namespace std;

//Prototype
void firstFunc(int [4][4], int& , double& );
bool secondFunc(int[4][4], int );

int main()
{
	//Declare variables
	const int ROWS = 4;
	const int COLS = 4;
	int V;
	int sum = 0;
	double average;
	bool hasV;
	int box[ROWS][COLS] = { {11,8,0,-4}, {74,5,13,42}, {29,-7,45,4}, {100,23,-3,61} };

	//Input V
	cout << "Input number to be searched: ";
	cin >> V;
	//Call functions
	firstFunc(box, sum, average);
	hasV = secondFunc(box, V);
	//Output
	cout << "Sum: " << sum << endl;
	cout << "Average: " << average << endl;
	if (hasV)
		cout << "Found " << V << endl;
	else
		cout << "Not found " << V << endl;

	system("pause");
	return 0;
}

/*
 *Author: Quan Le
 *Creation Date: 3/8/2024
 *Modification Date: 3/8/2024
 *Purpose: Function updates sum and average of the array
*/

void firstFunc(int arr[4][4], int &sum, double &average)
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			sum += arr[i][j]; //Update sum
		}
	}
	average = static_cast<double>(sum) / 16; //Update average
}


/*
 *Author: Quan Le
 *Creation Date: 3/8/2024
 *Modification Date: 3/8/2024
 *Purpose: Function finds the V in the array. If it is found, return true. Otherwise, return false
*/
bool secondFunc(int arr[4][4], int V)
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (arr[i][j] == V) //If V is found
				return true;
		}
	}
	return false; //If V is not found
}