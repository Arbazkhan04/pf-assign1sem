#include <iostream>
#include <windows.h>
using namespace std;
void printMonochoki(int, int);
// void monoChokiShootBullet(int x,int y);
void staticMonochikiBullet(int i, int j);
void monochokiBullet();
void ereaseMonoChoki(int, int);
void gotoxy(int x, int y);
void bounderiesOfGame();
char getCharAtxy(short int x, short int y);
int monoChokiX = 2;
int monoChokiY = 1;

int main()
{
   system("cls");
   int monoChokiX = 2;
   int monoChokiY = 1;
   bool isGameRunning = true;
   bounderiesOfGame();
   printMonochoki(monoChokiX, monoChokiY);

   while (isGameRunning)
   {
      if (GetAsyncKeyState(VK_RIGHT))
      {
         char nextloction = getCharAtxy(monoChokiX + 1, monoChokiY);
         if (nextloction == ' ' || nextloction == 'M')
         {
            ereaseMonoChoki(monoChokiX, monoChokiY);
            monoChokiX++;

            printMonochoki(monoChokiX, monoChokiY);
         }
      }
      if (GetAsyncKeyState(VK_LEFT))
      {
         char nextloction = getCharAtxy(monoChokiX - 1, monoChokiY);
         if (nextloction == ' ' || nextloction == 'M')
         {
            ereaseMonoChoki(monoChokiX, monoChokiY);
            monoChokiX--;

            printMonochoki(monoChokiX, monoChokiY);
         }
      }
      if (GetAsyncKeyState(VK_DOWN))
      {
         char nextloction = getCharAtxy(monoChokiX, monoChokiY + 1);
         if (nextloction == ' ' || nextloction == 'M')
         {
            ereaseMonoChoki(monoChokiX, monoChokiY);
            monoChokiY++;

            printMonochoki(monoChokiX, monoChokiY);
         }
      }
      if (GetAsyncKeyState(VK_UP))
      {
         char nextloction = getCharAtxy(monoChokiX, monoChokiY - 1);
         if (nextloction == ' ' || nextloction == 'M')
         {
            ereaseMonoChoki(monoChokiX, monoChokiY);
            monoChokiY--;
            printMonochoki(monoChokiX, monoChokiY);
         }
      }
      if (GetAsyncKeyState(VK_SPACE))
      {
         monochokiBullet();
        
      }
      if (GetAsyncKeyState(VK_ESCAPE))
      {

         isGameRunning = false;
      }

      Sleep(70);
   }
}

void bounderiesOfGame()
{
   cout << "*********************************************************************************" << endl;
   cout << "*                                                                               *" << endl;
   cout << "*                                                                               *" << endl;
   cout << "*                                                                               *" << endl;
   cout << "*                                                                               *" << endl;
   cout << "*                                                                               *" << endl;
   cout << "*                                                                               *" << endl;
   cout << "*                                                                               *" << endl;
   cout << "*                                                                               *" << endl;
   cout << "*                                                                               *" << endl;
   cout << "*                                                                               *" << endl;
   cout << "*                                                                               *" << endl;
   cout << "*                                                                               *" << endl;
   cout << "*********************************************************************************" << endl;
}

void gotoxy(int x, int y)
{
   COORD coordinate;
   coordinate.X = x;
   coordinate.Y = y;
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinate);
}
char getCharAtxy(short int x, short int y)
{
   CHAR_INFO ci;
   COORD xy = {0, 0};
   SMALL_RECT rect = {x, y, x, y};
   COORD coorBufSize;
   coorBufSize.X = 1;
   coorBufSize.Y = 2;
   return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coorBufSize, xy, &rect) ? ci.Char.AsciiChar : ' ';
}
void printMonochoki(int x, int y)
{
   gotoxy(x, y);
   cout << "M";
}
void ereaseMonoChoki(int x, int y)
{
   gotoxy(x, y);
   cout << " ";
}
void monochokiBullet()
{
   for (int i = 0; i < 100; i++)
   {
      for (int j = 0; j < 200; j++)
      {
         char locationOfMonochoki = getCharAtxy(i, j);
         if (locationOfMonochoki == '.')
         {
            staticMonochikiBullet(i,j);
         }
      }
   }
}
void staticMonochikiBullet(int i, int j)
{
   gotoxy(i + 1, j);
   cout << ".";
}
