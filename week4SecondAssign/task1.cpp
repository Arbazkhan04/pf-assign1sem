#include <iostream>
#include<windows.h>
using namespace std;

void gotoxy(int , int );
int main()
{
   system("cls");
   cout<<"test";

  gotoxy(15,15);
  cout<<"My name is irzam";

  return 0;
}
void gotoxy(int x, int y)
{
    COORD coordinate;
    coordinate.X = x;
    coordinate.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinate);
}



