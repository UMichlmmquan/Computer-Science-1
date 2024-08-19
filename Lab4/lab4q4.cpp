/*
 *Author: Quan Le
 *Creation Date: 2/5/2024
 *Modification Date: 2/5/2024
 *Purpose: Input the symbol to print and the height of the right triangle.
           The height will be validated, if it is unvalid, the program will be paused.
 *		   If it is valid, the program then executes the nested for loop, the outter loop is the height and the inner loop is the width of the triangle
 *		   Finally, it will output the right triangle corresponding to the height and symbol
*/

#include <iostream>

using namespace std;

int main() 
{
    //Declare variable
    char triangleChar;
    int triangleHeight;

    //Input symbol to print
    cout << "Enter a character:" << endl;
    cin >> triangleChar;

    //Input the height of the right triangle
    cout << "Enter triangle height:" << endl;
    cin >> triangleHeight;

    // Validate the input height
    if (triangleHeight <= 0)    //Invalid height
    {
        cout << "Please enter a height that is greater than 0" << endl;
    }
    else //Valid height
    {
        for (int i = 0; i < triangleHeight; ++i) // Height
        {
            for (int j = 0; j <= i; ++j)        //Width
            {
                cout << triangleChar;    //Print symbol
            }
            cout << endl;
        }
    }

    system("pause");
    return 0;
}