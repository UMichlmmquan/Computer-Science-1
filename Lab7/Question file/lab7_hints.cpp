Q1:

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

void weeklySalary(ifstream &, ofstream &);


int main()
{

	//... any necessary declarations ...

	ifstream ifs;
	ofstream ofs;


	ifs.open("employees.txt");
	ofs.open("results.txt");


	if (!ifs.is_open())
	{
	cerr << "Unable to open employees.txt" << endl;
	system("pause");
	return 0;
	}




	weeklySalary(ifs, ofs);


	ifs.close();
	ofs.close();


	cout << "Exiting program..." << endl;

	system("pause");

	return 0;
}

void weeklySalary(ifstream &ifs, ofstream & ofs)
{

	string firstName, lastName;
	float hours, rate;

	... any other declarations

	ifs >> firstName >> lastName >> hours >> rate;

	while(!ifs.eof())
	{


		...compute salary

		ofs << firstName << " " << lastName << " " << fixed << setprecision(2) << salary << endl;

		ifs >> firstName >> lastName >> hours >> rate;
	}

}

 

 

Q2:

 

 

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <climits>


using namespace std;

void processClass(ifstream &, float & , int & );


int main()
{

	string filename;
	float average;
	int highestScore;

	ifstream ifs;
	ofstream ofs;

	...any other declarations


	cout << "Please enter a filename: ";
	cin >> filename;

	ifs.open(filename);

	if(!ifs.is_open())
	{
	cerr << "Unable to open " << filename << endl;
	system("pause");
	return 0;
	}

	processClass(ifs, average, highestScore);

	//display average and highest


	return 0;
}


void processClass(ifstream & ifs, float & average, int & highest)
{

	string firstName, lastName;
	float score;
	... any other declarations you need...


	highest = INT_MIN;


	...

	ifs >> firstName >> lastName >> score;

	while(!ifs.eof())
	{

		//update highest accordingly
		//update your cumulative sum and count

		ifs >> firstName >> lastName >> score;
	}

	//compute average

}

