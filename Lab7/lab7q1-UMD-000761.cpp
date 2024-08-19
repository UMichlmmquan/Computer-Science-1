/*
 *Author: Quan Le
 *Creation Date: 3/1/2024
 *Modification Date: 3/1/2024
 *Purpose: Program read data in a text file named "employees.txt"
 *		   Then, it calculates the weekly salary of each employee and prints the results in a text file named "results.txt"
*/

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

//Prototype
void weeklySalary(ifstream&, ofstream&);


int main()
{
	//Declare variables
	ifstream ifs;
	ofstream ofs;

	//Open text files
	ifs.open("employees.txt");
	ofs.open("results.txt");

	//Check if the file can't be opened
	if (!ifs.is_open())
	{
		cerr << "Unable to open employees.txt" << endl;
		system("pause");
		return 0;
	}


	weeklySalary(ifs, ofs);

	//Close text files
	ifs.close();
	ofs.close();


	cout << "Exiting program..." << endl;

	system("pause");

	return 0;
}

/*
 *Author: Quan Le
 *Creation Date: 3/1/2024
 *Modification Date: 3/1/2024
 *Purpose: Function reads all the data in each row of the text file.
 *		   Then, it calculates the weekly salary of the employee and prints the result into "results.txt".
*/
void weeklySalary(ifstream& ifs, ofstream& ofs)
{
	//Declare variables
	string fName, lName;
	int hrsWeek, hrsRate;

	ifs >> fName;
	ifs >> lName;
	ifs >> hrsWeek;
	ifs >> hrsRate;
	while (!ifs.eof())
	{
		int weeklySalary = hrsWeek * hrsRate;
		ofs << fName << " " << lName << " " << weeklySalary << endl; //Print the result to the "results.txt"
		cout << fName << " " << lName << " " << weeklySalary << endl;//Print the result to the screen
		ifs >> fName;
		ifs >> lName;
		ifs >> hrsWeek;
		ifs >> hrsRate;
	}
	cout << endl;
}