#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
void printMonochoki(int, int);
void printMonochokiLeft(int, int);
void generateBulletForLeft();
void monochokiBulletloc();
void moveLeftBullet();
void printScore();
void monochokiScore();
void monochokitestBullletlocation();
int score = 0;
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
void enemiesBulletCollisionToMonochoki();
void MonochokiHealthDecrease();
int totalBulletCollideWithMonochki = 0;
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
void enemyxyloc();
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
void enemyOneBulletLoction();
// enemy-1

// enemytwo
void printEnemyleft2(int, int);
void ereaseEnemyleft2(int, int);
void ereaseEnemyright2(int, int);
void printEnemyright2(int, int);
void printEnemyUp2(int, int);
void ereaseEnemyTwoUp(int, int);
void printEnemyDown2(int, int);
void ereaseEnemyTwoDown(int, int);
// void ereaseEnemyright2();
void moveEnemyTwo();
char leftBox1[9] = {box, box, ' ', ' ', ' ', ' ', ' ', ' ', ' '};
char leftbox2[9] = {box, box, ' ', ' ', ' ', ' ', ' ', ' ', ' '};
char enmeyTwoRightArr[8] = {' ', box, box, box, box, box, '-', '>'};

char upEnem0Arr[5] = {' ', ' ', '^', ' ', ' '};
char upEnem1Arr[5] = {' ', ' ', '|', ' ', ' '};
char upEnem2Arr[5] = {' ', box, box, box, ' '};
char upEnem3Arr[5] = {' ', box, box, box, ' '};
char upEnem4Arr[5] = {' ', box, box, box, ' '};
char upEnem5Arr[5] = {box, box, ' ', box, box};

char downEnem0Arr[5] = {' ', ' ', 'v', ' ', ' '};
char downEnem1Arr[5] = {' ', ' ', '|', ' ', ' '};
char downEnem2Arr[5] = {' ', box, box, box, ' '};
char downEnem3Arr[5] = {' ', box, box, box, ' '};
char downEnem4Arr[5] = {' ', box, box, box, ' '};
char downEnem5Arr[5] = {box, box, ' ', box, box};

// void printEnemyRight

string enemy2Direction = " ";
int Enemy2RightX = 20;
int Enemy2RightY = 8;
int enemyTwoBullettArrX[100]; // left
int enemyTwoBulletArrY[100];  // left
int totalBulletGenerateByEnemy2 = 0;
void generateBulletForLeftenemy2();
void moveBulletForLeftEnemy2();

int enemyTwoRightBullettArrX[100];
int enemyTwoRightBulletArrY[100];
int totalBulletGenerateByrightEnemy2 = 0;
void generateBulletForRightenemy2();
void moveBulletForRightEnemy2();
void removeIndexBulletForLeftEnemy2(int index);
void removeIndexBulletForRightEnemy2(int index);

int enemyTwoUpBullettArrX[100];
int enemyTwoUpBulletArrY[100];
int totalBulletGenerateByUpEnemy2 = 0;
void generateBulletForUpenemy2();
void moveBulletForUpEnemy2();
void removeIndexBulletForUpEnemy2(int index);

int enemyTwoDownBullettArrX[100];
int enemyTwoDownBulletArrY[100];
int totalBulletGenerateByDownEnemy2 = 0;
void generateBulletForDownenemy2();
void moveBulletForDownEnemy2();
void removeIndexBulletForDownEnemy2(int index);
// void removeIndexBulletForUpEnemy2(int index);

void ereaseBulletForLeftEnemy2(int x, int y); // same
void printBulletForLeftEnemy2(int x, int y);  // same
void EnemyTwoBulletCollisons();
// enemytwo

