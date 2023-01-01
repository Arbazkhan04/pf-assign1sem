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
   while (true)
   {
     playerMove(x,y);
     if(x<18){
        x++;
     }
     if(x==18)
     {
     gotoxy(x,y-1);
     if(y<8)
     {
        y++;
     }
     if(y==8)
     {
        y=1;
     }

     }
   }
   
  

   

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
    gotoxy(x,y);
    cout<<"p";
    gotoxy(x-1,y);
    cout<<" ";
    gotoxy(x,y-1);
    cout<<" ";
   
    
    Sleep(200);
}
