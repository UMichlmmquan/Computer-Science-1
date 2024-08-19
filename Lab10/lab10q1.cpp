/*
 *Author: Quan Le
 *Creation Date: 3/23/2024
 *Modification Date: 3/23/2024
 *Purpose: Program reads number of words in the vector. 
           Then, it finds the frequencies of each word in the vector and outputs the result
*/

#include <iostream>
#include <vector> 
#include <string>

using namespace std;

//Prototypes
int search(vector<string> &, string);
void display(vector<string>&, vector<int>&);

int main() 
{
    //Declare variables
    int n;
    string word;
    vector<string> wordVec;
    vector<int> freqVec;

    //Ask user to input number of words
    cout << "Enter input: ";
    cin >> n;

    for (int i = 0; i < n; i++) 
    {
        //Read the words from input
        cin >> word;

        int index = search(wordVec, word);
        if (index != -1) 
        {
            //Word found
            freqVec[index]++;
        }
        else {
            // Word not found
            wordVec.push_back(word);
            freqVec.push_back(1);
        }
    }
    //Output
    display(wordVec, freqVec);

    system("pause");
    return 0;
}

/*
 *Author: Quan Le
 *Creation Date: 3/23/2024
 *Modification Date: 3/23/2024
 *Purpose: Functon compares the word with all words in the vector,
 *         If it is found in the vector, return the position of the word
 *         Otherwise, return -1
*/

int search(vector<string> &wordVec, string word)
{
    for (int i = 0; i < static_cast<int>(wordVec.size()); ++i)
    {
        if (wordVec.at(i) == word) // If the word is found, return the position of the word in the vector
            return i;
    }
    return -1; //Otherwise, return -1
}
/*
 *Author: Quan Le
 *Creation Date: 3/23/2024
 *Modification Date: 3/23/2024
 *Purpose: Functon outputs the word and its frequency
*/
void display(vector<string> &wordVec, vector<int> &freqVec) 
{
    for (int i = 0; i < wordVec.size(); ++i) {
        cout << wordVec[i] << " " << freqVec[i] << endl; //Output each word and its frequency
    }
}