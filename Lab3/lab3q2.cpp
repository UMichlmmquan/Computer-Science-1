/*
 *Author: Quan Le
 *Creation Date: 1/27/2024
 *Modification Date: 1/29/2024
 *Purpose: Input name and age
 *		   if age >= 18, execute the if true branch, which outputs "Congratulations <NAME>! Your vote registration was successfully processed."
 *		   if age < 18, execute the else branch, which outputs "You are not eligible to vote <NAME>."	
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string name;	//Declare variables
	int age;		
	
	cout << "Input your name: ";
	getline(cin, name);
	cout << "Input your age: ";
	cin >> age;

	if (age >= 18)	//18 or older
	{
		cout << "Congratulations " << name << "! Your vote registration was successfully processed." << endl;
	}
	else            //Under 18
		cout << "You are not eligible to vote " << name << "." << endl;

	system("pause");
	return 0;
}