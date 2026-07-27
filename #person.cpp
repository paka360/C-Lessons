#include <iostream>
using namespace std;


class Person
{
    private: 
    string name;
    int age;

    public:
    void get_name()
    {
        cout << "Please enter your name: " << endl;
        cin >> name;
    }

    protected:

};


main()
{

    return 0;
}