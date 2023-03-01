#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;
void gotoxy(int x, int y);
int main()
{
    system("cls");
    int more = 30;
    int less = 20;
    int moreLess = 10;
    char box = 219;
    for (int i = 0; i < 7; i++)
    {
        cout << "|";
        for (int j = 0; j < 10; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < 10; i++)
    {
        cout << "---";
    }
    for (int i = 0; i < 4; i++)
    {
        gotoxy(5, 6 - i);
        cout << box << endl;
    }

     for (int i = 0; i < 2; i++)
    {
        gotoxy(15, 6 - i);
        cout << box << endl;
    }
     for (int i = 0; i < 1; i++)
    {
        gotoxy(25, 6 - i);
        cout << box << endl;
    }
   gotoxy(2,9);
   cout<<"Name1";
    gotoxy(13,9);
   cout<<"Name2";
    gotoxy(23,9);
   cout<<"Name3";
   
    cout << "exit";
    getch();
}

void gotoxy(int x, int y)
{
    COORD coordinate;
    coordinate.X = x;
    coordinate.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinate);
}