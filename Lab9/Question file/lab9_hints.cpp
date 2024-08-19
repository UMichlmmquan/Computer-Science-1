//Hints for Q2:

#include ...

using namespace std;
//declare struct
struct student
{
	int id;
	...
};

//protos

main(){}

//load grades
int readGrades(ifstream &ifs, student stuArray[])
{
	int count = 0;

	while(!ifs.eof())
	{
		ifs >> stuArray[count].id >> ...
		...
	}

	return count;
}

int outpuMaxGrade(ofstream &ofs, student stuArray[], int count)
{
	//loop thru array and find index of max score
	int maxIndex = 0;
	for(int i = 1; i < count; i++) {...}


	//output to file
	//show name and max grade
	ofs << stuArray[maxIndex]. ...

	return maxIndex;
}