int main()
{
   system("cls");
   bool isGameRunning = true;
   bounderiesOfGame();

   printMonochoki(monoChokiX, monoChokiY);
   printEnemy1();
   printEnemyleft2(Enemy2RightX, Enemy2RightY);

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
            // enemy2Direction = "up";
            enemy2Direction = "down";

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
            enemy2Direction = "left";
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
            enemy2Direction = "right";
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
         MonochokiHealthDecrease();

         enemyxyloc();

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
      // enemyOneBulletLoction();
      moveBulletForUp();
      moveEnemyTwo();
      moveBulletForRightEnemy2();
      moveBulletForLeftEnemy2();
      moveBulletForUpEnemy2();
      moveBulletForDownEnemy2();
      EnemyTwoBulletCollisons();
      // monochokitestBullletlocation();
      enemiesBulletCollisionToMonochoki();

      monochokiBulletloc();
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
   gotoxy(100, 10);
   cout << "Score is " << score;
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
      char nextlocation = getCharAtxy(enemyOneLocationX[i] - 1, enemyOneLocationY[i]);
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
      if (nextlocation == '*')
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
   for (int i = 0; i < totalNumberDownBullet; i++)
   {

      if ((monochokiDownArrY[i] == enemyOneY || monochokiDownArrY[i] == enemyOneY - 1) && (monochokiDownArrX[i] == enemyOneX || monochokiDownArrX[i] + 1 == enemyOneX || monochokiDownArrX[i] - 1 == enemyOneX || monochokiDownArrX[i] - 2 == enemyOneX || monochokiDownArrX[i] - 3 == enemyOneX || monochokiDownArrX[i] - 4 == enemyOneX || monochokiDownArrX[i] - 5 == enemyOneX || monochokiDownArrX[i] - 6 == enemyOneX || monochokiDownArrX[i] - 7 == enemyOneX || monochokiDownArrX[i] - 9 == enemyOneX))
      {
         monochokiScore();
         ereaseMonochokiBullet(monochokiDownArrX[i], monochokiDownArrY[i]);

         removeBulletFormDownIndex(i);
      }
   }
   for (int i = 0; i < totalNumberOfBullet; i++)
   {

      if (monochokiBulletX[i] + 1 == enemyOneX && (monochokiBulletY[i] == enemyOneY || monochokiBulletY[i] == enemyOneY + 1 || monochokiBulletY[i] == enemyOneY + 2 || monochokiBulletY[i] == enemyOneY + 3 || monochokiBulletY[i] == enemyOneY + 4))
      {
         ereaseMonochokiBullet(monochokiBulletX[i], monochokiBulletY[i]);
         monochokiScore();
         removeBulletFromArray(i);
      }
   }

   for (int i = 0; i < totalNumberUpBullet; i++)
   {

      if ((monochokiUpArrY[i] == enemyOneY || monochokiUpArrY[i] == enemyOneY + 1 || monochokiUpArrY[i] == enemyOneY + 2) && (monochokiUpArrX[i] == enemyOneX || monochokiUpArrX[i] + 1 == enemyOneX || monochokiUpArrX[i] - 1 == enemyOneX || monochokiUpArrX[i] - 2 == enemyOneX || monochokiUpArrX[i] - 3 == enemyOneX || monochokiUpArrX[i] - 4 == enemyOneX || monochokiUpArrX[i] - 5 == enemyOneX || monochokiUpArrX[i] - 6 == enemyOneX || monochokiUpArrX[i] - 7 == enemyOneX || monochokiUpArrX[i] - 9 == enemyOneX))
      {
         monochokiScore();
         ereaseMonochokiBullet(monochokiUpArrX[i], monochokiUpArrY[i]);

         removeBulletFromUpArray(i);
      }
   }

   for (int i = 0; i < totalNumberOfLeftBullet; i++)
   {

      if ((monochokiLeftArrX[i] == enemyOneX + 9 || monochokiLeftArrX[i] == enemyOneX + 8) && (monochokiLeftArrY[i] == enemyOneY || monochokiLeftArrY[i] == enemyOneY + 1 || monochokiLeftArrY[i] == enemyOneY + 2 || monochokiLeftArrY[i] == enemyOneY + 3 || monochokiLeftArrY[i] == enemyOneY + 4))
      {
         ereaseMonochokiBullet(monochokiLeftArrX[i], monochokiLeftArrY[i]);
         monochokiScore();
         removeBulletFormLeftIndex(i);
         // removeBulletFromArray(i);
      }
   }
}
void enemyxyloc()
{
   gotoxy(90, 20);
   cout << enemyOneX << " " << enemyOneY;
}

void monochokiBulletloc()
{
   gotoxy(90, 30);
   for (int i = 0; i < totalNumberOfLeftBullet; i++)
   {
      cout << monochokiLeftArrX[i] << " " << monochokiLeftArrY[i];
   }
}

