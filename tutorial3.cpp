#include <iostream>
using namespace std;

class Students
{
    private:
    int id;
    string name;


    public:
    void set_id()
    {
        cout << "Please enter your student ID: " << endl;
        cin >> id;
    }

    void set_name()
    {
        cout << "Please enter your name: " << endl;
        cin >> name;
    }

    void show_credentials()
    {
        cout << "Name: " << name << endl;
        cout <<"ID: " << id << endl;
    }

};

int main()
{

    Students* studentptr[50];
    int n = 0;
    char choice;

    do 
    {
        studentptr[0] = new Students;
        studentptr[0] -> set_name();
        studentptr[0] -> set_id();
        n++;
        cout << "Register another (y/n)? ";
        cin >> choice;

    }

    while(choice == 'y');
    


    for (int j=0; j < n; j++)
    {
        cout << "\nStudent number " << j + 1;
        studentptr[j] -> show_credentials();
    }

    cout << endl;



    return 0;
}