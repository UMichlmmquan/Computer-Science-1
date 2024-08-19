/* Author: Quan Le
 Creation Date: 1/16/2024
 Last Modification Date: 1/16/2024
 Purpose: Fix bug (#include <string>). 
		  Program will print a line 'Please enter your first name: ', which requests them to input their first names.
		  After the users input their first names, the program will output 'Hi' + their names + ': I hope you will enjoy CIS 150 this semester.'
*/

#include <iostream> 
#include <string>
using namespace std;

int main() {
	string first;
	cout << endl << "Please enter your first name : ";
	cin >> first;
	cout << "Hi " << first << ": I hope you will enjoy CIS 150 this semester." << endl;
	system("pause");
	return 0;
}