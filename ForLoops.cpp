#include <iostream>
using namespace std;


int main()
{
    int numbers[] = {10, 20, 30, 40, 50};

    for (int i : numbers)
    {
        cout << i << endl;
    }
    return 0;
}