// enenmy-1

// enemy-two
void printEnemyleft2(int x, int y)
{
   gotoxy(x, y);
   for (int i = 0; i < 9; i++)
   {
      cout << arr1[i];
   }
   gotoxy(x, y + 1);
   for (int i = 0; i < 7; i++)
   {
      cout << arr2[i];
   }
   gotoxy(x, y + 2);
   for (int i = 0; i < 9; i++)
   {
      cout << arr3[i];
   }
}
void ereaseEnemyleft2(int x, int y)
{
   gotoxy(x, y);
   for (int i = 0; i < 9; i++)
   {
      char emp;
      emp = arr1[i];
      emp = ' ';
      cout << emp;
   }
   gotoxy(x, y + 1);
   for (int i = 0; i < 7; i++)
   {
      char emp;
      emp = arr2[i];
      emp = ' ';
      cout << emp;
   }
   gotoxy(x, y + 2);
   for (int i = 0; i < 9; i++)
   {

      char emp;
      emp = arr2[i];
      emp = ' ';
      cout << emp;
   }
}
void printEnemyright2(int x, int y)
{
   gotoxy(x, y);
   for (int i = 0; i < 9; i++)
   {
      cout << leftBox1[i];
   }

   gotoxy(x, y + 1);
   for (int i = 0; i < 8; i++)
   {
      cout << enmeyTwoRightArr[i];
   }

   gotoxy(x, y + 2);
   for (int i = 0; i < 9; i++)
   {
      cout << leftbox2[i];
   }
}

void ereaseEnemyright2(int x, int y)
{
   gotoxy(x, y);
   for (int i = 0; i < 9; i++)
   {
      char tem = leftBox1[i];
      tem = ' ';
      cout << tem;
   }

   gotoxy(x, y + 1);
   for (int i = 0; i < 8; i++)
   {
      char tem = enmeyTwoRightArr[i];
      tem = ' ';
      cout << tem;
   }

   gotoxy(x, y + 2);
   for (int i = 0; i < 9; i++)
   {
      char tem = leftbox2[i];
      tem = ' ';
      cout << tem;
   }
}

void printEnemyUp2(int x, int y)
{
   gotoxy(x, y);
   for (int i = 0; i < 5; i++)
   {
      cout << upEnem0Arr[i];
   }

   gotoxy(x, y + 1);
   for (int i = 0; i < 5; i++)
   {
      cout << upEnem1Arr[i];
   }

   gotoxy(x, y + 2);
   for (int i = 0; i < 5; i++)
   {
      cout << upEnem2Arr[i];
   }
   gotoxy(x, y + 3);
   for (int i = 0; i < 5; i++)
   {
      cout << upEnem3Arr[i];
   }
   gotoxy(x, y + 4);
   for (int i = 0; i < 5; i++)
   {
      cout << upEnem4Arr[i];
   }
   gotoxy(x, y + 5);
   for (int i = 0; i < 5; i++)
   {
      cout << upEnem5Arr[i];
   }
}

void ereaseEnemyTwoUp(int x, int y)
{
   gotoxy(x, y);
   for (int i = 0; i < 5; i++)
   {
      char tem = upEnem0Arr[i];
      tem = ' ';
      cout << tem;
   }

   gotoxy(x, y + 1);
   for (int i = 0; i < 5; i++)
   {
      char tem = upEnem1Arr[i];
      tem = ' ';
      cout << tem;
   }

   gotoxy(x, y + 2);
   for (int i = 0; i < 5; i++)
   {
      char tem = upEnem2Arr[i];
      tem = ' ';
      cout << tem;

      //   cout << upEnem2Arr[i];
   }
   gotoxy(x, y + 3);
   for (int i = 0; i < 5; i++)
   {
      char tem = upEnem3Arr[i];
      tem = ' ';
      cout << tem;
   }
   gotoxy(x, y + 4);
   for (int i = 0; i < 5; i++)
   {
      char tem = upEnem4Arr[i];
      tem = ' ';
      cout << tem;
   }
   gotoxy(x, y + 5);
   for (int i = 0; i < 5; i++)
   {
      char tem = upEnem5Arr[i];
      tem = ' ';
      cout << tem;
   }
}

