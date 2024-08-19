/*
 *Author: Quan Le
 *Creation Date: 3/8/2024
 *Modification Date: 3/8/2024
 *Purpose: Asks user to input a value that they want to search in the array
 *	       Outputs the postion of the searched  value in the array if it is found
 *         Otherwise, notifies the user that the searched value is not found
*/

#include <iostream>

using namespace std;

//Prototype
int searchValueInArray(int, int[], int);

int main()
{
	//Declare variables
	const int SIZE = 8;
	int array[SIZE] = { 10, 60, 20, 50, 30, 40, -10, 0 };
	int index;
	int search;

	//Ask user to input the searched value
	cout << "Please enter an integer value: ";
	cin >> search;
	//Call the function
	index = searchValueInArray(search, array, SIZE);
	//Output
	if (index != -1)
		cout << "The value " << search << " exists in position " << index << " of the array" << endl;
	else
		cout << "Sorry, the array does not contain the value " << search << endl;
	system("pause");
	return 0;
}

/*
 *Author: Quan Le
 *Creation Date: 3/8/2024
 *Modification Date: 3/8/2024
 *Purpose: Search for a value V in the array a of integers
		   Return the position of V in the array if V is found
		   Otherwise (V not found), return -1
*/
int searchValueInArray(int V, int a[], int size)
{
	// To be completed by student
	for (int i = 0; i < size; i++)
	{
		if (a[i] == V) // If found the V value, return the index position immediately
			return i;
	}
	return -1;
}
