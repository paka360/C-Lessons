#include <iostream>
using namespace std;

class tollBooth
{
private:
    int num_cars = 0;
    double collected_fares = 0;

public:
    void payingCar()
    {
        num_cars += 1;
        collected_fares += 0.5;
    }

    void nopayCar()
    {
        num_cars += 1;
    }

    void display()
    {
        cout << "\n===== SUMMARY ====" << endl;
        cout << "Total number of cars: " << num_cars << endl;
        cout << "Total fares collected: GHC" << collected_fares << endl;
    }
};

int main()
{
    tollBooth kasoa;

    int choice;

    cout << "=== TOLLBOOTH ===" << endl;

    while (true)
    {
        cout << "\nPlease enter an option\n1. Paying car\n2. Non paying car\n3. ESC" << endl;
        cout << "Option: ";
        cin >> choice;

        if (choice == 1)
        {
            kasoa.payingCar();
            cout << "Paying car selected" << endl;
        }

        else if (choice == 2)
        {
            kasoa.nopayCar();
            cout << "Non paying car selected" << endl;
        }

        else if (choice == 3)
        {
            kasoa.display();
            return false;
        }
    }
    return 0;
}