void printEnemyDown2(int x, int y)
{
   gotoxy(x, y);
   for (int i = 0; i < 5; i++)
   {
      cout << downEnem5Arr[i];
   }

   gotoxy(x, y + 1);
   for (int i = 0; i < 5; i++)
   {
      cout << downEnem4Arr[i];
   }

   gotoxy(x, y + 2);
   for (int i = 0; i < 5; i++)
   {
      cout << downEnem3Arr[i];
   }
   gotoxy(x, y + 3);
   for (int i = 0; i < 5; i++)
   {
      cout << downEnem2Arr[i];
   }

   gotoxy(x, y + 4);
   for (int i = 0; i < 5; i++)
   {
      cout << downEnem1Arr[i];
   }

   gotoxy(x, y + 5);
   for (int i = 0; i < 5; i++)
   {
      cout << downEnem0Arr[i];
   }
}

void ereaseEnemyTwoDown(int x, int y)
{
   gotoxy(x, y);
   for (int i = 0; i < 5; i++)
   {
      char tem = downEnem5Arr[i];
      tem = ' ';
      cout << tem;
   }

   gotoxy(x, y + 1);
   for (int i = 0; i < 5; i++)
   {
      char tem = downEnem4Arr[i];
      tem = ' ';
      cout << tem;
   }

   gotoxy(x, y + 2);
   for (int i = 0; i < 5; i++)
   {
      char tem = downEnem3Arr[i];
      tem = ' ';
      cout << tem;
   }
   gotoxy(x, y + 3);
   for (int i = 0; i < 5; i++)
   {
      char tem = downEnem2Arr[i];
      tem = ' ';
      cout << tem;
   }

   gotoxy(x, y + 4);
   for (int i = 0; i < 5; i++)
   {
      char tem = downEnem1Arr[i];
      tem = ' ';
      cout << tem;
   }

   gotoxy(x, y + 5);
   for (int i = 0; i < 5; i++)
   {
      char tem = downEnem0Arr[i];
      tem = ' ';
      cout << tem;
   }
}

void moveEnemyTwo()
{
   if (enemy2Direction == "up")
   {
      char nextlocation = getCharAtxy(Enemy2RightX, Enemy2RightY - 4);
      if (nextlocation == ' ')
      {
         ereaseEnemyleft2(Enemy2RightX, Enemy2RightY);
         ereaseEnemyTwoUp(Enemy2RightX, Enemy2RightY);
         ereaseEnemyright2(Enemy2RightX, Enemy2RightY);
         ereaseEnemyTwoDown(Enemy2RightX, Enemy2RightY);
         Enemy2RightY--;
         printEnemyUp2(Enemy2RightX, Enemy2RightY);
         generateBulletForUpenemy2();
      }
      if (nextlocation == '*')
      {
         enemy2Direction = "down";
      }
   }

   if (enemy2Direction == "down") // toward negative x-axis my mistake
   {
      char nextlocation = getCharAtxy(Enemy2RightX - 3, Enemy2RightY);
      if (nextlocation == ' ')
      {

         ereaseEnemyTwoUp(Enemy2RightX, Enemy2RightY);
         ereaseEnemyleft2(Enemy2RightX, Enemy2RightY);
         ereaseEnemyright2(Enemy2RightX, Enemy2RightY);
         ereaseEnemyTwoDown(Enemy2RightX, Enemy2RightY);
         generateBulletForLeftenemy2();
         Enemy2RightX--;

         // return;

         printEnemyleft2(Enemy2RightX, Enemy2RightY);
      }
      if (nextlocation == '*')
      {
         enemy2Direction = "left";
      }
   }
   if (enemy2Direction == "left") // right
   {
      char nextlocation = getCharAtxy(Enemy2RightX + 10, Enemy2RightY);
      if (nextlocation == ' ')
      {
         ereaseEnemyleft2(Enemy2RightX, Enemy2RightY);
         ereaseEnemyTwoUp(Enemy2RightX, Enemy2RightY);
         ereaseEnemyright2(Enemy2RightX, Enemy2RightY);
         ereaseEnemyTwoDown(Enemy2RightX, Enemy2RightY);
         Enemy2RightX++;
         printEnemyright2(Enemy2RightX, Enemy2RightY);
         generateBulletForRightenemy2();
         // moveBulletForRightEnemy2();
      }
      if (nextlocation == '*')
      {
         enemy2Direction = "right";
      }
   }
   if (enemy2Direction == "right") // down
   {
      char nextlocation = getCharAtxy(Enemy2RightX, Enemy2RightY + 7);
      if (nextlocation == ' ')
      {
         ereaseEnemyleft2(Enemy2RightX, Enemy2RightY);
         ereaseEnemyTwoUp(Enemy2RightX, Enemy2RightY);
         ereaseEnemyright2(Enemy2RightX, Enemy2RightY);
         ereaseEnemyTwoDown(Enemy2RightX, Enemy2RightY);
         Enemy2RightY++;
         printEnemyDown2(Enemy2RightX, Enemy2RightY);
         generateBulletForDownenemy2();
      }
      if (nextlocation == '*')
      {
         enemy2Direction = "up";
      }
   }
}

