#include <iostream>
using namespace std;

class Student 
{

private:
    string name;
    int id;

public:

    void collectInfo(string studentName, int studentID) 
    {
        name = studentName;
        id = studentID;
    }

    void displayInfo() 
    {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
    }
};

int main() 
{

    Student* students[100];

    int n;

    cout << "How many students are there? ";
    cin >> n;

    for (int i = 0; i < n; i++) 
    {

        string name;
        int id;

        cout << "\nStudent " << i + 1 << endl;

        cout << "Enter name: ";
        cin >> name;

        cout << "Enter ID: ";
        cin >> id;

        students[i] = new Student;


        students[i] -> collectInfo(name, id);
    }

    cout << "\n===== Student List =====\n";

    for (int i = 0; i < n; i++) {
        students[i]->displayInfo();
        cout << endl;
    }

    for (int i = 0; i < n; i++) {
        delete students[i];
    }

    return 0;
}