//Using Object Oreinted Programming Paradignm

#include <iostream>
using namespace std;

class Student
{
    string name;
    int age;
    float height;
    float weight; 
    float bmi;

    public:

    void get_data()
    {
        cout << "Enter your height(cm): ";
        cin >> height;

        cout << "Enter your weight(kg): ";
        cin >> weight;
    }

    void calculate_bmi()
    {
        bmi = (weight * 10000) / (height * height);
    }

    void display_result()
    {
        cout << "BMI: " << bmi << endl;

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

    }

};

int main()
{
    Student Paka;

    Paka.get_data();
    Paka.calculate_bmi();
    Paka.display_result();


    return 0;
}