#include<iostream>
#include<windows.h>
using namespace std;
//protoype
void printMaze();
void gotoxy(int x,int y);
void erase(int x,int y);
void printPacman(int x , int y);
char getcharAtxy(short int x,short int y);

int main()
{
  int pacmanX=4;
  int pacmanY=4;
  bool gameRunning=true;
  system("cls");
  printMaze();
  printPacman(pacmanX,pacmanY);
  while(gameRunning)
  {
    if(GetAsyncKeyState(VK_LEFT))
    {
        char nextLocation=getcharAtxy(pacmanX-1,pacmanY);
        if(nextLocation==' ')
        {
            erase(pacmanX,pacmanY);
            pacmanX=pacmanX--;
            printPacman(pacmanX,pacmanY);
        }

    }
  }
}

void gotoxy(int x, int y)
{
    COORD coordinate;
    coordinate.X = x;
    coordinate.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinate);
}

void printMaze()

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

char getcharAtxy(short int x,short int y)
{
    CHAR_INFO ci;
    COORD xy={0,0};
    SMALL_RECT rect={x,y,x,y};
    COORD coordBufSize;
    coordBufSize.X=1;
      coordBufSize.Y=1;
      return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE),&ci,coordBufSize,xy,&rect)?ci.Char.AsciiChar :' ';


}
void erase(int x,int y)
{
    gotoxy(x,y);
    cout<<" ";
}
void printPacman(int x , int y)
{
    gotoxy(x,y);
    cout<<"p";

}
