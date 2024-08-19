#include <iostream>
#include <string>
using namespace std;

int main()
{
    std::string first = "John ";
    std::string last = "Doe";

    std::cout << "Hey, my name is " << first + last;

    std::cout << endl << first.append(last) + " is my name";

    std::cout << endl << "The length of your name is: " << first.append(last).length();
    std::cout << first;

    return 0;
}