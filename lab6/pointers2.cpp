#include <iostream>
using namespace std;


int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

int divide(int a, int b)
{
    if (b == 0)
    {
        cout << "Error: Cannot divide by zero.\n";
        return 0;
    }

    return a / b;
}

int main()
{
    
    int (*operation)(int, int);

    
    operation = add;
    cout << "Addition: " << operation(10, 5) << endl;

    operation = subtract;
    cout << "Subtraction: " << operation(13, 5) << endl;

    operation = multiply;
    cout << "Multiplication: " << operation(3, 8) << endl;

    operation = divide;
    cout << "Division: " << operation(32, 4) << endl;

    return 0;
}