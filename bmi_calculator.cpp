#include <iostream>
using namespace std;

inline float calculate_bmi(float height, float weight)
{
    return (weight * 10000) / (height * height);
}

float height;
float weight;
float bmi;

int main()
{
    cout << "Please enter your height(cm): ";
    cin >> height;

    cout << "Please enter your weight(kg): ";
    cin >> weight;

    bmi = calculate_bmi(height, weight);
    cout << "Your Body Mass Index is: " << bmi << "kg/m2" <<  endl;
    
    if (bmi < 18.5)
    {
        cout << "You are underweight." << endl;
    }

    else if (bmi < 24.9)
    {
        cout << "Your weight is normal" << endl;
    }
    else if (bmi < 29.9)
    {
        cout << "You are overweight." << endl;
    }
    else if (bmi < 39.9)
    {
        cout << "You are obese" << endl;
    }
    
    else
    {
        cout << "You are morbidly obese" << endl;
    }
    
    return 0;
}