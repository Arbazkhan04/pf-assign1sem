#include <iostream>
#include <windows.h>
using namespace std;
void printMonochoki(int, int);
void moveMonoChoki(int i, int j);
void staticMonochikiBullet();
void monochokiBullet();
void ereaseMonoChoki(int, int);
void gotoxy(int x, int y);
void bounderiesOfGame();
char getCharAtxy(short int x, short int y);
int totalNumberOfBullet = 0;
int monoChokiX = 4;
int monoChokiY = 7;

int main()
{
   system("cls");
   bool isGameRunning = true;
   bounderiesOfGame();
   printMonochoki(monoChokiX, monoChokiY);

   while (isGameRunning)
   {
      if (GetAsyncKeyState(VK_RIGHT))
      {
         char nextloction = getCharAtxy(monoChokiX+1, monoChokiY);
         if (nextloction =='>'|| nextloction=='|'|| nextloction=='-'|| nextloction=='_'|| nextloction==' '||nextloction=='}')
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
         staticMonochikiBullet();
         monochokiBullet();
         totalNumberOfBullet++;
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
   char hel2[10] = {' ', ' ', ' ', '_', '_', '_', ' ', ' ', ' '};
   char hel1[10] = {'}', '-', '|', '_', '_', '_', '|', '-', '>'};
   cout << endl;
   for (int i = 0; i < 9; i++)
   {
      cout << hel2[i];
   }
   cout << endl;
   for (int i = 0; i < 9; i++)
   {
      cout << hel1[i];
   }
}
void ereaseMonoChoki(int x, int y)
{
   gotoxy(x, y);
    char hel2[10] = {' ', ' ', ' ', '_', '_', '_', ' ', ' ', ' '};
   char hel1[10] = {'}', '-', '|', '_', '_', '_', '|', '-', '>'};
   cout << endl;
   for (int i = 0; i < 9; i++)
   {
      char empty=hel2[i];
      empty=' ';
      cout << empty;
   }
   cout << endl;
   for (int i = 0; i < 9; i++)
   {
      char empty=hel1[i];
      empty=' ';
      cout << empty;
   }
   
}
void monochokiBullet()
{
   for (int i = 0; i < 80; i++)
   {
      for (int j = 0; j < 80; j++)
      {
         char locationOfMonochoki = getCharAtxy(i, j);
         if (locationOfMonochoki == '.')
         {
            ereaseMonoChoki(i, j);
            moveMonoChoki(i, j);
         }
      }
   }
}

void moveMonoChoki(int i, int j)
{
   Sleep(0.5);
   gotoxy(i + 1, j);
   cout << ".";
}

void staticMonochikiBullet()
{
   gotoxy(monoChokiX +6, monoChokiY+2);
   cout << ".";
}
