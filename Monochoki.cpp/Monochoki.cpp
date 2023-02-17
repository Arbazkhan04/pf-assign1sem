#include <iostream>
#include <windows.h>
using namespace std;
void printMonochoki(int, int);
void printMonochokiLeft(int, int);
void generateBulletForLeft();
void moveLeftBullet();
void printScore();
void monochokiScore();
int score=0;
void removeBulletFormLeftIndex(int);
void eraseLeftMonoChoki(int, int);
void printMonochokiUp(int, int);
void moveBulletForUp();
void eraseUpMonochoki(int, int);
void generateBulletForUp();
void removeBulletFromUpArray(int);
void printDownMonochoki(int, int);
void eraseDownMonochoki(int, int);
void generateMonochokiDownBullet();
void moveBulletForDown();
void removeBulletFormDownIndex(int index);

void generateMonochokiBullet();
void moveMonochokiBullet();
void ereaseMonoChoki(int, int);
void gotoxy(int x, int y);
void ereaseMonochokiBullet(int, int);
void printMonochokiBullet(int x, int y);
void removeBulletFromArray(int index);
void bounderiesOfGame();
char getCharAtxy(short int x, short int y);
int totalNumberOfBullet = 0;
int monochokiBulletX[100];
int monochokiBulletY[100];

int totalNumberOfLeftBullet = 0;
int monochokiLeftArrX[100];
int monochokiLeftArrY[100];

int totalNumberUpBullet = 0;
int monochokiUpArrX[100];
int monochokiUpArrY[100];

int totalNumberDownBullet = 0;
int monochokiDownArrX[100];
int monochokiDownArrY[100];

int monoChokiX = 4;
int monoChokiY = 4;

char hel2[9] = {' ', ' ', ' ', '_', '_', '_', ' ', ' ', ' '};
char hel1[9] = {'}', '-', '|', '_', '_', '_', '|', '-', '>'};

char leftHel1[9] = {'{', '-', '|', '_', '_', '_', '|', '-', '<'};
char leftHeli2[9] = {' ', ' ', ' ', '_', '_', '_', ' ', ' ', ' '};

char upHel6[5] = {' ', ' ', '^', ' ', ' '};
char upHel5[5] = {' ', ' ', '|', ' ', ' '};
char upHel1[5] = {' ', '_', '_', '_', ' '};
char upHel2[5] = {'|', ' ', ' ', ' ', '|'};
char upHel3[5] = {'|', ' ', ' ', ' ', '|'};
char upHel4[5] = {' ', '-', '-', '-', ' '};

char downHel6[5] = {' ', ' ', 'v', ' ', ' '};
char downHel5[5] = {' ', ' ', '|', ' ', ' '};
char downHel1[5] = {' ', '_', '_', '_', ' '};
char downHel2[5] = {'|', ' ', ' ', ' ', '|'};
char downHel3[5] = {'|', ' ', ' ', ' ', '|'};
char downHel4[5] = {' ', '-', '-', '-', ' '};

