/*
 *Author: Quan Le
 *Creation Date: 3/14/2024
 *Modification Date: 3/14/2024
 *Purpose: Program reads the names of the input and output file.
 *	       Calls functions to read grades, calculates and outputs max grade, min grade, average grade and number of students processed to the output file
 *	       Then it closes the files and outputs the results to the screen
*/

#include <iostream>
#include <fstream>

using namespace std;

//declare struct
struct student
{
	int id;
	string fName;
	string lName;
	float grade;
};

//prototypes
int readGrades(ifstream&, student []);
int outputMaxGrade(ofstream&, student [], int);
int outputMinGrade(ofstream&, student [], int);
float outputAverageGrade(ofstream&, student [], int);
void outputStudentCount(ofstream&, int);

int main() 
{
	//Declare variables
	string fileName_input, fileName_output;
	ifstream ifs;
	ofstream ofs;
	int count, maxIndex, minIndex;
	student stuArray[10];
	float average;
	//Input file name;
	cout << "Input the input file name: ";
	cin >> fileName_input;
	cout << "Input the output file name: ";
	cin >> fileName_output;

	//Open the files
	ifs.open(fileName_input);
	ofs.open(fileName_output);
	if (!ifs.is_open())
	{
		cout << "Cannot open " << fileName_input << endl;
		system("pause");
		return 1;
	}

	//Call functions
	count = readGrades(ifs, stuArray);
	maxIndex = outputMaxGrade(ofs, stuArray, count);
	minIndex = outputMinGrade(ofs, stuArray, count);
	average = outputAverageGrade(ofs, stuArray, count);
	outputStudentCount(ofs, count);

	//Output
	cout << stuArray[maxIndex].fName << " " << stuArray[maxIndex].lName << " has the max grade which is: " << stuArray[maxIndex].grade << endl;
	cout << stuArray[minIndex].fName << " " << stuArray[minIndex].lName << " has the min grade which is: " << stuArray[minIndex].grade << endl;
	cout << "The class average is: " << average << endl;
	cout << "The number of students processed is: " << count << endl;

	//Close the files
	ifs.close();
	ofs.close();

	system("pause");
	return 0;
}

/*
 *Author: Quan Le
 *Creation Date: 3/14/2024
 *Modification Date: 3/14/2024
 *Purpose: Function reads grades from the input file and stores in the stuArray 
*/
int readGrades(ifstream& ifs, student stuArray[])
{
	//Declare variable
	int count = 0;

	//Read until the end of the file
	while (!ifs.eof())
	{
		ifs >> stuArray[count].id >> stuArray[count].fName >> stuArray[count].lName >> stuArray[count].grade; //Read all values from the file
		count++; //Update count
	}

	return count;
}

/*
 *Author: Quan Le
 *Creation Date: 3/14/2024
 *Modification Date: 3/14/2024
 *Purpose: Function calculates and outputs the max grade to the output file
*/
int outputMaxGrade(ofstream& ofs, student stuArray[], int count)
{
	//loop thru array and find index of max score
	int maxIndex = 0;
	float maxGrade = 0.0;

	for (int i = 0; i < count; i++) 
	{
		if (stuArray[i].grade > maxGrade)
		{
			maxGrade = stuArray[i].grade; //Update maxGrade
			maxIndex = i; //Update maxIndex
		}
	}

	//output to file
	//show name and max grade
	ofs << stuArray[maxIndex].fName << " " << stuArray[maxIndex].lName << " has the max grade which is: " << stuArray[maxIndex].grade << endl;
	return maxIndex;
}

/*
 *Author: Quan Le
 *Creation Date: 3/14/2024
 *Modification Date: 3/14/2024
 *Purpose: Function calculates and outputs the min grade to the output file
*/
int outputMinGrade(ofstream& ofs, student stuArray[], int count)
{
	//loop thru array and find index of min score
	int minIndex = 0;
	float minGrade = 100.0;

	for (int i = 0; i < count; i++)
	{
		if (stuArray[i].grade < minGrade)
		{
			minGrade = stuArray[i].grade; //Update minGrade
			minIndex = i; //Update minIndex
		}
	}

	//output to file
	//show name and min grade
	ofs << stuArray[minIndex].fName << " " << stuArray[minIndex].lName << " has the min grade which is: " << stuArray[minIndex].grade << endl;
	return minIndex;
}

/*
 *Author: Quan Le
 *Creation Date: 3/14/2024
 *Modification Date: 3/14/2024
 *Purpose: Function calculates and outputs the average grade to the output file
*/
float outputAverageGrade(ofstream& ofs, student stuArray[], int count)
{
	//Declare variable
	float sum = 0.0;
	float average;

	for (int i = 0; i < count; i++)
	{
		sum += stuArray[i].grade; //Update sum
	}
	average = sum / count; //Update average

	//output to file
	//show name and average grade
	ofs << "The class average is: " << average << endl;

	return average;
}

/*
 *Author: Quan Le
 *Creation Date: 3/14/2024
 *Modification Date: 3/14/2024
 *Purpose: Function calculates and outputs the number of students processeed to the output file
*/
void outputStudentCount(ofstream& ofs, int count)
{
	ofs << "The number of students processed is: " << count;
}