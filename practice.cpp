#include <iostream>
#include <cstring>
using namespace std;

int addition(int a, int b)
{
    return (a+b);
}

int subtraction(int a, int b)
{
    return (a-b);
}

int operation(int a, int b, int (*functocall)(int, int))
{
    int g;
    g = (*functocall)(a, b);
    return g;
}



class Distance
{
    private:
    int feet;
    float inches;

    public:
    void getdist()
    {
        cout << "Enter feet: "; cin >> feet;
        cout << "Enter inches: "; cin >> inches;

    }

    void showdist()
    {
        cout << feet << "\'-" << inches << "\'";
    }

};

int main()
{
    int var1 = 11;
    int var2 = 22;

    int* ptr;
    ptr = &var1;
    cout << *ptr << endl;

    ptr = &var2;
    cout << *ptr << endl;

    int var3, var4;
    ptr = &var3;
    *ptr = 34;
    var4 = *ptr;
    cout << var4 << endl;

    int m, n;
    int (*minus)(int,int) = subtraction;
    m = operation(7, 5, addition);
    n = operation(20, m, minus);
    cout << "m = " << m << endl;
    cout << "n = " << n << endl;

    const char* str = "Ideal hands are the devil's workshop.";
    int len = strlen(str);

    char* ftr;
    ftr = new char[len + 1];
    strcpy(ftr, str);
    cout << "ftr = "<< ftr <<endl;
    delete[] ftr;

    Distance dist;
    dist.getdist();
    dist.showdist();

    Distance* distptr;
    distptr = new Distance;
    distptr ->getdist();
    distptr ->showdist();

    cout << endl;
    delete[] distptr;

    return 0;
}