void generateBulletForLeftenemy2()
{
   enemyTwoBullettArrX[totalBulletGenerateByEnemy2] = Enemy2RightX - 1;
   enemyTwoBulletArrY[totalBulletGenerateByEnemy2] = Enemy2RightY + 1;
   gotoxy(Enemy2RightX - 1, Enemy2RightY + 1);
   cout << ".";
   totalBulletGenerateByEnemy2++;
}
void moveBulletForLeftEnemy2()
{
   for (int i = 0; i < totalBulletGenerateByEnemy2; i++)
   {
      char nextlocation = getCharAtxy(enemyTwoBullettArrX[i] - 2, enemyTwoBulletArrY[i]);
      if (nextlocation == '*')
      {
         ereaseBulletForLeftEnemy2(enemyTwoBullettArrX[i], enemyTwoBulletArrY[i]);
         removeIndexBulletForLeftEnemy2(i);
      }
      else
      {
         ereaseBulletForLeftEnemy2(enemyTwoBullettArrX[i], enemyTwoBulletArrY[i]);
         enemyTwoBullettArrX[i] = enemyTwoBullettArrX[i] - 1;
         printBulletForLeftEnemy2(enemyTwoBullettArrX[i], enemyTwoBulletArrY[i]);
      }
   }
}
void removeIndexBulletForLeftEnemy2(int index)
{
   for (int i = index; i < totalBulletGenerateByEnemy2 - 1; i++)
   {
      enemyTwoBullettArrX[i] = enemyTwoBullettArrX[i + 1];
      enemyTwoBulletArrY[i] = enemyTwoBulletArrY[i + 1];
   }
   totalBulletGenerateByEnemy2--;
}
void ereaseBulletForLeftEnemy2(int x, int y)
{
   gotoxy(x, y);
   cout << " ";
}
void printBulletForLeftEnemy2(int x, int y)
{
   gotoxy(x, y);
   cout << ".";
}

void generateBulletForRightenemy2()
{
   enemyTwoRightBullettArrX[totalBulletGenerateByrightEnemy2] = Enemy2RightX + 8;
   enemyTwoRightBulletArrY[totalBulletGenerateByrightEnemy2] = Enemy2RightY + 1;
   gotoxy(Enemy2RightX + 8, Enemy2RightY + 1);
   cout << ".";
   totalBulletGenerateByrightEnemy2++;
}
void moveBulletForRightEnemy2() // left
{
   for (int i = 0; i < totalBulletGenerateByrightEnemy2; i++)
   {
      char nextlocation = getCharAtxy(enemyTwoRightBullettArrX[i] + 2, enemyTwoRightBulletArrY[i]);
      if (nextlocation == '*')
      {
         ereaseBulletForLeftEnemy2(enemyTwoRightBullettArrX[i], enemyTwoRightBulletArrY[i]);
         removeIndexBulletForRightEnemy2(i);
      }
      else
      {
         ereaseBulletForLeftEnemy2(enemyTwoRightBullettArrX[i], enemyTwoRightBulletArrY[i]);
         enemyTwoRightBullettArrX[i] = enemyTwoRightBullettArrX[i] + 1;
         printBulletForLeftEnemy2(enemyTwoRightBullettArrX[i], enemyTwoRightBulletArrY[i]);
      }
   }
}
void removeIndexBulletForRightEnemy2(int index)
{
   for (int i = index; i < totalBulletGenerateByrightEnemy2 - 1; i++)
   {
      enemyTwoRightBullettArrX[i] = enemyTwoRightBullettArrX[i + 1];
      enemyTwoRightBulletArrY[i] = enemyTwoRightBulletArrY[i + 1];
   }
   totalBulletGenerateByrightEnemy2--;
}

