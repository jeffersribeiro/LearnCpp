#include <iostream>

using namespace std;

int celsiusToFahrenheit(int temperature) { return (temperature * 9 / 5) + 32; }
int celsiusToKelvin(int temperature) { return temperature + 273, 15; };

int fahrenheitToCelsius(int temperature) { return (temperature - 32) * 5 / 9; };
int fahrenheitToKelvin(int temperature) { return (temperature - 32) * 5 / 9 + 273, 15; };

int kelvinToCelsius(int temperature) { return temperature - 273, 15; };
int kelvinToFahrenheit(int temperature) { return (temperature - 273, 15) * 9 / 5 + 32; };

int main()
{
    int temperature, scala;
    cout << "Enter the temperature: ";
    cin >> temperature;
    cout << "please choose one option to calc the tempetare:" << endl;
    cout << "1 - Celsius (°C)" << endl;
    cout << "2 - Fahrenheit (°F)" << endl;
    cout << "3 - Kelvin (K)" << endl;
    cin >> scala;
    cout << endl;

    int tempatureIncelsuis = scala == 1 ? temperature : (temperature - 32) * 5 / 9;
    int tempatureInFahrenheit = scala == 2 ? temperature : (temperature * 9 / 5) + 32;

    cout << "The temperature in celsuis is " << tempatureIncelsuis << endl;
    cout << "The temperature in Fahrenheit is " << tempatureInFahrenheit << endl;
    return 0;
}