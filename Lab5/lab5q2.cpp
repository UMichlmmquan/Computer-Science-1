/*
 *Author: Quan Le
 *Creation Date: 2/8/2024
 *Modification Date: 2/8/2024
 *Purpose: Program asks user to input number of students in the class.
 *		   Then asks user to input the grade of each student and calculate the average grade
 *		   Finally, it outputs the average grade of all students
*/

#include <iostream>

using namespace std;

int main()
{
	//Declare variable
	int num;
	double grade;
	double average = 0.0;
	double sum = 0.0;

	//Ask user to input number of students in the class
	cout << "How many students are in the class" << endl;
	cin >> num;

	for (int i = 0; i < num; ++i)
	{
		// Input the grade of each student
		cout << "What is the grade of this student" << endl;
		cin >> grade;

		sum += grade; //Update sum (total grade of all students)
	}

	if (num != 0)
		average = sum / num; // Calculate the average grade

	cout << "The calculated average grade is : " << average << endl; //Output the average grade

	system("pause");
	return 0;
}