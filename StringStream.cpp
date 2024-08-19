// C++ program to understand the use of getline() function 
#include <iostream>
#include <string>
#include <sstream>
using namespace std; 

int main() 
{
    string myString, tempString;

    /* extract the entire sentence from input 
    getline works on streams -- cin is an object of istream class
    streams tell where to find the input for the function */
    getline(cin, myString);

    stringstream myStream(myString);

    /* we can add another stream to show how getline works */
    cout << "tempString output: ";
    while (getline(myStream, tempString, ' '))
    {
        // have to add space here, because getline does not add delimiter
        cout << tempString << ' ';
    }
    cout << endl;

    return 0;
}