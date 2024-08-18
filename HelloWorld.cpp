// header file that includes I/O operations (objects)
#include <iostream>
// this other part is almost always included, and these two together are pretty much always present
// you also don't need this -- up to you
using namespace std;

int main()
{
    // cout is an object used with the (<<) insertion operator
    //cout << "Hello World";
    // other alternative from not using "using namespace std" would be
    std::cout << "Hello World" << endl;
    std::cout << "I am learning C++";
    return 0;
}