#include <iostream>
using namespace std;

class Person 
{
    public:
    string name;
    int age;

    public: 
    Person()
    {
        name = "Unknown";
        age = 0;

    }

        
    void show_identity()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }



};

class Student : public Person
{
    public: 
    Student()
    {
        name = "Unknown";
        age = 0;
    }

    void set_name()
    {
        cout << "Name: ";
        cin >> name;
    }

    void set_age()
    {
        cout << "Age: ";
        cin >> age;
    }
        
    void get_name()
    {
        cout << "Name: ";
        cin >> name;
    }

    void get_age()
    {
        cout << "Age: ";
        cin >> age;
    }

};

class Teacher : public Person
{

    public: 
    Teacher(string teacherName, int teacherAge)
    {
        name = teacherName;
        age = teacherAge;

    }

};

class Book
{
    public:
    Book()
    {
        cout << "Constructor called"<< endl;
    }
    ~Book()
    {
        cout << "Destructor called " << endl;
    }
};

void praiseStudent(Student &s)
{
    cout << "Good work " << s.name << endl;
   s.name = "John";
   cout << "Good work " << s.name << endl;
}

int addition(int a, int b)
{
    return a + b;
}

int subtraction(int a, int b)
{
    if (b == 0)
    {
        return 0;
    }
    return a - b;

}

int operation (int a, int b ,int (*functocall)(int, int))
{
    int g;
    g = (*functocall)(a,b);
    return g;
}


int main()
{
    Student s1;
    s1.show_identity();

    Teacher t1("John", 45);
    t1.show_identity();

    s1.set_age();
    s1.set_name();
    s1.show_identity();

    praiseStudent(s1);

    int m,n;
    int (*add)(int,int);
    add = addition;
    m = operation(2,6, addition);
    n = operation(18, m, subtraction);
    cout << n << endl;

    return 0;
}