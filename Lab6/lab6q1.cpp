/*
 *Author: Quan Le
 *Creation Date: 2/20/2024
 *Modification Date: 2/20/2024
 *Purpose: User input N integers repeatedly until they input a negative integers
 *		   The program calculates the sum from O to N and the average.
 *		   Then, it will output the result.
*/

#include<iostream>

using namespace std;

//Prototypes
int calculateSum(int );
float calculateAverage(int , int );

int main()
{
	//Declare variables
	int N, sum, average;
	
	do
	{
		cout << "Enter a positive N:" << endl;
		cin >> N;
		if (N > 0)
		{
			//Call functions
			sum = calculateSum(N);
			average = calculateAverage(sum, N + 1); // From 0 to N is N + 1 values

			//Output
			cout << "Sum from 0 to " << N << " is " << sum << endl;
			cout << "Average is " << average << endl;
			cout << endl;
		}
		else
			cout << "Exiting the program" << endl;
	} while (N > 0); //Exit the loop if N is negative

	system("pause");
	return 0;
}

/*
 *Author: Quan Le
 *Creation Date: 2/20/2024
 *Modification Date: 2/20/2024
 *Purpose: Calculate the sum from 0 to N 
 *		   Then return the value.
*/
int calculateSum(int N)
{
	//Declare variable
	int sum = 0;
	for (int i = 0; i <= N; i++)
	{
		sum += i; // Update sum
	}
	return sum;
}

/*
 *Author: Quan Le
 *Creation Date: 2/20/2024
 *Modification Date: 2/20/2024
 *Purpose: Calculate the average of all numbers from 0 to N
 *		   Then return the value
*/
float calculateAverage(int sum, int N)
{
	// Declare variable
	float average = static_cast<float>(sum) / static_cast<float>(N); 
	return average;
}