#include <iostream>
using namespace std;

inline float addition(float a, float b)
{
    return a + b;
}

inline float subtraction(float a, float b)
{
    return a - b;
}

inline float division(float a, float b)
{
    return a / b;
}

inline float multiplication(float a, float b)
{
    return a * b;
}


int main()
{
    int operation;
    float a, b, result;
    bool quit = true;

    cout << "CALCULATOR" << endl;

    do 
    {
         cout << "Enter first number: ";
        cin >> a;

        cout << "Enter Second number: ";
        cin >> b;

        cout << "\nChoose an option\n1. Addition\n2. Subtraction\n3. Division\n4. Multiplication\n5.Exit\nSelect: ";
        cin >> operation;

        if (operation == 1)
        {
            result = addition(a,b);
            cout << "Answer: " <<result<< "\n" << endl;
        }

        else if (operation == 2)
        {
            result = subtraction(a,b);
            cout << "Answer: " + to_string(result)+ "\n" << endl;
        }

        else if (operation == 3)
        {
            if (b == 0)
            {
                cout << "Error. You can't divide by 0" << endl;
            }

            else
            {
            result = division(a,b);
            cout << "Answer: " + to_string(result)+ "\n" << endl;
            }
        }

        else if (operation == 4)
        {
            result = multiplication(a,b);
            cout << "Answer: " + to_string(result) + "\n" << endl;
        }

        else if (operation == 5)
        {
            return false;
        }

        else
        {
            cout << "Invalid Input" << endl;
        }

    }
    while (true);

    return 0;
}