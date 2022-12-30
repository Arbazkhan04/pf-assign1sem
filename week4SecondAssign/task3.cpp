#include <iostream>
#include<windows.h>
using namespace std;
void packManDesign();
void gotoxy(int , int );
void playerMove(int x,int y);
int main()
{
   system("cls");
   
   packManDesign();
   int x=3;
   int y=3;
   playerMove(x,y);

   

  return 0;
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


void gotoxy(int x, int y)
{
    COORD coordinate;
    coordinate.X = x;
    coordinate.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinate);
}

void playerMove(int x,int y)
{
    gotoxy(x-1,y);
    cout<<" ";
    gotoxy(x,y);
    cout<<"p";
    
    Sleep(200);
}
