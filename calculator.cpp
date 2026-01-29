#include <iostream>

using namespace std;

int sum(int x, int y)
{
    return x + y;
}

int subtract(int x, int y)
{
    return x - y;
}

int multiple(int x, int y)
{
    return x * y;
}

int divide(int x, int y)
{
    return x / y;
}

int main()
{

    cout << "Calculator";

    char op;
    int x, y;

    cout << endl;
    cin >> x;
    cout << endl;
    cin >> op;
    cout << endl;
    cin >> y;

    switch (op)
    {
    case '+':
        cout << sum(x, y);
        break;
    case '-':
        cout << subtract(x, y);
        break;
    case '*':
        cout << multiple(x, y);
        break;
    case '/':
        cout << divide(x, y);
        break;
    }
}