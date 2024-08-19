#include <iostream>
#include <vector>
#include <iomanip>
#include <string>

using namespace std;

#ifndef STATE_H
#define STATE_H

class State {
	
	private:
		string stateAbrv; //State abbreviation
		string stateName; //State name
		string capital; //State capital
		int population; //State population
		int year; //State year
		int numCongress; //State number of congress

	public:
		State();
		void setStateAbrv(string);
		void setStateName(string);
		void setCapital(string);
		void setPopulation(int);
		void setYear(int);
		void setNumCongress(int);

		string getStateAbrv();
		string getStateName();
		string getCapital();
		int getPopulation();
		int getYear();
		int getNumCongress();

		int computeResidentsPerRep();
		void displayStateInfo();

};

#endif 