void generateBulletForUpenemy2()
{
   enemyTwoUpBullettArrX[totalBulletGenerateByUpEnemy2] = Enemy2RightX + 1;
   enemyTwoUpBulletArrY[totalBulletGenerateByUpEnemy2] = Enemy2RightY;
   gotoxy(Enemy2RightX + 1, Enemy2RightY);
   cout << ".";
   totalBulletGenerateByUpEnemy2++;
}
void moveBulletForUpEnemy2()
{
   for (int i = 0; i < totalBulletGenerateByUpEnemy2; i++)
   {
      char nextlocation = getCharAtxy(enemyTwoUpBullettArrX[i], enemyTwoUpBulletArrY[i] - 4);
      if (nextlocation == '*')
      {
         ereaseBulletForLeftEnemy2(enemyTwoUpBullettArrX[i], enemyTwoUpBulletArrY[i]);
         removeIndexBulletForUpEnemy2(i);
      }
      else
      {
         ereaseBulletForLeftEnemy2(enemyTwoUpBullettArrX[i], enemyTwoUpBulletArrY[i]);
         enemyTwoUpBulletArrY[i] = enemyTwoUpBulletArrY[i] - 1;
         printBulletForLeftEnemy2(enemyTwoUpBullettArrX[i], enemyTwoUpBulletArrY[i]);
      }
   }
}

void removeIndexBulletForUpEnemy2(int index)
{
   for (int i = index; i < totalBulletGenerateByUpEnemy2 - 1; i++)
   {
      enemyTwoUpBullettArrX[i] = enemyTwoUpBullettArrX[i + 1];
      enemyTwoUpBulletArrY[i] = enemyTwoUpBulletArrY[i + 1];
   }
   totalBulletGenerateByUpEnemy2--;
}

void generateBulletForDownenemy2()
{
   enemyTwoDownBullettArrX[totalBulletGenerateByUpEnemy2] = Enemy2RightX + 1;
   enemyTwoDownBulletArrY[totalBulletGenerateByUpEnemy2] = Enemy2RightY + 5;
   gotoxy(Enemy2RightX + 1, Enemy2RightY + 5);
   cout << ".";
   totalBulletGenerateByDownEnemy2++;
}
void removeIndexBulletForDownEnemy2(int index)
{
   for (int i = index; i < totalBulletGenerateByDownEnemy2 - 1; i++)
   {
      enemyTwoDownBullettArrX[i] = enemyTwoDownBullettArrX[i + 1];
      enemyTwoDownBulletArrY[i] = enemyTwoDownBulletArrY[i + 1];
   }
   totalBulletGenerateByDownEnemy2--;
}
void moveBulletForDownEnemy2()
{
   for (int i = 0; i < totalBulletGenerateByDownEnemy2; i++)
   {
      char nextlocation = getCharAtxy(enemyTwoDownBullettArrX[i], enemyTwoDownBulletArrY[i] + 2);
      if (nextlocation == '*')
      {
         ereaseBulletForLeftEnemy2(enemyTwoDownBullettArrX[i], enemyTwoDownBulletArrY[i]);
         removeIndexBulletForDownEnemy2(i);
      }
      else
      {
         ereaseBulletForLeftEnemy2(enemyTwoDownBullettArrX[i], enemyTwoDownBulletArrY[i]);
         enemyTwoDownBulletArrY[i] = enemyTwoDownBulletArrY[i] + 1;
         printBulletForLeftEnemy2(enemyTwoDownBullettArrX[i], enemyTwoDownBulletArrY[i]);
      }
   }
}

