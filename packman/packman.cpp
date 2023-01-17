#include <iostream>
#include<windows.h>
using namespace std;
void packManDesign();
void gotoxy(int x , int y);
void erase(int x,int y);
void prinpackman(int x,int y);
char getCharAtxy(short int x ,short int y);
int main()
{

  gotoxy(0,5);

   cout<<"p";
   
   system(cls);
  packManDesign();
  return 0;
}
void gotoxy(int x, int y)
{
    COORD coordinate;
    coordinate.X = x;
    coordinate.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinate);
}


void packManDesign()

{
  cout << "####################" << endl;
  cout << "#                  #" << endl;
  cout << "#                  #" << endl;
  cout << "#                  #" << endl;
  cout << "#                  #" << endl;
  cout << "#                  #" << endl;
  cout << "#                  #" << endl;
  cout << "#                  #" << endl;
  cout << "####################" << endl;
}
