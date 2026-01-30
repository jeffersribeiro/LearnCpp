#include <iostream>

using namespace std;

struct Temperatures
{
    float fahrenheit;
    float kelvin;
    float celsius;
};

float celsiusToFahrenheit(float temperature) { return (temperature * 9 / 5) + 32; }
float celsiusToKelvin(float temperature) { return temperature + 273.15; };

float fahrenheitToCelsius(float temperature) { return (temperature - 32) * 5 / 9; };
float fahrenheitToKelvin(float temperature) { return (temperature - 32) * 5 / 9 + 273.15; };

float kelvinToCelsius(float temperature) { return temperature - 273.15; };
float kelvinToFahrenheit(float temperature) { return (temperature - 273.15) * 9 / 5 + 32; };

Temperatures handleSelectedScalar(int scala, float temperature)
{
    switch (scala)
    {
    case 1:
    {
        return Temperatures{
            celsiusToFahrenheit(temperature),
            celsiusToKelvin(temperature),
            temperature,
        };
    }
    case 2:
    {
        return Temperatures{
            temperature,
            fahrenheitToKelvin(temperature),
            fahrenheitToCelsius(temperature),
        };
    }
    case 3:
    {
        return Temperatures{
            kelvinToFahrenheit(temperature),
            temperature,
            kelvinToCelsius(temperature),
        };
    }
    default:
        throw std::invalid_argument("Invalid scale");
    }
}

int main()
{
    float temperature;
    int scala;
    cout << "Enter the temperature: ";
    cin >> temperature;
    cout << "please choose one option to calc the tempetare:" << endl;
    cout << "1 - Celsius (°C)" << endl;
    cout << "2 - Fahrenheit (°F)" << endl;
    cout << "3 - Kelvin (K)" << endl;
    cin >> scala;
    cout << endl;

    auto temperatures = handleSelectedScalar(scala, temperature);

    cout << "Celsius: " << temperatures.celsius << "\n";
    cout << "Fahrenheit: " << temperatures.fahrenheit << "\n";
    cout << "Kelvin: " << temperatures.kelvin << "\n";
    return 0;
}