void EnemyTwoBulletCollisons()
{

   for (int i = 0; i < totalNumberOfLeftBullet; i++)
   {

      if ((monochokiLeftArrX[i] == Enemy2RightX + 9 || monochokiLeftArrX[i] == Enemy2RightX + 8) && (monochokiLeftArrY[i] == Enemy2RightY || monochokiLeftArrY[i] == Enemy2RightY + 1 || monochokiLeftArrY[i] == Enemy2RightY + 2 || monochokiLeftArrY[i] == Enemy2RightY + 3 || monochokiLeftArrY[i] == Enemy2RightY + 4))
      {
         ereaseMonochokiBullet(monochokiLeftArrX[i], monochokiLeftArrY[i]);
         monochokiScore();
         removeBulletFormLeftIndex(i);
         // removeBulletFromArray(i);
      }
   }

   for (int i = 0; i < totalNumberDownBullet; i++)
   {

      if ((monochokiDownArrY[i] == Enemy2RightY || monochokiDownArrY[i] == Enemy2RightY - 1) && (monochokiDownArrX[i] == Enemy2RightX || monochokiDownArrX[i] + 1 == Enemy2RightX || monochokiDownArrX[i] - 1 == Enemy2RightX || monochokiDownArrX[i] - 2 == Enemy2RightX || monochokiDownArrX[i] - 3 == Enemy2RightX || monochokiDownArrX[i] - 4 == Enemy2RightX || monochokiDownArrX[i] - 5 == Enemy2RightX || monochokiDownArrX[i] - 6 == Enemy2RightX || monochokiDownArrX[i] - 7 == Enemy2RightX || monochokiDownArrX[i] - 9 == Enemy2RightX))
      {
         monochokiScore();
         ereaseMonochokiBullet(monochokiDownArrX[i], monochokiDownArrY[i]);

         removeBulletFormDownIndex(i);
      }
      for (int i = 0; i < totalNumberOfBullet; i++)
      {

         if (monochokiBulletX[i] + 1 == Enemy2RightX && (monochokiBulletY[i] == enemyOneY || monochokiBulletY[i] == enemyOneY + 1 || monochokiBulletY[i] == enemyOneY + 2 || monochokiBulletY[i] == enemyOneY + 3 || monochokiBulletY[i] == enemyOneY + 4))
         {
            ereaseMonochokiBullet(monochokiBulletX[i], monochokiBulletY[i]);
            monochokiScore();
            removeBulletFromArray(i);
         }
      }
   }

   for (int i = 0; i < totalNumberUpBullet; i++)
   {

      if ((monochokiUpArrY[i] == Enemy2RightY || monochokiUpArrY[i] == Enemy2RightY + 1 || monochokiUpArrY[i] == Enemy2RightY + 2) && (monochokiUpArrX[i] == Enemy2RightX || monochokiUpArrX[i] + 1 == Enemy2RightX || monochokiUpArrX[i] - 1 == Enemy2RightX || monochokiUpArrX[i] - 2 == Enemy2RightX || monochokiUpArrX[i] - 3 == Enemy2RightX || monochokiUpArrX[i] - 4 == Enemy2RightX || monochokiUpArrX[i] - 5 == Enemy2RightX || monochokiUpArrX[i] - 6 == Enemy2RightX || monochokiUpArrX[i] - 7 == Enemy2RightX || monochokiUpArrX[i] - 9 == Enemy2RightX))
      {
         monochokiScore();
         ereaseMonochokiBullet(monochokiUpArrX[i], monochokiUpArrY[i]);

         removeBulletFromUpArray(i);
      }
   }

   // second enemy 
   //second enemy
}
void monochokitestBullletlocation()
{
   for (int i = 0; i < totalNumberOfBullet; i++)
   {
   gotoxy(90, 12);
   cout << enemyTwoRightBullettArrX[i] << enemyTwoRightBulletArrY[i];
   ;
   }
}
// enemy-two

// monochoki health and score
void MonochokiHealthDecrease()
{
   gotoxy(100, 5);
   cout << "Monochoki Health " << totalBulletCollideWithMonochki;
}
void collideBullettoMonochoki()
{
   totalBulletCollideWithMonochki++;
}

