/*
 *Author: Quan Le
 *Creation Date: 2/4/2024
 *Modification Date: 2/4/2024
 *Purpose: Program generates random numbers from 5 to 15
 *		   Then it will execute the while loop n times (n = generated random number), ask the user to input an integer for each time. 
 *		   Finally, it calculates the sum of all input integers and output it.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	srand(time(NULL)); //seeding value

	int N = rand() % 11 + 5; // generate random numbers from 5 to 15. rand() % 11 -> generate from 0 to 10

	//Declare variable
	int sum = 0; 
	int i = 0;

	while (i < N)
	{
		int input;
		cout << "Please enter an integer: " << endl; //Input an integer
		cin >> input;

		sum += input; //Update sum
		++i;	//Update i
	}
	cout << "Sum of integers is: " << sum << endl; //Output sum

	system("pause");
	return 0;
}