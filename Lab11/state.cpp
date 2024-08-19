#include "state.h"
#include <iostream>
#include <vector>
#include <iomanip>
#include <string>

using namespace std;

/*
 *Author: Quan Le
 *Creation Date: 3/24/2024
 *Modification Date: 3/24/2024
 *Purpose: Function sets default components
*/
State::State()
{
	stateAbrv = "none";
	stateName = "none";
	capital = "none";
	population = -1;
	year = -1;
	numCongress = -1;
}

/*
 *Author: Quan Le
 *Creation Date: 3/24/2024
 *Modification Date: 3/24/2024
 *Purpose: Function sets state abbreviation
*/
void State::setStateAbrv(string abrv)
{
	stateAbrv = abrv;
}

/*
 *Author: Quan Le
 *Creation Date: 3/24/2024
 *Modification Date: 3/24/2024
 *Purpose: Function sets state name
*/
void State::setStateName(string sName)
{
	stateName = sName;
}

/*
 *Author: Quan Le
 *Creation Date: 3/24/2024
 *Modification Date: 3/24/2024
 *Purpose: Function sets state capital
*/
void State::setCapital(string cap)
{
	capital = cap;
}

/*
 *Author: Quan Le
 *Creation Date: 3/24/2024
 *Modification Date: 3/24/2024
 *Purpose: Function sets state population
*/
void State::setPopulation(int pop)
{
	population = pop;
}

/*
 *Author: Quan Le
 *Creation Date: 3/24/2024
 *Modification Date: 3/24/2024
 *Purpose: Function sets state year
*/
void State::setYear(int y)
{
	year = y;
}

/*
 *Author: Quan Le
 *Creation Date: 3/24/2024
 *Modification Date: 3/24/2024
 *Purpose: Function sets state number of congress
*/
void State::setNumCongress(int num)
{
	numCongress = num;
}

/*
 *Author: Quan Le
 *Creation Date: 3/24/2024
 *Modification Date: 3/24/2024
 *Purpose: Function returns state abbreviation
*/
string State::getStateAbrv()
{
	return stateAbrv;
}

/*
 *Author: Quan Le
 *Creation Date: 3/24/2024
 *Modification Date: 3/24/2024
 *Purpose: Function returns state name
*/
string State::getStateName()
{
	return stateName;
}

/*
 *Author: Quan Le
 *Creation Date: 3/24/2024
 *Modification Date: 3/24/2024
 *Purpose: Function returns state capital
*/
string State::getCapital()
{
	return capital;
}

/*
 *Author: Quan Le
 *Creation Date: 3/24/2024
 *Modification Date: 3/24/2024
 *Purpose: Function returns state population
*/
int State::getPopulation()
{
	return population;
}

/*
 *Author: Quan Le
 *Creation Date: 3/24/2024
 *Modification Date: 3/24/2024
 *Purpose: Function returns state year
*/
int State::getYear()
{
	return year;
}

/*
 *Author: Quan Le
 *Creation Date: 3/24/2024
 *Modification Date: 3/24/2024
 *Purpose: Function returns state number of congress
*/
int State::getNumCongress()
{
	return numCongress;
}

/*
 *Author: Quan Le
 *Creation Date: 3/24/2024
 *Modification Date: 3/24/2024
 *Purpose: Function returns the residents per rep
*/
int State::computeResidentsPerRep()
{
	return population / numCongress;
}
/*
 *Author: Quan Le
 *Creation Date: 3/24/2024
 *Modification Date: 3/24/2024
 *Purpose: Function displays the specific state info
*/
void State::displayStateInfo()
{
	cout << endl;
	cout << right << setw(20) << getStateAbrv() << setw(20) << getStateName() << setw(20) << getCapital()
		<< setw(20) << getPopulation() << setw(11) << getYear() << setw(15) << getNumCongress() << endl;
	cout << endl;
}