// enemy-1
char box = 219;
char arr1[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', box, box};
char arr2[7] = {'<', '-', box, box, box, box, box};
char arr3[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', box, box};
int enemyOneX = 80;
int enemyOneY = 10;
void printEnemy1();
void ereaseEnemy1();
void moveEnemyOneBullet();
void printEnemyOneBullet(int, int);
void ereaseEnemyOneBullet(int, int);
string enemyOneDirection = "up";
void moveEnemyOne();
int enemyOnetimer = 0;
// int enemyonetimerDelayContiuosuBullet = 0;
int enemyOneLocationX[100];
int enemyOneLocationY[100];
int totalBulletByEnemyOne = 0;
void generateBullet();
void removeIndexOfEnemyOne(int);
void enemyCollisionWithBullet();
// enemy-1

int main()
{
   system("cls");
   bool isGameRunning = true;
   bounderiesOfGame();

   printMonochoki(monoChokiX, monoChokiY);
   printEnemy1();

   while (isGameRunning)
   {
         printScore();
      if (GetAsyncKeyState(VK_RIGHT))
      {
         char nextloction = getCharAtxy(monoChokiX + 9, monoChokiY);
         if (nextloction != '*')
         {
            ereaseMonoChoki(monoChokiX, monoChokiY);
            eraseLeftMonoChoki(monoChokiX, monoChokiY);
            eraseUpMonochoki(monoChokiX, monoChokiY);
            eraseDownMonochoki(monoChokiX, monoChokiY);
            monoChokiX++;

            printMonochoki(monoChokiX, monoChokiY);
         }
      }
      if (GetAsyncKeyState(VK_LEFT))
      {
         char nextloction = getCharAtxy(monoChokiX - 1, monoChokiY);
         if (nextloction != '*')
         {
            eraseLeftMonoChoki(monoChokiX, monoChokiY);
            ereaseMonoChoki(monoChokiX, monoChokiY);
            eraseUpMonochoki(monoChokiX, monoChokiY);
            eraseDownMonochoki(monoChokiX, monoChokiY);
            monoChokiX--;
            // printMonochoki(monoChokiX, monoChokiY);
            printMonochokiLeft(monoChokiX, monoChokiY);
         }
      }
      if (GetAsyncKeyState(VK_DOWN))
      {
         char nextloction = getCharAtxy(monoChokiX, monoChokiY + 6);
         if (nextloction != '*')
         {
            ereaseMonoChoki(monoChokiX, monoChokiY);
            eraseLeftMonoChoki(monoChokiX, monoChokiY);
            eraseUpMonochoki(monoChokiX, monoChokiY);
            eraseDownMonochoki(monoChokiX, monoChokiY);
            monoChokiY++;
            printDownMonochoki(monoChokiX, monoChokiY);
         }
      }
      if (GetAsyncKeyState(VK_UP))
      {
         char nextloction = getCharAtxy(monoChokiX, monoChokiY - 2);
         if (nextloction != '*')
         {
            ereaseMonoChoki(monoChokiX, monoChokiY);
            eraseLeftMonoChoki(monoChokiX, monoChokiY);
            eraseUpMonochoki(monoChokiX, monoChokiY);
            eraseDownMonochoki(monoChokiX, monoChokiY);
            monoChokiY--;
            //  printMonochoki(monoChokiX, monoChokiY);
            printMonochokiUp(monoChokiX, monoChokiY);
         }
      }
      if (GetAsyncKeyState(VK_SPACE))
      {

         if (GetAsyncKeyState(VK_LEFT))
         {
            generateBulletForLeft();
         }
         else if (GetAsyncKeyState(VK_RIGHT))
         {
            generateMonochokiBullet();
         }
         else if (GetAsyncKeyState(VK_UP))
         {
            generateBulletForUp();
         }
         else if (GetAsyncKeyState(VK_DOWN))
         {
            generateMonochokiDownBullet();
         }
      }
      if (GetAsyncKeyState(VK_ESCAPE))
      {

         isGameRunning = false;
      }
      if (enemyOnetimer == 2)
      {
         moveEnemyOne();
         generateBullet();
         moveEnemyOneBullet();
         
         enemyOnetimer = 0;
         // totalBulletByEnemyOne=0;
      }
      // if (enemyonetimerDelayContiuosuBullet == 10)
      // {

      //    generateBullet();
      //    moveEnemyOneBullet();
      //    enemyonetimerDelayContiuosuBullet = 0;
      // }
      moveBulletForDown();
      moveMonochokiBullet();
      enemyCollisionWithBullet();
      moveLeftBullet();
      moveBulletForUp();
      enemyOnetimer++;
      // enemyonetimerDelayContiuosuBullet++;

      Sleep(70);
   }
}

void bounderiesOfGame()
{
   cout << "**************************************************************************************************************************" << endl;
   cout << "*                                                                                                                        *" << endl;
   cout << "*                                                                                                                        *" << endl;
   cout << "*                                                                                                                        *" << endl;
   cout << "*                                                                                                                        *" << endl;
   cout << "*                                                                                                                        *" << endl;
   cout << "*                                                                                                                        *" << endl;
   cout << "*                                                                                                                        *" << endl;
   cout << "*                                                                                                                        *" << endl;
   cout << "*                                                                                                                        *" << endl;
   cout << "*                                                                                                                        *" << endl;
   cout << "*                                                                                                                        *" << endl;
   cout << "*                                                                                                                        *" << endl;
   cout << "*                                                                                                                        *" << endl;
   cout << "*                                                                                                                        *" << endl;
   cout << "*                                                                                                                        *" << endl;
   cout << "*                                                                                                                        *" << endl;
   cout << "*                                                                                                                        *" << endl;
   cout << "*                                                                                                                        *" << endl;
   cout << "*                                                                                                                        *" << endl;
   cout << "*                                                                                                                        *" << endl;
   cout << "*                                                                                                                        *" << endl;
   cout << "*                                                                                                                        *" << endl;
   cout << "*                                                                                                                        *" << endl;
   cout << "*                                                                                                                        *" << endl;
   cout << "*                                                                                                                        *" << endl;
   cout << "*                                                                                                                        *" << endl;
   cout << "*                                                                                                                        *" << endl;
   cout << "**************************************************************************************************************************" << endl;
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
   gotoxy(x, y + 1);
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
      char empty = hel2[i];
      empty = ' ';
      cout << empty;
   }
   gotoxy(x, y + 1);
   for (int i = 0; i < 9; i++)
   {
      char empty = hel1[i];
      empty = ' ';
      cout << empty;
   }
}

void printMonochokiLeft(int x, int y)
{
   gotoxy(x, y);
   for (int i = 8; i >= 0; i--)
   {
      cout << leftHel1[i];
   }
   gotoxy(x, y - 1);
   for (int i = 8; i >= 0; i--)
   {
      cout << leftHeli2[i];
   }
}

void eraseLeftMonoChoki(int x, int y)
{
   gotoxy(x, y);
   for (int i = 8; i >= 0; i--)
   {
      char empty = leftHel1[i];
      empty = ' ';
      cout << empty;
   }
   gotoxy(x, y - 1);
   for (int i = 8; i >= 0; i--)
   {
      char empty1 = leftHeli2[i];
      empty1 = ' ';
      cout << empty1;
   }
}

void eraseUpMonochoki(int x, int y)
{
   gotoxy(x, y);
   for (int i = 0; i < 5; i++)
   {
      char empy = upHel6[i];
      empy = ' ';
      cout << empy;
   }
   gotoxy(x, y + 1);
   for (int i = 0; i < 5; i++)
   {
      char empy = upHel5[i];
      empy = ' ';
      cout << empy;
   }
   gotoxy(x, y + 2);

   for (int i = 0; i < 5; i++)
   {
      char empy = upHel1[i];
      empy = ' ';
      cout << empy;
   }
   gotoxy(x, y + 3);

   for (int i = 0; i < 5; i++)
   {
      char empy = upHel2[i];
      empy = ' ';
      cout << empy;
   }
   gotoxy(x, y + 4);
   for (int i = 0; i < 5; i++)
   {
      char empy = upHel3[i];
      empy = ' ';
      cout << empy;
   }
   gotoxy(x, y + 5);
   for (int i = 0; i < 5; i++)
   {
      char empy = upHel4[i];
      empy = ' ';
      cout << empy;
   }
}

void printMonochokiUp(int x, int y)
{
   gotoxy(x, y);
   for (int i = 0; i < 5; i++)
   {

      cout << upHel6[i];
   }
   gotoxy(x, y + 1);
   for (int i = 0; i < 5; i++)
   {
      cout << upHel5[i];
   }
   gotoxy(x, y + 2);

   for (int i = 0; i < 5; i++)
   {
      cout << upHel1[i];
   }
   gotoxy(x, y + 3);

   for (int i = 0; i < 5; i++)
   {
      cout << upHel2[i];
   }
   gotoxy(x, y + 4);
   for (int i = 0; i < 5; i++)
   {
      cout << upHel3[i];
   }
   gotoxy(x, y + 5);
   for (int i = 0; i < 5; i++)
   {
      cout << upHel4[i];
   }
}

void printDownMonochoki(int x, int y)
{
   gotoxy(x, y);
   for (int i = 0; i < 5; i++)
   {

      cout << downHel4[i];
   }
   gotoxy(x, y + 1);
   for (int i = 0; i < 5; i++)
   {
      cout << downHel3[i];
   }
   gotoxy(x, y + 2);

   for (int i = 0; i < 5; i++)
   {
      cout << downHel2[i];
   }
   gotoxy(x, y + 3);

   for (int i = 0; i < 5; i++)
   {
      cout << downHel1[i];
   }
   gotoxy(x, y + 4);
   for (int i = 0; i < 5; i++)
   {
      cout << downHel5[i];
   }
   gotoxy(x, y + 5);
   for (int i = 0; i < 5; i++)
   {
      cout << downHel6[i];
   }
}

void eraseDownMonochoki(int x, int y)
{
   gotoxy(x, y);
   for (int i = 0; i < 5; i++)
   {

      char empy = downHel4[i];
      empy = ' ';
      cout << empy;
   }
   gotoxy(x, y + 1);
   for (int i = 0; i < 5; i++)
   {
      char empy = downHel3[i];
      empy = ' ';
      cout << empy;
   }
   gotoxy(x, y + 2);

   for (int i = 0; i < 5; i++)
   {
      char empy = downHel2[i];
      empy = ' ';
      cout << empy;
   }
   gotoxy(x, y + 3);

   for (int i = 0; i < 5; i++)
   {
      char empy = downHel1[i];
      empy = ' ';
      cout << empy;
   }
   gotoxy(x, y + 4);
   for (int i = 0; i < 5; i++)
   {
      char empy = downHel5[i];
      empy = ' ';
      cout << empy;
   }
   gotoxy(x, y + 5);
   for (int i = 0; i < 5; i++)
   {
      char empy = downHel6[i];
      empy = ' ';
      cout << empy;
   }
}

void removeBulletFromArray(int index)
{
   for (int x = index; x < totalNumberOfBullet - 1; x++)
   {
      monochokiBulletX[x] = monochokiBulletX[x + 1];
      monochokiBulletY[x] = monochokiBulletY[x + 1];
   }
   totalNumberOfBullet--;
}

void generateMonochokiBullet()
{
   char nextlocation = getCharAtxy(monoChokiX + 9, monoChokiY + 1);
   if (nextlocation != '*')
   {
      monochokiBulletX[totalNumberOfBullet] = monoChokiX + 9;
      monochokiBulletY[totalNumberOfBullet] = monoChokiY + 1;
      gotoxy(monoChokiX + 9, monoChokiY + 1);
      cout << ".";
      totalNumberOfBullet++;
   }
}
void moveMonochokiBullet()
{
   for (int i = 0; i < totalNumberOfBullet; i++)
   {
      char nextLocation = getCharAtxy(monochokiBulletX[i] + 1, monochokiBulletY[i] + 1);
      if (nextLocation != ' ')
      {
         ereaseMonochokiBullet(monochokiBulletX[i], monochokiBulletY[i]);
         removeBulletFromArray(i);
      }
      else
      {
         ereaseMonochokiBullet(monochokiBulletX[i], monochokiBulletY[i]);
         monochokiBulletX[i] = monochokiBulletX[i] + 1;
         printMonochokiBullet(monochokiBulletX[i], monochokiBulletY[i]);
      }
   }
}
void ereaseMonochokiBullet(int x, int y)
{
   gotoxy(x, y);
   cout << " ";
}
void printMonochokiBullet(int x, int y)
{
   gotoxy(x, y);
   cout << ".";
}

void generateBulletForLeft()
{
   char nextlocation = getCharAtxy(monoChokiX - 1, monoChokiY);
   if (nextlocation != '*')
   {
      monochokiLeftArrX[totalNumberOfLeftBullet] = monoChokiX - 1;
      monochokiLeftArrY[totalNumberOfLeftBullet] = monoChokiY;
      gotoxy(monoChokiX - 1, monoChokiY);
      cout << ".";
      totalNumberOfLeftBullet++;
   }
}
void moveLeftBullet()
{
   for (int i = 0; i < totalNumberOfLeftBullet; i++)
   {
      char previousLocation = getCharAtxy(monochokiLeftArrX[i] - 2, monochokiLeftArrY[i]);
      if (previousLocation != ' ')
      {
         ereaseMonochokiBullet(monochokiLeftArrX[i], monochokiLeftArrY[i]);
         removeBulletFormLeftIndex(i);
      }
      else
      {
         ereaseMonochokiBullet(monochokiLeftArrX[i], monochokiLeftArrY[i]);
         monochokiLeftArrX[i] = monochokiLeftArrX[i] - 1;
         printMonochokiBullet(monochokiLeftArrX[i], monochokiLeftArrY[i]);
      }
   }
}

void removeBulletFormLeftIndex(int index)
{
   for (int x = index; x < totalNumberOfLeftBullet - 1; x++)
   {
      monochokiLeftArrX[x] = monochokiLeftArrX[x + 1];
      monochokiLeftArrY[x] = monochokiLeftArrY[x + 1];
   }
   totalNumberOfLeftBullet--;
}

void generateBulletForUp()
{
   monochokiUpArrX[totalNumberUpBullet] = monoChokiX + 2;
   monochokiUpArrY[totalNumberUpBullet] = monoChokiY - 1;
   gotoxy(monoChokiX + 2, monoChokiY - 1);
   cout << ".";
   totalNumberUpBullet++;
}
void moveBulletForUp()
{
   for (int i = 0; i < totalNumberUpBullet; i++)
   {
      char upLocation = getCharAtxy(monochokiUpArrX[i], monochokiUpArrY[i] - 1);
      if (upLocation != ' ')
      {
         ereaseMonochokiBullet(monochokiUpArrX[i], monochokiUpArrY[i]);
         removeBulletFromUpArray(i);
      }
      else
      {
         ereaseMonochokiBullet(monochokiUpArrX[i], monochokiUpArrY[i]);
         monochokiUpArrY[i] = monochokiUpArrY[i] - 1;

         printMonochokiBullet(monochokiUpArrX[i], monochokiUpArrY[i]);
      }
   }
}
void removeBulletFromUpArray(int index)
{
   for (int x = index; x < totalNumberUpBullet - 1; x++)
   {
      monochokiUpArrX[x] = monochokiUpArrX[x + 1];
      monochokiUpArrY[x] = monochokiUpArrY[x + 1];
   }
   totalNumberUpBullet--;
}

void generateMonochokiDownBullet()
{
   char nextLoction = getCharAtxy(monoChokiX + 2, monoChokiY + 6);
   if (nextLoction != '*')
   {
      monochokiDownArrX[totalNumberDownBullet] = monoChokiX + 2;
      monochokiDownArrY[totalNumberDownBullet] = monoChokiY + 6;
      gotoxy(monoChokiX + 2, monoChokiY + 6);
      cout << ".";
      totalNumberDownBullet++;
   }
}

void moveBulletForDown()
{
   for (int i = 0; i < totalNumberDownBullet; i++)
   {
      char downBulletLocation = getCharAtxy(monochokiDownArrX[i], monochokiDownArrY[i] + 1);
      if (downBulletLocation != ' ')
      {
         ereaseMonochokiBullet(monochokiDownArrX[i], monochokiDownArrY[i]);
         removeBulletFormDownIndex(i);
      }
      else
      {
         ereaseMonochokiBullet(monochokiDownArrX[i], monochokiDownArrY[i]);
         monochokiDownArrY[i] = monochokiDownArrY[i] + 1;
         printMonochokiBullet(monochokiDownArrX[i], monochokiDownArrY[i]);
      }
   }
}
void removeBulletFormDownIndex(int index)
{
   for (int x = index; x < totalNumberDownBullet - 1; x++)
   {
      monochokiDownArrX[x] = monochokiDownArrX[x + 1];
      monochokiDownArrY[x] = monochokiDownArrY[x + 1];
   }
   totalNumberDownBullet--;
}
void printScore()
{
   gotoxy(100,10);
   cout<<"Score is "<<score;
}
void monochokiScore()
{
   score++;
}
// enenmy-1
void printEnemy1()
{
   gotoxy(enemyOneX, enemyOneY);
   for (int i = 0; i < 9; i++)
   {
      cout << arr1[i];
   }
   gotoxy(enemyOneX, enemyOneY + 1);
   for (int i = 0; i < 7; i++)
   {
      cout << arr2[i];
   }
   gotoxy(enemyOneX, enemyOneY + 2);
   for (int i = 0; i < 9; i++)
   {
      cout << arr3[i];
   }
}
void ereaseEnemy1()
{
   gotoxy(enemyOneX, enemyOneY);
   for (int i = 0; i < 9; i++)
   {
      char emp;
      emp = arr1[i];
      emp = ' ';
      cout << emp;
   }
   gotoxy(enemyOneX, enemyOneY + 1);
   for (int i = 0; i < 7; i++)
   {
      char emp;
      emp = arr2[i];
      emp = ' ';
      cout << emp;
   }
   gotoxy(enemyOneX, enemyOneY + 2);
   for (int i = 0; i < 9; i++)
   {

      char emp;
      emp = arr2[i];
      emp = ' ';
      cout << emp;
   }
}

void moveEnemyOne()
{
   if (enemyOneDirection == "up")
   {
      char nextlocation = getCharAtxy(enemyOneX, enemyOneY - 1);
      if (nextlocation == ' ')
      {
         ereaseEnemy1();
         enemyOneY--;
         printEnemy1();
      }
      if (nextlocation == '*')
      {
         enemyOneDirection = "down";
      }
   }
   else if (enemyOneDirection == "down")
   {
      char nextlocation = getCharAtxy(enemyOneX, enemyOneY + 4);
      if (nextlocation == ' ')
      {
         ereaseEnemy1();
         enemyOneY++;
         printEnemy1();
      }
      if (nextlocation == '*')
      {
         enemyOneDirection = "up";
      }
   }
}

void generateBullet()
{

   if (enemyOneY == 10)
   {
      enemyOneLocationX[totalBulletByEnemyOne] = enemyOneX - 1;
      enemyOneLocationY[totalBulletByEnemyOne] = enemyOneY + 1;
      gotoxy(enemyOneX - 1, enemyOneY + 1);
      cout << ".";
      totalBulletByEnemyOne++;
   }
   
   if (enemyOneY == 3)
   {
      enemyOneLocationX[totalBulletByEnemyOne] = enemyOneX - 1;
      enemyOneLocationY[totalBulletByEnemyOne] = enemyOneY + 1;
      gotoxy(enemyOneX - 1, enemyOneY + 1);
      cout << ".";
      totalBulletByEnemyOne++;
   }
   else if (enemyOneY == 20)
   {
      enemyOneLocationX[totalBulletByEnemyOne] = enemyOneX - 1;
      enemyOneLocationY[totalBulletByEnemyOne] = enemyOneY + 1;
      gotoxy(enemyOneX - 1, enemyOneY + 1);
      cout << ".";
      totalBulletByEnemyOne++;
   }
   else if (enemyOneY == 30)
   {
      enemyOneLocationX[totalBulletByEnemyOne] = enemyOneX - 1;
      enemyOneLocationY[totalBulletByEnemyOne] = enemyOneY + 1;
      gotoxy(enemyOneX - 1, enemyOneY + 1);
      cout << ".";
      totalBulletByEnemyOne++;
   }
}
void moveEnemyOneBullet()
{
   for (int i = 0; i < totalBulletByEnemyOne; i++)
   {
      char nextlocation = getCharAtxy(enemyOneLocationX[i]-1, enemyOneLocationY[i]);
      if (nextlocation == ' ')
      {
         ereaseEnemyOneBullet(enemyOneLocationX[i], enemyOneLocationY[i]);
         enemyOneLocationX[i] = enemyOneLocationX[i] - 1;
         // bool result=checkEnemy1BulletCollide(enemyOneLocationX[i]);
         // if(result==false)
         // {
            // if(nextlocation=='.')
            // {

            printEnemyOneBullet(enemyOneLocationX[i], enemyOneLocationY[i]);
         // }
         // else if(result==true){
         //    cout<<"**";
         // }
      }
      if(nextlocation=='*')
      {
         ereaseEnemyOneBullet(enemyOneLocationX[i], enemyOneLocationY[i]);

         removeIndexOfEnemyOne(i);
      }
      
   }
}


void ereaseEnemyOneBullet(int x, int y)
{
   gotoxy(x, y);
   cout << " ";
}
void printEnemyOneBullet(int x, int y)
{
   gotoxy(x, y);
   cout << ".";
}

void removeIndexOfEnemyOne(int index)
{
    for (int x = index; x < totalBulletByEnemyOne - 1; x++)
   {
      enemyOneLocationX[x] = enemyOneLocationX[x + 1];
      enemyOneLocationY[x] = enemyOneLocationY[x + 1];
   }
   totalBulletByEnemyOne--;
}
void enemyCollisionWithBullet()
{
   for(int i=0;i<totalNumberOfBullet;i++)
   {
      
      if(monochokiBulletX[i]+1==enemyOneX && (monochokiBulletY[i]==enemyOneY || monochokiBulletY[i]==enemyOneY+1||monochokiBulletY[i]==enemyOneY+2 || monochokiBulletY[i]==enemyOneY+3 ||  monochokiBulletY[i]==enemyOneY+4 ))
      {
          ereaseMonoChoki(monochokiBulletX[i],monochokiBulletY[i]);
          monochokiScore();
         removeBulletFromArray(i);
      }
       if(monochokiBulletY[i]+1==enemyOneY||monochokiBulletY[i]+2==enemyOneY|| monochokiBulletY[i]+3==enemyOneY)
      {
          ereaseMonoChoki(monochokiBulletX[i],monochokiBulletY[i]);
          monochokiScore();
         removeBulletFromArray(i);
      }
   }
}
// enenmy-1