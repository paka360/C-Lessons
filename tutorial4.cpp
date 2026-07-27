#include <iostream>
using namespace std;

class Student
{
    public:
    string name;
    int indexNo;
    float score;

    public:
    void display_stInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Index Number: " <<  indexNo << endl;
        cout << "Score: " << score << endl;
        
    }

    void save_info(string stname, int stindex, float stscore)
    {
        name = stname;
        indexNo = stindex;
        score = stscore;
    }

};


int main()
{

    int choice;

    cout << "Student Records " << endl;
    cout << "1. Add Students\n";
    cout << "2. Display Students\n";
    cout << "3. Find Student\n";
    cout << "4. Sort Students\n";
    cout << "5.Exit" << endl;
    cin >> choice;

    Student* ptr = new Student;
    if (choice == 1)
    {
        Student* studentptr[100];
        int n;
        cout << "How many students are you registering? ";
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            string name;
            int index;
            float score;

            studentptr[i] = new Student;
            studentptr[i] -> save_info(name, index, score);

        }
        
    }

    else if (choice == 2)
    {
        cout << "Student List\n" << endl;
        for (int i = 0; i < n; i++)
        {
            studentptr[i] -> display_stInfo()
        }
    }

    return 0;
}