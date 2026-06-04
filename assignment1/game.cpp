#include <iostream>
#include <random>
using namespace std;

void game_logic();
void change_difficulty();

random_device rd;
mt19937 gen(rd());


int tries = 3;
int lower_limit = 0;
int upper_limit = 25;
int guess;
int choice;
int secret_num;


void game_logic()
{
    cout << "Guess a number between " << lower_limit << " and " << upper_limit << endl;

    do 
    {
        cout << "\nGuess: " ;
        
        while (!(cin >> guess))
        {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid Input. Enter a number\nGuess: ";
        }

        if (guess == secret_num)
        {
            cout << "You win! " << endl;
            tries = 3;
            uniform_int_distribution<> dist(lower_limit, upper_limit);
            int secret_num = dist(gen);
            break;

        }
        else if (guess > secret_num)
        {
            if (tries == 1)
            {
                cout << "Game Over! " << endl;
                cout << "The number was " << secret_num << endl;
                break;
            }
            else 
            {
                cout << "Attempts Remaining: " << tries - 1 << endl;
                cout << "Try a lower number. " << endl;
                tries--;
            }
    
        }

        else if (guess < secret_num)
        {
            if (tries == 1)
            {
                cout << "\nGame Over! " << endl;
                cout << "The number was " << secret_num << endl;
                break;
            }
            else 
            {
                cout << "Attempts Remaining: " << tries - 1 << endl;
                cout << "Try a higher number. " << endl;
                tries--;
            }
            
        }

        
    }
    while (tries > 0);

}

void change_difficulty()
{
    cout << "\n==== DIFFICULTY LEVEL ====" << endl;
    cout << "\n1. Easy\n2. Medium \n3. Hard" << endl;
    cout << "\nSelect: ";

    while (!(cin >> choice))
    {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Invalid Input. Enter a number\nSelect: ";
    }

    switch (choice)
    {
    case 1:
        upper_limit = 25;
        cout << "Easy level selected " << endl;
        break;

    case 2:
        upper_limit = 50;
        cout << "Medium level selected " << endl;
        break;

    case 3:
        upper_limit = 100;
        cout << "Hard level selected " << endl;
        break;

    
    default:
        cout << "Invalid input" << endl;
        break;
    }

}


int main()
{

    do
    {
        cout << "\n==== MAIN MENU ====" << endl;
        cout << "1. Play\n2. Difficulty Level\n3. Exit" << endl;
        cout << "Select: ";
        
        while (!(cin >> choice))
        {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid Input. Enter a number\nSelect: ";
        }

        switch (choice)
        {
        case 1:{
            tries = 3;
            uniform_int_distribution<> dist(lower_limit, upper_limit);
            secret_num = dist(gen);
            game_logic();
            break;}
        
        case 2:{
            change_difficulty();
            break;}
        
        case 3:{
            return false;
            break;}

        default:{
            cout << "invalid input" << endl;
            break;}
        }
    }
    while (true);



    return 0;
}