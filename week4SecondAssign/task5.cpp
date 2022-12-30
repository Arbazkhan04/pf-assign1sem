#include <iostream>
#include<windows.h>
#include<string>
using namespace std;
void name(string name);
void gotoxy(int , int );

int main()
{
   system("cls");
   
   string x="ARBAZ";
   name(x);
   

  return 0;
}





void gotoxy(int x, int y)
{
    COORD coordinate;
    coordinate.X = x;
    coordinate.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinate);
}

void name(string name)
{
   gotoxy(50,20);
   cout<<name;
}

