#include <iostream>
using namespace std;
#include <string>

int main()
{
    std::string a;
    std::cin >> a;

    if (a == "N")
        cout << "S\n";
    else if (a == "S")
        cout << "N\n";
    else if (a == "E")
        cout << "W\n";
    else if (a == "W")
        cout << "E\n";
    else if (a == "NE")
        cout << "SW\n";
    else if (a == "SW")
        cout << "NE\n";
    else if (a == "NW")
        cout << "SE\n";
    else if (a == "SE")
        cout << "NW\n";

    return 0;
}
