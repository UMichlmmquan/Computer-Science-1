/*
 *Author: Quan Le
 *Creation Date: 3/8/2024
 *Modification Date: 3/8/2024
 *Purpose: Program reads values from the array. 
		   Then calculates and outputs the sum of all values, average of all positive values, the highest and lowest value.
*/

#include<iostream>

using namespace std;

//Prototype
int sumAll(int[], int );
double avgPos(int[], int );
int lowest(int[], int );
int highest(int[], int);

int main()
{
	//Declare variables
	const int SIZE = 20;
	int values[SIZE] = { 0, 23, 34, -7, 110, 42, -350, 424, 25, 99, 10, 05, 50, -5, 1, 200, -350, 437, 25, 147 };
	int sum, max, min;
	double avg;

	// your code goes here
	sum = sumAll(values, SIZE);
	avg = avgPos(values, SIZE);
	max = highest(values, SIZE);
	min = lowest(values, SIZE);
	//Output the result
	cout << "Sum: " << sum << endl;
	cout << "Average: " << avg << endl;
	cout << "Highest: " << max << endl;
	cout << "Lowest: " << min << endl;

	system("pause");
	return 0;
}

/*
 *1.1 
 *Author: Quan Le
 *Creation Date: 3/8/2024
 *Modification Date: 3/8/2024
 *Purpose: Function reads value from the array, the size of the array.
 *		   Then calculates the sum of all values in the array and return the result.
*/
int sumAll(int values[], int size)
{
	//Declare variable
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += values[i]; //Update sum
	}
	return sum;
}

/*
 *1.2
 *Author: Quan Le
 *Creation Date: 3/8/2024
 *Modification Date: 3/8/2024
 *Purpose: Function reads value from the array, the size of the array.
 *		   Then calculates the average of positive values in the array and return the result.
*/
double avgPos(int values[], int size)
{
	//Declare variables
	double avg;
	int sum = 0;
	int count = 0;

	for (int i = 0; i < size; i++)
	{
		if (values[i] > 0) //Only update sum if the value is positive ( > 0 )
		{
			sum += values[i]; //Update sum of all positive values
			count++; //Update number of all positive values
		}
	}
	avg = static_cast<double>(sum) / count; //Calculate the average of positive values
	return avg;
}
/*
 *1.3
 *Author: Quan Le
 *Creation Date: 3/8/2024
 *Modification Date: 3/8/2024
 *Purpose: Function reads value from the array, the size of the array.
 *		   Then return the lowest value of the array
*/
int lowest(int values[], int size)
{
	//Declare variable
	int min = values[0];

	for (int i = 1; i < size; i++)
	{
		if (values[i] < min)
			min = values[i]; //Update min
	}
	return min;
}

/*
 *1.4
 *Author: Quan Le
 *Creation Date: 3/8/2024
 *Modification Date: 3/8/2024
 *Purpose: Function reads value from the array, the size of the array.
 *		   Then return the highest value of the array
*/
int highest(int values[], int size)
{
	//Declare variable
	int max = values[0];

	for (int i = 1; i < size; i++)
	{
		if (values[i] >  max)
			max = values[i]; //Update max
	}
	return max;
}