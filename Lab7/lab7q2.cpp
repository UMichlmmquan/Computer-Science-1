/*
 *Author: Quan Le
 *Creation Date: 3/1/2024
 *Modification Date: 3/1/2024
 *Purpose: Program reads the name of the input file from the user
 *		   Then, it opens the file, reads each row of data and calculates the average score and the highest score of all students.
 *		   Finally, outputs the average score and the highest score to the user's screen.
*/

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <climits>


using namespace std;

//Prototype
void processClass(ifstream&, float&, int&);


int main()
{
	//Declare variables
	string filename;
	float average;
	int highestScore;

	ifstream ifs;
	ofstream ofs;

	//Read the name of the file from input
	cout << "Please enter a filename: ";
	cin >> filename;

	//Open the input file
	ifs.open(filename);

	//Check if the file can't be opened
	if (!ifs.is_open())
	{
		cerr << "Unable to open " << filename << endl;
		system("pause");
		return 0;
	}

	processClass(ifs, average, highestScore);

	//display average and highest
	cout << "The average is: " << average << endl;
	cout << "The highest is: " << highestScore << endl;

	system("pause");
	return 0;
}

/*
 *Author: Quan Le
 *Creation Date: 3/1/2024
 *Modification Date: 3/1/2024
 *Purpose: Function reads each row of data. Updates the sum of all scores and counts, which are used to calculate the average score. 
 *	       Compare current score to the current highest score to find the highest.
 *		   Then, calculates the average score and the highest score of all students.
*/
void processClass(ifstream& ifs, float& average, int& highest)
{
	//Declare variables
	string firstName, lastName;
	float score;
	int sum = 0;
	int count = 0;

	highest = INT_MIN;

	while (ifs >> firstName)
	{

		//update highest accordingly
		//update your cumulative sum and count

		ifs >> lastName >> score;
		sum += score;
		count++;
		if (score > highest)
			highest = score;
	}

	//compute average
	average = static_cast<float>(sum) / count;
}