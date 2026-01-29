#include <iostream>

using namespace std;

int decilmal_result()
{

    int x = 10, y = 3;
    double a = 10.0, b = 2.0;

    auto result = (x / b);

    string message = "diving int and double, result always be double";

    message.append(": ");

    cout << message << result;

    return 0;
}

int main()
{
    auto x = 10, y = 3, z = 5;

    cout << (x + y) << "\n"; // 13
    cout << (x - y) << "\n"; // 7
    cout << (x * y) << "\n"; // 30
    cout << (x / y) << "\n"; // 3 (interger division)
    cout << (x % y) << "\n"; // 1

    ++z;
    cout << z << "\n"; // 6
    --z;
    cout << z << "\n"; // 5

    decilmal_result();

    return 0;
}