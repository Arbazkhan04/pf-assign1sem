#include <iostream>
#include <windows.h>
using namespace std;
void printMonochoki(int, int);
void generateMonochokiBullet();
void ereaseMonoChoki(int, int);
void gotoxy(int x, int y);
void bounderiesOfGame();
char getCharAtxy(short int x, short int y);
int monochokiBulletX[100];
int monochokiBulletY[100];
int totalNumberOfBullet = 0;
int monoChokiX = 4;
int monoChokiY = 7;
char hel2[9] = {' ', ' ', ' ', '_', '_', '_', ' ', ' ', ' '};
char hel1[9] = {'}', '-', '|', '_', '_', '_', '|', '-', '>'};

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
         char nextloction = getCharAtxy(monoChokiX+9, monoChokiY);
         if (nextloction !='*')
         {
            ereaseMonoChoki(monoChokiX, monoChokiY);
            monoChokiX++;

            printMonochoki(monoChokiX, monoChokiY);
         }
      }
      if (GetAsyncKeyState(VK_LEFT))
      {
         char nextloction = getCharAtxy(monoChokiX, monoChokiY);
         if (nextloction !='*')
         {
            ereaseMonoChoki(monoChokiX, monoChokiY);
            monoChokiX--;

            printMonochoki(monoChokiX, monoChokiY);
         }
      }
      if (GetAsyncKeyState(VK_DOWN))
      {
         char nextloction = getCharAtxy(monoChokiX, monoChokiY + 2);
         if (nextloction !='*')
         {
            ereaseMonoChoki(monoChokiX, monoChokiY);
            monoChokiY++;

            printMonochoki(monoChokiX, monoChokiY);
         }
      }
      if (GetAsyncKeyState(VK_UP))
      {
         char nextloction = getCharAtxy(monoChokiX, monoChokiY);
         if (nextloction !='*')
         {
            ereaseMonoChoki(monoChokiX, monoChokiY);
            monoChokiY--;
            printMonochoki(monoChokiX, monoChokiY);
         }
      }
      if (GetAsyncKeyState(VK_SPACE))
      {
         generateMonochokiBullet();
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
   for (int i = 0; i < 9; i++)
   {
      cout << hel2[i];
   }
   gotoxy(x,y+1);
   for (int i = 0; i < 9; i++)
   {
      cout << hel1[i];
   }
}
void ereaseMonoChoki(int x, int y)
{
   gotoxy(x, y);
   for (int i = 0; i < 9; i++)
   {
      char empty=hel2[i];
      empty=' ';
      cout << empty;
   }
 gotoxy(x, y+1);
   for (int i = 0; i < 9; i++)
   {
      char empty=hel1[i];
      empty=' ';
      cout << empty;
   }
   
}
void generateMonochokiBullet()
{
   monochokiBulletX[totalNumberOfBullet]=monoChokiX+9;
   monochokiBulletY[totalNumberOfBullet]=monoChokiY;
   gotoxy(monoChokiX+9,monoChokiY+1);
   cout<<".";
   totalNumberOfBullet++;
}
