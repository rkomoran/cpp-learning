// calculator
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int x, y;
    std::cout << "Type your first number\n";
    std::cin >> x;

    std::cout << "Type your second number\n";
    // cin takes up to the following whitespace
    std::cin >> y;

    std::cout << x << "+" << y << "=" << x + y << "\n";

    // getline() can take the whole line if no delimiter is specified

    string sentence;
    cout << "Hello, please enter a fact about you!\n";
    getline(cin, sentence, '-');
    cout << "Wow, " << sentence << " is pretty cool!";
    return 0;
}