void enemiesBulletCollisionToMonochoki()
{

   for (int i = 0; i < totalBulletByEnemyOne; i++)
   {

      if ((enemyOneLocationX[i] == monoChokiX + 12 || enemyOneLocationX[i] == monoChokiX + 13 || enemyOneLocationX[i] == monoChokiX + 11) && enemyOneLocationY[i] == monoChokiY)
      {
         collideBullettoMonochoki();
         ereaseEnemyOneBullet(enemyOneLocationX[i], enemyOneLocationY[i]);

         removeIndexOfEnemyOne(i);
      }
   }
   for (int i = 0; i < totalBulletByEnemyOne; i++)
   {

      if (enemyOneLocationX[i] + 2 == monoChokiX && enemyOneLocationY[i] == monoChokiY)
      {
         collideBullettoMonochoki();
         ereaseEnemyOneBullet(enemyOneLocationX[i], enemyOneLocationY[i]);

         removeIndexOfEnemyOne(i);
      }
   }

   for (int i = 0; i < totalBulletByEnemyOne; i++)
   {

      if (enemyOneLocationX[i] == monoChokiX && (enemyOneLocationY[i] == monoChokiY || enemyOneLocationY[i] + 1 == monoChokiY || enemyOneLocationY[i] + 2 == monoChokiY || enemyOneLocationY[i] + 3 == monoChokiY || enemyOneLocationY[i] == monoChokiY + 4 || enemyOneLocationY[i] - 1 == monoChokiY || enemyOneLocationY[i] - 3 == monoChokiY || enemyOneLocationY[i] - 4 == monoChokiY))
      {
         collideBullettoMonochoki();
         ereaseEnemyOneBullet(enemyOneLocationX[i], enemyOneLocationY[i]);

         removeIndexOfEnemyOne(i);
      }
   }

   // first enemy
   // second enemy
     for (int i = 0; i < totalBulletGenerateByrightEnemy2; i++)
   {

      if (enemyTwoRightBullettArrX[i]+1 == monoChokiX && (enemyTwoRightBulletArrY[i] == monoChokiY ||enemyTwoRightBulletArrY[i] == monoChokiY+1||enemyTwoRightBulletArrY[i] == monoChokiY+2||enemyTwoRightBulletArrY[i] == monoChokiY+3 || enemyTwoRightBulletArrY[i] == monoChokiY-1||enemyTwoRightBulletArrY[i] == monoChokiY-2 ))
      {
         collideBullettoMonochoki();
         ereaseBulletForLeftEnemy2(enemyTwoRightBullettArrX[i], enemyTwoRightBulletArrY[i]);

         removeIndexBulletForRightEnemy2(i);
      }
   }
      for (int i = 0; i < totalBulletGenerateByrightEnemy2; i++)
   {

      if (enemyTwoRightBullettArrX[i]+1 == monoChokiX && (enemyTwoRightBulletArrY[i] == monoChokiY ||enemyTwoRightBulletArrY[i] == monoChokiY+1||enemyTwoRightBulletArrY[i] == monoChokiY+2||enemyTwoRightBulletArrY[i] == monoChokiY+3 || enemyTwoRightBulletArrY[i] == monoChokiY-1||enemyTwoRightBulletArrY[i] == monoChokiY-2 ))
      {
         collideBullettoMonochoki();
         ereaseBulletForLeftEnemy2(enemyTwoRightBullettArrX[i], enemyTwoRightBulletArrY[i]);

         removeIndexBulletForRightEnemy2(i);
      }
   }
   
   for (int i = 0; i < totalBulletGenerateByEnemy2; i++)
   {

      if (enemyTwoBullettArrX[i]+1 == monoChokiX && (enemyTwoBulletArrY[i] == monoChokiY ||enemyTwoBulletArrY[i] == monoChokiY+1||enemyTwoBulletArrY[i] == monoChokiY+2||enemyTwoBulletArrY[i] == monoChokiY+3 || enemyTwoBulletArrY[i] == monoChokiY-1||enemyTwoBulletArrY[i] == monoChokiY-2 ))
      {
         collideBullettoMonochoki();
         ereaseBulletForLeftEnemy2(enemyTwoBullettArrX[i], enemyTwoBulletArrY[i]);

         removeIndexBulletForRightEnemy2(i);
      }
   }
   //rest of the login implement i version two
   // second enemy
}

void enemyOneBulletLoction()
{
   for (int i = 0; i < totalBulletGenerateByEnemy2; i++)
   {
      gotoxy(100, 10 + i);
      // cout << monochokiLeftArrX[i] << " " << monochokiLeftArrY[i];
   }
}
// monochoki health and score


//third Enemy

//Third Enemy