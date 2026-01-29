#include <iostream>
#include <string>

using namespace std;

int realLifeExample()
{

    int studentID = 15;
    int studentAge = 23;
    float studentFee = 75.25;
    char studentGrade = 'B';

    // print variables
    cout << "Student ID: " << studentID << endl;
    cout << "Student Age: " << studentAge << endl;
    cout << "Student Fee: " << studentFee << endl;
    cout << "Student Grade: " << studentGrade << endl;

    return 0;
}

int calcRetangleArea()
{
    int length;
    int width;

    string length_message = "Enter the lenght of retangle: ";
    string width_message = "enter the width of retangle: ";

    cout << length_message;
    cin >> length;

    cout << width_message;
    cin >> width;

    int area = length * width;

    // Print the variables
    cout << "Length is: " << length << endl;
    cout << "Width is: " << width << endl;
    cout << "Area of the rectangle is: " << area << endl;
    return area;
};

int main()
{
    realLifeExample();
    calcRetangleArea();
    return 0;
}