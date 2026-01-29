#include <iostream>

using namespace std;
int main()
{

    int myNum = 15;
    cout << myNum;

    // this is a comment
    cout << "Hello world!" << endl;
    cout << 3 + 6 << endl; // this is also a comment
    cout << 2 * 5 << endl;
    cout << "I am learning C++\n\n\n";
    /**
     * this is a multi line comment
     */

    double height = 1.74;
    char bloodType = 'D';
    string name = "Jefferson";
    bool isGraduated = true;

    cout << "NAME= " << name << endl
         << "HEIGHT= " << height << endl
         << "BLOOD TYPE= " << bloodType << endl
         << "GRADUADO= " << isGraduated
        ? "SIM"
        : "NÃO";

    int A = 5, B = 3, C = 10;
    cout << endl
         << (A + B + C) / 3;

    const int minutesPerHour = 60;
    const int hoursPerDay = 24;
    cout << "A day contains a total of " << minutesPerHour * hoursPerDay << " minutes\n";
    return 0;
}
