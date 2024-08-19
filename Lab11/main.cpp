/*
 *Author: Quan Le
 *Creation Date: 3/24/2024
 *Modification Date: 3/24/2024
 *Purpose: Program reads all data from the input file. 
		   Then it prints a menu, user can choose to find abbreviation of states or find the year of states or exit the program.
 *	       The program will print the following result.
*/

#include "state.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>
#include <string>

using namespace std;

//prototypes
void readStateInfo(ifstream &ifs, vector<State> & stateVec);
void searchByStatehood(vector <State> & stVec, int year);
int searchByAbrv(vector <State> & stVec, string abrv);
void displayMenu();
void displayTableHeader();


int main()
{
	vector <State> stateVec;
	//other declarations
	ifstream ifs;
	int choice;
	//Open file
	ifs.open("usstates_lab11.txt");

	if (!ifs.is_open()) //If file cannot open
	{
		cerr << "Cannot open usstate_lab11.txt" << endl;
		system("pause");
		return 1;
	}
	//read state info into vector
	readStateInfo(ifs, stateVec);
	//Close file
	ifs.close();

	//display menu & process input
	do
	{
		displayMenu();
		//Ask user to input their choice
		cin >> choice;
		//Choice 1
		if (choice == 1)
		{
			string abrv;
			//Ask user to input the abbreviation to be search
			cout << "Please enter the state abbreviation: ";
			cin >> abrv;
			//Call function
			int search = searchByAbrv(stateVec, abrv);
			if (search == -1) //Nothing found
				cout << "No state exists with this information." << endl;
			else
			{
				displayTableHeader();
				stateVec.at(search).displayStateInfo();
			}
		}
		//Choice 2
		else if (choice == 2)
		{
			int year;
			int startIndex = 0;
			//Ask user to input the year to search
			cout << "Please enter the year: ";
			cin >> year;
			//Call function
			searchByStatehood(stateVec, year);		
		}
		//Choice 3
		else if (choice == 3)
		{
			cout << "Exiting program" << endl;
			break;
		}
	} while (choice == 1 || choice == 2 || choice == 3);

	system("pause");
	return 0;

}

/*
 *Author: Quan Le
 *Creation Date: 3/24/2024
 *Modification Date: 3/24/2024
 *Purpose: Function prints the table header
*/
void displayTableHeader()
{
	//Display table header:
	cout << endl;

	cout << right << setw(20) << "State Abr." <<   setw(20) << "Name" <<  setw(20) << "Capital"
		 <<  setw(20) << "Population" <<  setw(11) << "Year" <<  setw(15) << "#Congress" << endl;
	
	cout << endl;
}
/*
 *Author: Quan Le
 *Creation Date: 3/24/2024
 *Modification Date: 3/24/2024
 *Purpose: Function reads state info from the input file
*/
void readStateInfo(ifstream &ifs, vector<State> & stateVec)
{
	//declarations
	State tmpState;
	string abrv, name, capital, population, year, numCongress;
	int intPopulation, intYear, intNumCongress;

	while(!ifs.eof())
	{

		getline(ifs, abrv, ',');
		//read other inputs on a given line using getline
		getline(ifs, name, ',');
		getline(ifs, capital, ',');
		//read population (need to convert string to int, consider string stream)
		getline(ifs, population, ',');
		intPopulation = stoi(population);
		//read year (need to convert string to int, consider string stream)
		getline(ifs, year, ',');
		intYear = stoi(year);
		//read number of congress (need to convert string to int, consider string stream)
		getline(ifs, numCongress);
		intNumCongress = stoi(numCongress);

		//use tmpState.<method> and passing variables into the object through the method
		tmpState.setStateAbrv(abrv);
		tmpState.setStateName(name);
		tmpState.setCapital(capital);
		tmpState.setPopulation(intPopulation);
		tmpState.setYear(intYear);
		tmpState.setNumCongress(intNumCongress);

		//add the object to the vector
		stateVec.push_back(tmpState);
	}
}
/*
 *Author: Quan Le
 *Creation Date: 3/24/2024
 *Modification Date: 3/24/2024
 *Purpose: Function searches the abbreviation of the given state.
 *         If it is found, return the index of object. Otherwise, return -1
*/
int searchByAbrv(vector <State> & stVec, string abrv)
{
	//return index of object within the vector if found
	for (int i = 0; i < static_cast<int>(stVec.size()); i++)
	{
		if (stVec.at(i).getStateAbrv() == abrv)
		{
			return i;
		}
	}

	//return -1 if not found
	return -1;
}
/*
 *Author: Quan Le
 *Creation Date: 3/24/2024
 *Modification Date: 3/24/2024
 *Purpose: Function searches the year of the given state.
 *         If it is found, update the start index. Otherwise, startIndex = 50
*/
void searchByStatehood(vector <State> & stVec, int year)
{
	bool found = false;
	for (int i = 0; i < static_cast<int>(stVec.size()); i++)
	{
		if (stVec.at(i).getYear() == year)
		{
			if (i == 0) //First time
				displayTableHeader();
			stVec.at(i).displayStateInfo();
			found = true;
		}
	}
	//If nothing is found
	if (!found)
		cout << "No state exists with this information." << endl;
}
/*
 *Author: Quan Le
 *Creation Date: 3/24/2024
 *Modification Date: 3/24/2024
 *Purpose: Function displays the menu of selection and ask the user to input their choice
*/
void displayMenu()
{
	cout << "1. Search by state abbreviation (e.g. MI)." << endl;
	cout << "2. Search by year of statehood (e.g. 1837)." << endl;
	cout << "3. Exit program." << endl << endl;
	cout << "Please enter your choice (1-3): ";
}