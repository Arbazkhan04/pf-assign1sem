#include<iostream>
#include<windows.h>
#include<string>
#include<cstring>

using namespace std;

// Function to move the cursor to a specific position on the console
void gotoxy(int x, int y)
{
    COORD coordinate;
    coordinate.X = x;
    coordinate.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinate);
}

// Function to validate integer options
bool isValidOption(string value)
{
    for (int i = 0; i < value.length(); i++)
    {
        if (!isdigit(value[i]))
        {
            return false;
        }
    }
    return true;
}

// Function to get user input and validate it based on the limit of options
int enterOption(int limit)
{
    string opt;
    cin >> opt;
    while (!isValidOption(opt) || stoi(opt) < 1 || stoi(opt) > limit)
    {
      gotoxy(45,18);
        cout << "Invalid input.";
        
      gotoxy(45,19);
        cout << "Enter your option again: ";
        cin >> opt;
    }
    return stoi(opt);
}

int main()
{
    system("cls"); // Clear the console screen
    gotoxy(45,13);
    cout<<"**************************";
    gotoxy(45,14);
    cout<<"1- Choose your level (1 or 2)";
    gotoxy(45,15);
    cout<<"2- Instruction";
    gotoxy(45,16);
    cout<<"3- Exit";
    gotoxy(45,17);
    cout<<"Enter option ";
    int option = enterOption(3);
    // Do something based on the selected option
    // ...
    return 0;
}
