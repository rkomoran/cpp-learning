#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string jonasName = "Jonas";
    string joshName = "Josh";

    cout << ((max(jonasName.length(), joshName.length()) == jonasName.length()) ? jonasName : joshName);
    
    return 0;
}