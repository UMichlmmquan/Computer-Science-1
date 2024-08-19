/*
 *Author: Quan Le
 *Creation Date: 3/23/2024
 *Modification Date: 3/23/2024
 *Purpose: Program reads the name of the text file, opens it and reads all the value in the text file.
 *         If the text file is empty, output the message. Otherwise, call the function to get the number of freezing temperature days and outputs it.
*/

#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

//Prototypes
void readTemperaturesFromFile(vector<int>&, ifstream&);
vector<int> vectorFreezingTemperatures(vector<int>&);

int main()
{
    //Declare variables;
    string fileName;
    ifstream ifs;
    vector<int> V;

    //Ask user to input the text file's name
    cout << "Input file name : ";
    cin >> fileName;

    //Open file
    ifs.open(fileName);

    //If the file cannot be open
    if (!ifs.is_open())
    {
        cerr << "Cannot open " << fileName << endl; //Output the error message
        system("pause");
        return 1;
    }

    //Call functions
    readTemperaturesFromFile(V, ifs);
    //The text file is empty
    if (V.empty())
        cout << "The text file is empty" << endl;
    else //Otherwise
    {
        vector<int> output = vectorFreezingTemperatures(V);
        //Output
        cout << "The number of days with freezing temperatures: " << static_cast<int>(output.size()) << endl;
    }
    

    //Close file
    ifs.close();

    system("pause");
    return 0;
}

/*
 *Author: Quan Le
 *Creation Date: 3/23/2024
 *Modification Date: 3/23/2024
 *Purpose: Function reads the all the values in the text file and stores them in the vector
*/
void readTemperaturesFromFile(vector<int> &V, ifstream &ifs)
{
    //Declare variable
    int temp;
    string str;
    ifs >> str;
    if (str == "")
        return;
    else
    {
        temp = stoi(str);
        while (!ifs.eof()) //Read until the end of file
        {
            ifs >> temp;
            V.push_back(temp); //Store the read value in the vector
        }
    }
   
}

/*
 *Author: Quan Le
 *Creation Date: 3/23/2024
 *Modification Date: 3/23/2024
 *Purpose: Function reads the all the values in the vector and store temperatures <= 32 in a new vector and return it.
*/
vector<int> vectorFreezingTemperatures(vector<int>& V)
{
    vector<int> temp;
    for (int i = 0; i < static_cast<int>(V.size()); i++)
    {
        if (V.at(i) <= 32)
            temp.push_back(V.at(i));
    }
    return temp;
}
