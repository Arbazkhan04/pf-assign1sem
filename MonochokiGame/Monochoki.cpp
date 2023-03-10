#include <iostream>
#include <string>
#include <conio.h>
#include <windows.h>
using namespace std;
// timer-start
void timer();
int hour = 0, minute = 0, second = 0;
// timer-end
void startingOfGame();
void monochokiStatue();
void yellowmonochokiStatue();
void redMonochokiStatue();

int totalCallKFor1Enemy = 1; // flag
int totalCallKFor2Enemy = 1;
int totalCallKFor3Enemy = 1;

int enemy1statueX = 38;
int enemy1statueY = 1;
string enemy1Name = "Denver";
int enemy2statueX = 55;
int enemy2statueY = 1;
string enemy2Name = "Tokoyo";
int enemy3statueX = 68;
int enemy3statueY = 1;
string enemy3Name = "Berlin";
int enemy4statueX = 80;
int enemy4statueY = 1;
string enemy4Name = "Cylde";

void enemyOneStatue(int, int, string);
void enemyOneYellowStatue(int, int, string);
void enemyOneRedStatue(int, int, string);

void gameStatusBar();
void printMonochoki(int, int);
void printMonochokiLeft(int, int);
void generateBulletForLeft();
void moveLeftBullet();
void printScore();
void monochokiScore();
int score = 0;

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
bool isMonochokiDirectionUpOrDown = false;
int totalBulletCollideWithMonochki = 0;
int totalNumberOfBullet = 0;
int monochokiBulletX[1000];
int monochokiBulletY[1000];

int totalNumberOfLeftBullet = 0;
int monochokiLeftArrX[1000];
int monochokiLeftArrY[1000];
void removeBulletFormLeftIndex(int);

int totalNumberUpBullet = 0;
int monochokiUpArrX[1000];
int monochokiUpArrY[1000];

int totalNumberDownBullet = 0;
int monochokiDownArrX[1000];
int monochokiDownArrY[1000];

int monoChokiX = 4;
int monoChokiY = 10;

char hel2[2][9] = {{' ', ' ', ' ', '_', '_', '_', ' ', ' ', ' '},
                   {'}', '-', '|', '_', '_', '_', '|', '-', '>'}}; // moving toward right

char leftHel1[2][9] = {{'{', '-', '|', '_', '_', '_', '|', '-', '<'},
                       {' ', ' ', ' ', '_', '_', '_', ' ', ' ', ' '}}; // moving toward left

char upHel6[6][5] = {{' ', ' ', '^', ' ', ' '}, {' ', ' ', '|', ' ', ' '}, {' ', '_', '_', '_', ' '}, {'|', ' ', ' ', ' ', '|'}, {'|', ' ', ' ', ' ', '|'}, {' ', '-', '-', '-', ' '}};

char downHel6[6][5] = {{' ', '_', '_', '_', ' '}, {'|', ' ', ' ', ' ', '|'}, {'|', ' ', ' ', ' ', '|'}, {' ', '-', '-', '-', ' '}, {' ', ' ', '|', ' ', ' '}, {' ', ' ', 'v', ' ', ' '}};

// enemy-1
char box = 219;
char enemy1[3][9] = {{' ', ' ', ' ', ' ', ' ', ' ', ' ', box, box}, {'<', '-', box, box, box, box, box, ' ', ' '}, {' ', ' ', ' ', ' ', ' ', ' ', ' ', box, box}};

int enemyOneX = 80;
int enemyOneY = 10;
int enemyOnelife = 15;
void printEnemy1();
void ereaseEnemy1();
void moveEnemyOneBullet();
void printEnemyOneBullet(int, int);
void ereaseEnemyOneBullet(int, int);
string enemyOneDirection = "up";
void moveEnemyOne();
int enemyOnetimer = 0;
int enemyOneLocationX[1000];
int enemyOneLocationY[1000];
int totalBulletByEnemyOne = 0;
void generateBullet();
void removeIndexOfEnemyOne(int);
void enemyCollisionWithBullet();

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
int enemyTwoLife = 15;
void moveEnemyTwo();
char leftBox1[3][9] = {{box, box, ' ', ' ', ' ', ' ', ' ', ' ', ' '}, {' ', ' ', box, box, box, box, box, '-', '>'}, {box, box, ' ', ' ', ' ', ' ', ' ', ' ', ' '}};

char upEnem0Arr[6][5] = {{' ', ' ', '^', ' ', ' '}, {' ', ' ', '|', ' ', ' '}, {' ', box, box, box, ' '}, {' ', box, box, box, ' '}, {' ', box, box, box, ' '}, {box, box, ' ', box, box}};

char downEnem5Arr[6][5] = {{box, box, ' ', box, box}, {' ', box, box, box, ' '}, {' ', box, box, box, ' '}, {' ', box, box, box, ' '}, {' ', ' ', '|', ' ', ' '}, {' ', ' ', 'v', ' ', ' '}};

// void printEnemyRight

string enemy2Direction = " ";
int Enemy2RightX = 40;
int Enemy2RightY = 12;
int enemyTwoBullettArrX[1000]; // left
int enemyTwoBulletArrY[1000];  // left
int totalBulletGenerateByEnemy2 = 0;
void generateBulletForLeftenemy2();
void moveBulletForLeftEnemy2();

int enemyTwoRightBullettArrX[1000];
int enemyTwoRightBulletArrY[1000];
int totalBulletGenerateByrightEnemy2 = 0;
void generateBulletForRightenemy2();
void moveBulletForRightEnemy2();
void removeIndexBulletForLeftEnemy2(int index);
void removeIndexBulletForRightEnemy2(int index);

int enemyTwoUpBullettArrX[1000];
int enemyTwoUpBulletArrY[1000];
int totalBulletGenerateByUpEnemy2 = 0;
void generateBulletForUpenemy2();
void moveBulletForUpEnemy2();
void removeIndexBulletForUpEnemy2(int index);

int enemyTwoDownBullettArrX[1000];
int enemyTwoDownBulletArrY[1000];
int totalBulletGenerateByDownEnemy2 = 0;
void generateBulletForDownenemy2();
void moveBulletForDownEnemy2();
void removeIndexBulletForDownEnemy2(int index);
// void removeIndexBulletForUpEnemy2(int index);

void ereaseBulletForLeftEnemy2(int x, int y); // same
void printBulletForLeftEnemy2(int x, int y);  // same
void EnemyTwoBulletCollisons();
// enemytwo

// enemy three

void printEnemyleft3(int, int);
void ereaseEnemyleft3(int, int);
void ereaseEnemyright3(int, int);
void printEnemyright3(int, int);
void printEnemyUp3(int, int);
void ereaseEnemyThreeUp(int, int);
void printEnemyDown3(int, int);
void ereaseEnemyThreeDown(int, int);

int enemyThreeLife = 15;
int totalLife = 20;
int enemy3X = 10;
int enemy3y = 10;
string enemy3Direction = "down";
void moveEnemyThree();
int enemyThreeBullettArrX[1000];
int enemyThreeBulletArrY[1000];
int totalBulletGenerateByLeftEnemy3 = 0;
void generateBulletForLeftenemy3();
void moveBulletForLeftEnemy3();
void removeIndexBulletForLeftEnemy3(int index);

int enemyThreeRightBullettArrX[1000]; // right
int enemyThreeRightBulletArrY[1000];
int totalBulletGenerateByrightEnemy3 = 0;
void generateBulletForRightenemy3();
void moveBulletForRightEnemy3();
void removeIndexBulletForRightEnemy3(int index);

int enemyThreeDownBullettArrX[1000];
int enemyThreeDownBulletArrY[1000];
int totalBulletGenerateByDownEnemy3 = 0;
void generateBulletForDownenemy3();
void moveBulletForDownEnemy3();
void removeIndexBulletForDownEnemy3(int index);

int enemyThreeUpBullettArrX[1000];
int enemyThreeUpBulletArrY[1000];
int totalBulletGenerateByUpEnemy3 = 0;
void generateBulletForUpenemy3();
void moveBulletForUpEnemy3();
void removeIndexBulletForUpEnemy3(int index);
// enemy three

// Cylde
void printEnemyleft4(int, int);
void ereaseEnemyleft4(int, int);
void ereaseEnemyright4(int, int);
void printEnemyright4(int, int);
void printEnemyUp4(int, int);
void ereaseEnemyFourUp(int, int);
void printEnemyDown4(int, int);
void ereaseEnemyFourDown(int, int);
int enemy4Life = 0;
int enemy4X = 90;
int enemy4Y = 1;

string enemy4Direction = "left";
void moveEnemyFour();
// void lastCyldeEnemy();

// int enemyFourBullettArrX[1000];
// int enemyFourBulletArrY[1000];
// int totalBulletGenerateByLeftEnemy4 = 0;
// void generateBulletForLeftenemy4();
// void moveBulletForLeftEnemy4();
// void removeIndexBulletForLeftEnemy4(int index);

int enemyFourRightBullettArrX[1000]; // right
int enemyFourRightBulletArrY[1000];
int totalBulletGenerateByrightEnemy4 = 0;
void generateBulletForRightenemy4();
void moveBulletForRightEnemy4();
void removeIndexBulletForRightEnemy4(int index);

// int enemyFourDownBullettArrX[1000];
// int enemyFourDownBulletArrY[1000];
// int totalBulletGenerateByDownEnemy4 = 0;
// void generateBulletForDownenemy4();
// void moveBulletForDownEnemy4();
// void removeIndexBulletForDownEnemy4(int index);

// int enemyFourUpBullettArrX[1000];
// int enemyFourUpBulletArrY[1000];
// int totalBulletGenerateByUpEnemy4 = 0;
// void generateBulletForUpenemy4();
// void moveBulletForUpEnemy4();
// void removeIndexBulletForUpEnemy4(int index);

// Cylde

int main()
{
   startingOfGame();
   system("cls");
   bool isGameRunning = true;
   gameStatusBar();
   bounderiesOfGame();
   if (totalBulletCollideWithMonochki < 29)
   {
      monochokiStatue();
   }

   printMonochoki(monoChokiX, monoChokiY);
   printEnemyleft3(enemy3X, enemy3y);
   printEnemyleft2(Enemy2RightX, Enemy2RightY);
   if (enemyOnelife < 7)
   {
      enemyOneStatue(enemy1statueX, enemy1statueY, enemy1Name);
   }
   if (enemyTwoLife < 7)
   {
      enemyOneStatue(enemy2statueX, enemy2statueY, enemy2Name); // enemy two statue
   }
   if (enemyThreeLife < 7)
   {
      enemyOneStatue(enemy3statueX, enemy3statueY, enemy3Name);
   }
   bool bringEnemy4IntoTheMaze = true;
   while (isGameRunning)
   {
      printScore();

      if (enemyOnelife >= 20 && enemyTwoLife >= 20 && enemyThreeLife >= 20)
      {
         // enemy4Life++;
         if (enemy4Life < 7)
         {
            enemyOneStatue(enemy4statueX, enemy4statueY, enemy4Name);
         }
      }

      printEnemy1();

      if (GetAsyncKeyState(VK_RIGHT))
      {
         char nextloction = getCharAtxy(monoChokiX + 9, monoChokiY);
         if (nextloction != '*')
         {
            isMonochokiDirectionUpOrDown = false;
            ereaseMonoChoki(monoChokiX, monoChokiY);
            eraseLeftMonoChoki(monoChokiX, monoChokiY);
            eraseUpMonochoki(monoChokiX, monoChokiY);
            eraseDownMonochoki(monoChokiX, monoChokiY);
            monoChokiX++;
            // enemy2Direction = "up";
            enemy2Direction = "down";

            printMonochoki(monoChokiX, monoChokiY);
         }
         if (nextloction == 'k')
         {
            totalBulletCollideWithMonochki = totalBulletCollideWithMonochki - 20;
            gotoxy(40, 20);
            cout << " ";
         }
      }
      if (GetAsyncKeyState(VK_LEFT))
      {
         char nextloction = getCharAtxy(monoChokiX - 1, monoChokiY);
         if (nextloction == ' ' || nextloction == '.')
         {
            isMonochokiDirectionUpOrDown = false;
            eraseLeftMonoChoki(monoChokiX, monoChokiY);
            ereaseMonoChoki(monoChokiX, monoChokiY);
            eraseUpMonochoki(monoChokiX, monoChokiY);
            eraseDownMonochoki(monoChokiX, monoChokiY);
            monoChokiX--;
            // printMonochoki(monoChokiX, monoChokiY);
            printMonochokiLeft(monoChokiX, monoChokiY);
            enemy2Direction = "left";
         }
         if (nextloction == 'k')
         {
            totalBulletCollideWithMonochki = totalBulletCollideWithMonochki - 20;
            gotoxy(40, 20);
            cout << " ";
         }
      }
      if (GetAsyncKeyState(VK_DOWN))
      {
         char nextloction = getCharAtxy(monoChokiX, monoChokiY + 6);
         if (nextloction != '*')
         {
            isMonochokiDirectionUpOrDown = true;
            ereaseMonoChoki(monoChokiX, monoChokiY);
            eraseLeftMonoChoki(monoChokiX, monoChokiY);
            eraseUpMonochoki(monoChokiX, monoChokiY);
            eraseDownMonochoki(monoChokiX, monoChokiY);
            monoChokiY++;
            printDownMonochoki(monoChokiX, monoChokiY);
            enemy2Direction = "right";
         }
         if (nextloction == 'k')
         {
            totalBulletCollideWithMonochki = totalBulletCollideWithMonochki - 20;
            gotoxy(40, 20);
            cout << " ";
         }
      }
      if (GetAsyncKeyState(VK_UP))
      {
         char nextloction = getCharAtxy(monoChokiX, monoChokiY - 2);
         if (nextloction != '*')
         {
            isMonochokiDirectionUpOrDown = true;
            ereaseMonoChoki(monoChokiX, monoChokiY);
            eraseLeftMonoChoki(monoChokiX, monoChokiY);
            eraseUpMonochoki(monoChokiX, monoChokiY);
            eraseDownMonochoki(monoChokiX, monoChokiY);
            monoChokiY--;
            //  printMonochoki(monoChokiX, monoChokiY);
            printMonochokiUp(monoChokiX, monoChokiY);
         }
         if (nextloction == 'k')
         {
            totalBulletCollideWithMonochki = totalBulletCollideWithMonochki - 20;
            gotoxy(40, 20);
            cout << " ";
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
      if (GetAsyncKeyState(VK_ESCAPE) )
      {
         // || totalBulletCollideWithMonochki >= 21 || enemy4Life >= 20 || minute >= 5
         isGameRunning = false;
      }
      if (enemyOnetimer == 2)
      {
         // lastCyldeEnemy();
         timer();

         if (enemyOnelife >= 20 && enemyTwoLife >= 20 && enemyThreeLife >= 20)
         {
            if (bringEnemy4IntoTheMaze)
            {
               enemy4X = 40;
               enemy4Y = 12;
               bringEnemy4IntoTheMaze = false;
            }
            moveEnemyFour();
            generateBulletForRightenemy4();
         }

         if (enemyOnelife < 20)
         {
            moveEnemyOne();
            generateBullet();
            moveEnemyOneBullet();
         }
         if (enemyOnelife == 20)
         {
            enemyOneX = 90;
            enemyOneY = 3;
            if (totalCallKFor1Enemy == 1)
            {
               gotoxy(40, 20);
               cout << "k";
               totalCallKFor1Enemy++;
            }
         }
         MonochokiHealthDecrease();
         if (enemyTwoLife < 20)
         {
            moveEnemyTwo();
         }
         if (enemyTwoLife == 20)
         {
            Enemy2RightX = 95;
            Enemy2RightY = 3;

            if (totalCallKFor2Enemy == 1)
            {
               gotoxy(40, 20);
               cout << "k";
               totalCallKFor2Enemy++;
            }
         }
         if (enemyThreeLife < totalLife)
         {
            moveEnemyThree();
         }
         if (enemyThreeLife == totalLife)
         {
            enemy3X = 93;
            enemy3y = 3;
            if (totalCallKFor3Enemy == 1)
            {
               gotoxy(40, 20);
               cout << "k";
               totalCallKFor3Enemy++;
            }
         }

         enemyOnetimer = 0;
      }

      moveBulletForDown();
      moveMonochokiBullet();
      enemyCollisionWithBullet(); // monnochoki bullet's
      moveLeftBullet();
      moveBulletForUp();

      moveBulletForRightEnemy2();
      moveBulletForLeftEnemy2();
      moveBulletForUpEnemy2();
      moveBulletForDownEnemy2();
      enemiesBulletCollisionToMonochoki();
      EnemyTwoBulletCollisons();
      enemyOnetimer++;
      moveBulletForLeftEnemy3();
      moveBulletForRightEnemy3();
      moveBulletForDownEnemy3();

      moveBulletForUpEnemy3();

      // moveBulletForLeftEnemy4();
      moveBulletForRightEnemy4();
      // moveBulletForDownEnemy4();
      // moveBulletForUpEnemy4();

      if (totalBulletCollideWithMonochki > 10 && totalBulletCollideWithMonochki < 20)
      {
         yellowmonochokiStatue();
      }
      else if (totalBulletCollideWithMonochki > 20 && totalBulletCollideWithMonochki < 25)
      {
         redMonochokiStatue();
      }
      else if (totalBulletCollideWithMonochki > 100)
      {
         totalBulletCollideWithMonochki = 0;
         monochokiStatue();
      }
      if (enemyOnelife > 7 && enemyOnelife < 14)
      {
         enemyOneYellowStatue(enemy1statueX, enemy1statueY, enemy1Name);
      }
      if (enemyOnelife > 14 && enemyOnelife < 20)
      {
         enemyOneRedStatue(enemy1statueX, enemy1statueY, enemy1Name);
      }
      if (enemyTwoLife > 7 && enemyTwoLife < 14)
      {
         enemyOneYellowStatue(enemy2statueX, enemy2statueY, enemy2Name);
      }
      if (enemyTwoLife > 14 && enemyTwoLife < 20)
      {
         enemyOneRedStatue(enemy2statueX, enemy2statueY, enemy2Name);
      }

      if (enemyThreeLife > 7 && enemyThreeLife < 14)
      {
         enemyOneYellowStatue(enemy3statueX, enemy3statueY, enemy3Name);
      }
      if (enemyThreeLife > 14 && enemyThreeLife < 20)
      {
         enemyOneRedStatue(enemy3statueX, enemy3statueY, enemy3Name);
      }

      if (enemy4Life > 7 && enemy4Life < 14)
      {
         enemyOneYellowStatue(enemy4statueX, enemy4statueY, enemy4Name);
      }
      if (enemy4Life > 14 && enemy4Life < 20)
      {
         enemyOneRedStatue(enemy4statueX, enemy4statueY, enemy4Name);
      }

      Sleep(1);
   }
}

void bounderiesOfGame()
{
   for (int i = 0; i <= 120; i++)
   {
      cout << "*";
   }
   cout << endl;
   for (int i = 0; i < 20; i++)
   {
      cout << "*";
      for (int j = 0; j < 119; j++)
      {
         cout << " ";
      }
      cout << "*" << endl;
   }
   for (int i = 0; i <= 120; i++)
   {
      cout << "*";
   }
}
void gameStatusBar()
{
   for (int i = 0; i <= 120; i++)
   {
      cout << "*";
   }
   cout << endl;
   for (int i = 0; i < 5; i++)
   {
      cout << "*";
      for (int j = 0; j < 119; j++)
      {
         cout << " ";
      }
      cout << "*" << endl;
   }
   for (int i = 0; i <= 120; i++)
   {
      cout << "*";
   }
}

void monochokiStatue()
{
   gotoxy(23, 1);
   cout << "MonoChoki Player";
   gotoxy(24, 2);
   cout << "    _      ";
   gotoxy(24, 3);
   cout << " __( )__  ";
   gotoxy(24, 4);

   cout << " --. .-- ";
   gotoxy(24, 5);

   cout << "(_|   |_) ";
}
void yellowmonochokiStatue()
{
   gotoxy(23, 1);
   cout << "MonoChoki Player";
   gotoxy(24, 2);
   cout << "\033[33m"
        << "    _      "
        << "\033[0m";
   gotoxy(24, 3);
   cout << "\033[33m"
        << " __( )__  "
        << "\033[0m";
   gotoxy(24, 4);

   cout << "\033[33m"
        << " --. .-- "
        << "\033[0m";
   gotoxy(24, 5);

   cout << "\033[33m"
        << "(_|   |_) "
        << "\033[0m";
}

void redMonochokiStatue()
{
   gotoxy(24, 2);
   cout << "\033[31m"
        << "    _      "
        << "\033[0m";
   gotoxy(24, 3);
   cout << "\033[31m"
        << " __( )__  "
        << "\033[0m";
   gotoxy(24, 4);

   cout << "\033[31m"
        << " --. .-- "
        << "\033[0m";
   gotoxy(24, 5);

   cout << "\033[31m"
        << "(_|   |_) "
        << "\033[0m";
}

void enemyOneYellowStatue(int x, int y, string name)
{
   gotoxy(x + 3, y);
   cout << name;
   gotoxy(x, y + 1);
   cout << "\033[33m"
        << "    (@@)    "
        << "\033[0m";
   gotoxy(x, y + 2);
   cout << "\033[33m"
        << "   g_) (_e  "
        << "\033[0m";
   gotoxy(x, y + 3);
   cout << "\033[33m"
        << "   (=--=)   "
        << "\033[0m";
   gotoxy(x, y + 4);
   cout << "\033[33m"
        << "   _|  |_     "
        << "\033[0m";
}

void enemyOneStatue(int x, int y, string name)
{
   gotoxy(x + 3, y);
   cout << name;
   gotoxy(x, y + 1);
   cout << "    (@@)    ";
   gotoxy(x, y + 2);
   cout << "   g_) (_e  ";
   gotoxy(x, y + 3);
   cout << "   (=--=)   ";
   gotoxy(x, y + 4);
   cout << "   _|  |_     ";
}

void enemyOneRedStatue(int x, int y, string name)
{
   gotoxy(x + 3, y);
   cout << name;
   gotoxy(x, y + 1);
   cout << "\033[31m"
        << "    (@@)    "
        << "\033[0m";
   gotoxy(x, y + 2);
   cout << "\033[31m"
        << "   g_) (_e  "
        << "\033[0m";
   gotoxy(x, y + 3);
   cout << "\033[31m"
        << "   (=--=)   "
        << "\033[0m";
   gotoxy(x, y + 4);
   cout << "\033[31m"
        << "   _|  |_     "
        << "\033[0m";
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
   for (int i = 0; i < 2; i++)
   {
      for (int j = 0; j < 9; j++)
      {
         cout << hel2[i][j];
      }
      gotoxy(x, y + 1);
   }
}
void ereaseMonoChoki(int x, int y)
{
   gotoxy(x, y);
   for (int j = 0; j < 2; j++)
   {
      for (int i = 0; i < 9; i++)
      {
         char empty = hel2[j][i];
         empty = ' ';
         cout << empty;
      }
      gotoxy(x, y + 1);
   }
}

void printMonochokiLeft(int x, int y)
{
   gotoxy(x, y);
   for (int j = 0; j < 2; j++)
   {
      for (int i = 8; i >= 0; i--)
      {
         cout << leftHel1[j][i];
      }
      gotoxy(x, y - 1);
   }
}

void eraseLeftMonoChoki(int x, int y)
{
   gotoxy(x, y);
   for (int row = 0; row < 2; row++)
   {
      for (int i = 8; i >= 0; i--)
      {
         char empty = leftHel1[row][i];
         empty = ' ';
         cout << empty;
      }
      gotoxy(x, y - 1);
   }
}

void eraseUpMonochoki(int x, int y)
{
   gotoxy(x, y);
   for (int row = 0; row < 6; row++)
   {
      for (int i = 0; i < 5; i++)
      {
         char empy = upHel6[row][i];
         empy = ' ';
         cout << empy;
      }
      gotoxy(x, y + (row + 1));
   }

   // for (int i = 0; i < 5; i++)
   // {
   //    char empy = upHel5[i];
   //    empy = ' ';
   //    cout << empy;
   // }
   // gotoxy(x, y + 2);

   // for (int i = 0; i < 5; i++)
   // {
   //    char empy = upHel1[i];
   //    empy = ' ';
   //    cout << empy;
   // }
   // gotoxy(x, y + 3);

   // for (int i = 0; i < 5; i++)
   // {
   //    char empy = upHel2[i];
   //    empy = ' ';
   //    cout << empy;
   // }
   // gotoxy(x, y + 4);
   // for (int i = 0; i < 5; i++)
   // {
   //    char empy = upHel3[i];
   //    empy = ' ';
   //    cout << empy;
   // }
   // gotoxy(x, y + 5);
   // for (int i = 0; i < 5; i++)
   // {
   //    char empy = upHel4[i];
   //    empy = ' ';
   //    cout << empy;
   // }
}

void printMonochokiUp(int x, int y)
{
   gotoxy(x, y);
   for (int row = 0; row < 6; row++)
   {
      for (int i = 0; i < 5; i++)
      {

         cout << upHel6[row][i];
      }
      gotoxy(x, y + (row + 1));
   }

   // for (int i = 0; i < 5; i++)
   // {
   //    cout << upHel5[i];
   // }
   // gotoxy(x, y + 2);

   // for (int i = 0; i < 5; i++)
   // {
   //    cout << upHel1[i];
   // }
   // gotoxy(x, y + 3);

   // for (int i = 0; i < 5; i++)
   // {
   //    cout << upHel2[i];
   // }
   // gotoxy(x, y + 4);
   // for (int i = 0; i < 5; i++)
   // {
   //    cout << upHel3[i];
   // }
   // gotoxy(x, y + 5);
   // for (int i = 0; i < 5; i++)
   // {
   //    cout << upHel4[i];
   // }
}

void printDownMonochoki(int x, int y)
{
   gotoxy(x, y);
   for (int row = 0; row < 6; row++)
   {
      for (int i = 0; i < 5; i++)
      {

         cout << downHel6[row][i];
      }
      gotoxy(x, y + (row + 1));
   }
}

void eraseDownMonochoki(int x, int y)
{
   gotoxy(x, y);
   for (int row = 0; row < 6; row++)
   {
      for (int i = 0; i < 5; i++)
      {

         char empy = downHel6[row][i];
         empy = ' ';
         cout << empy;
      }
      gotoxy(x, y + (row + 1));
   }

   // for (int i = 0; i < 5; i++)
   // {
   //    char empy = downHel3[i];
   //    empy = ' ';
   //    cout << empy;
   // }
   // gotoxy(x, y + 2);

   // for (int i = 0; i < 5; i++)
   // {
   //    char empy = downHel2[i];
   //    empy = ' ';
   //    cout << empy;
   // }
   // gotoxy(x, y + 3);

   // for (int i = 0; i < 5; i++)
   // {
   //    char empy = downHel1[i];
   //    empy = ' ';
   //    cout << empy;
   // }
   // gotoxy(x, y + 4);
   // for (int i = 0; i < 5; i++)
   // {
   //    char empy = downHel5[i];
   //    empy = ' ';
   //    cout << empy;
   // }
   // gotoxy(x, y + 5);
   // for (int i = 0; i < 5; i++)
   // {
   //    char empy = downHel6[i];
   //    empy = ' ';
   //    cout << empy;
   // }
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

      if (previousLocation == '.')
      {
         ereaseMonochokiBullet(monochokiLeftArrX[i], monochokiLeftArrY[i]);
         monochokiLeftArrX[i] = monochokiLeftArrX[i] - 1;
         printMonochokiBullet(monochokiLeftArrX[i], monochokiLeftArrY[i]);
      }
      else if (previousLocation != ' ')
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
   gotoxy(2, 1);
   cout << "Score is " << score;
}
void monochokiScore()
{
   score++;
}
// enenmy-1
void printEnemy1()
{
   if (enemyOnelife < 20)
   {
      gotoxy(enemyOneX, enemyOneY);
      for (int row = 0; row < 3; row++)
      {
         for (int i = 0; i < 9; i++)
         {
            cout << enemy1[row][i];
         }
         gotoxy(enemyOneX, enemyOneY + (row + 1));
      }
   }
   if (enemyOnelife >= 20)
   {
      ereaseEnemy1();
   }
}
void ereaseEnemy1()
{
   gotoxy(enemyOneX, enemyOneY);
   for (int row = 0; row < 3; row++)
   {
      for (int i = 0; i < 9; i++)
      {
         char emp;
         emp = enemy1[row][i];
         emp = ' ';
         cout << emp;
      }
      gotoxy(enemyOneX, enemyOneY + (row + 1));
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
{ // short this code

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

         printEnemyOneBullet(enemyOneLocationX[i], enemyOneLocationY[i]);
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
         enemyOnelife++;
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
         enemyOnelife++;
         removeBulletFromArray(i);
      }
   }

   for (int i = 0; i < totalNumberUpBullet; i++)
   {

      if ((monochokiUpArrY[i] == enemyOneY || monochokiUpArrY[i] == enemyOneY + 1 || monochokiUpArrY[i] == enemyOneY + 2) && (monochokiUpArrX[i] == enemyOneX || monochokiUpArrX[i] + 1 == enemyOneX || monochokiUpArrX[i] - 1 == enemyOneX || monochokiUpArrX[i] - 2 == enemyOneX || monochokiUpArrX[i] - 3 == enemyOneX || monochokiUpArrX[i] - 4 == enemyOneX || monochokiUpArrX[i] - 5 == enemyOneX || monochokiUpArrX[i] - 6 == enemyOneX || monochokiUpArrX[i] - 7 == enemyOneX || monochokiUpArrX[i] - 9 == enemyOneX))
      {
         monochokiScore();
         ereaseMonochokiBullet(monochokiUpArrX[i], monochokiUpArrY[i]);
         enemyOnelife++;

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
         enemyOnelife++;
         // removeBulletFromArray(i);
      }
   }

   // enemytwo
   for (int i = 0; i < totalNumberOfLeftBullet; i++)
   {
      if (monochokiLeftArrX[i] - 1 == Enemy2RightX + 9 && (monochokiLeftArrY[i] == Enemy2RightY || monochokiLeftArrY[i] == Enemy2RightY + 1 || monochokiLeftArrY[i] == Enemy2RightY + 2 || monochokiLeftArrY[i] == Enemy2RightY + 3))
      {
         ereaseMonochokiBullet(monochokiLeftArrX[i], monochokiLeftArrY[i]);
         monochokiScore();
         enemyTwoLife++;
         removeBulletFormLeftIndex(i);
      }
   }

   for (int i = 0; i < totalNumberOfBullet; i++)
   {
      if (monochokiBulletX[i] + 1 == Enemy2RightX && (monochokiBulletY[i] == Enemy2RightY || monochokiBulletY[i] == Enemy2RightY + 1 || monochokiBulletY[i] == Enemy2RightY + 2 || monochokiBulletY[i] == Enemy2RightY + 4 || monochokiBulletY[i] == Enemy2RightY + 5))
      {
         ereaseMonochokiBullet(monochokiBulletX[i], monochokiBulletY[i]);
         monochokiScore();
         enemyTwoLife++;
         removeBulletFromArray(i);
      }
   }

   for (int i = 0; i < totalNumberDownBullet; i++)
   {
      if (monochokiDownArrY[i] + 1 == Enemy2RightY && (monochokiDownArrX[i] == Enemy2RightX || monochokiDownArrX[i] == Enemy2RightX + 1 || monochokiDownArrX[i] == Enemy2RightX + 2 || monochokiDownArrX[i] == Enemy2RightX + 3))
      {
         ereaseMonochokiBullet(monochokiDownArrX[i], monochokiDownArrY[i]);
         monochokiScore();
         enemyTwoLife++;
         removeBulletFormDownIndex(i);
      }
   }

   for (int i = 0; i < totalNumberUpBullet; i++)
   {
      if (monochokiUpArrY[i] - 1 == Enemy2RightY && (monochokiUpArrX[i] == Enemy2RightX || monochokiUpArrX[i] == Enemy2RightX + 1 || monochokiUpArrX[i] == Enemy2RightX + 2 || monochokiUpArrX[i] == Enemy2RightX + 3 || monochokiUpArrX[i] == Enemy2RightX + 4))
      {
         ereaseMonochokiBullet(monochokiDownArrX[i], monochokiDownArrY[i]);
         monochokiScore();
         enemyTwoLife++;
         removeBulletFromUpArray(i);
      }
   }
   // enemyTwo

   // enemy three
   for (int i = 0; i < totalNumberOfLeftBullet; i++)
   {
      if (monochokiLeftArrX[i] - 1 == enemy3X + 9 && (monochokiLeftArrY[i] == enemy3y || monochokiLeftArrY[i] == enemy3y + 1 || monochokiLeftArrY[i] == enemy3y + 2 || monochokiLeftArrY[i] == enemy3y + 3))
      {
         ereaseMonochokiBullet(monochokiLeftArrX[i], monochokiLeftArrY[i]);
         monochokiScore();
         enemyThreeLife++;
         removeBulletFormLeftIndex(i);
      }
   }

   for (int i = 0; i < totalNumberOfBullet; i++)
   {
      if (monochokiBulletX[i] + 1 == enemy3X && (monochokiBulletY[i] == enemy3y || monochokiBulletY[i] == enemy3y + 1 || monochokiBulletY[i] == enemy3y + 2 || monochokiBulletY[i] == enemy3y + 4 || monochokiBulletY[i] == enemy3y + 5))
      {
         ereaseMonochokiBullet(monochokiBulletX[i], monochokiBulletY[i]);
         monochokiScore();
         enemyThreeLife++;
         removeBulletFromArray(i);
      }
   }

   for (int i = 0; i < totalNumberDownBullet; i++)
   {
      if (monochokiDownArrY[i] + 1 == enemy3y && (monochokiDownArrX[i] == enemy3X || monochokiDownArrX[i] == enemy3X + 1 || monochokiDownArrX[i] == enemy3X + 2 || monochokiDownArrX[i] == enemy3X + 3))
      {
         ereaseMonochokiBullet(monochokiDownArrX[i], monochokiDownArrY[i]);
         monochokiScore();
         enemyThreeLife++;
         removeBulletFormDownIndex(i);
      }
   }

   for (int i = 0; i < totalNumberUpBullet; i++)
   {
      if (monochokiUpArrY[i] - 1 == enemy3y && (monochokiUpArrX[i] == enemy3X || monochokiUpArrX[i] == enemy3X + 1 || monochokiUpArrX[i] == enemy3X + 2 || monochokiUpArrX[i] == enemy3X + 3 || monochokiUpArrX[i] == enemy3X + 4))
      {
         ereaseMonochokiBullet(monochokiDownArrX[i], monochokiDownArrY[i]);
         monochokiScore();
         enemyThreeLife++;
         removeBulletFromUpArray(i);
      }
   }
   // enemy end

   // enemy 4 start
   for (int i = 0; i < totalNumberOfLeftBullet; i++)
   {
      if (monochokiLeftArrX[i] - 1 == enemy4X + 9 && (monochokiLeftArrY[i] == enemy4Y || monochokiLeftArrY[i] == enemy4Y + 1 || monochokiLeftArrY[i] == enemy4Y + 2))
      {
         ereaseMonochokiBullet(monochokiLeftArrX[i], monochokiLeftArrY[i]);
         monochokiScore();
         // enemyTwoLife++;
         enemy4Life++;
         removeBulletFormLeftIndex(i);
      }
   }

   // enemy 4 end
}

// enenmy-1

// enemy-two
void printEnemyleft2(int x, int y)
{
   if (enemyTwoLife < 20)
   {
      gotoxy(x, y);
      for (int row = 0; row < 3; row++)
      {
         for (int i = 0; i < 9; i++)
         {
            cout << enemy1[row][i];
         }
         gotoxy(x, y + (row + 1));
      }
   }
   if (enemyTwoLife >= 20)
   {
      ereaseEnemyleft2(x, y);
   }
}
void ereaseEnemyleft2(int x, int y)
{
   gotoxy(x, y);

   for (int row = 0; row < 3; row++)
   {
      for (int i = 0; i < 9; i++)
      {
         char emp;
         emp = enemy1[row][i];
         emp = ' ';
         cout << emp;
      }
      gotoxy(x, y + (row + 1));
   }
}
void printEnemyright2(int x, int y)
{
   if (enemyTwoLife < 20)
   {
      gotoxy(x, y);
      for (int row = 0; row < 3; row++)
      {
         for (int i = 0; i < 9; i++)
         {
            cout << leftBox1[row][i];
         }
         gotoxy(x, y + (row + 1));
      }
   }
   if (enemyTwoLife >= 20)
   {
      ereaseEnemyright2(x, y);
   }
}

void ereaseEnemyright2(int x, int y)
{
   gotoxy(x, y);
   for (int row = 0; row < 3; row++)
   {
      for (int i = 0; i < 9; i++)
      {
         char tem = leftBox1[row][i];
         tem = ' ';
         cout << tem;
      }
      gotoxy(x, y + (row + 1));
   }
}

void printEnemyUp2(int x, int y)
{
   gotoxy(x, y);
   if (enemyTwoLife < 20)
   {
      for (int row = 0; row < 6; row++)
      {
         for (int i = 0; i < 5; i++)
         {
            cout << upEnem0Arr[row][i];
         }

         gotoxy(x, y + (row + 1));
      }
   }
   if (enemyTwoLife >= 20)
   {
      ereaseEnemyTwoUp(x, y);
   }
}

void ereaseEnemyTwoUp(int x, int y)
{
   gotoxy(x, y);
   for (int row = 0; row < 6; row++)
   {
      for (int i = 0; i < 5; i++)
      {
         char tem = upEnem0Arr[row][i];
         tem = ' ';
         cout << tem;
      }
      gotoxy(x, y + (row + 1));
   }
}

void printEnemyDown2(int x, int y)
{
   if (enemyTwoLife < 20)
   {
      gotoxy(x, y);
      for (int row = 0; row < 6; row++)
      {
         for (int i = 0; i < 5; i++)
         {
            cout << downEnem5Arr[row][i];
         }

         gotoxy(x, y + (row + 1));
      }
   }
   if (enemyTwoLife >= 20)
   {
      ereaseEnemyTwoDown(x, y);
   }
}

void ereaseEnemyTwoDown(int x, int y)
{
   gotoxy(x, y);
   for (int row = 0; row < 6; row++)
   {
      for (int i = 0; i < 5; i++)
      {
         char tem = downEnem5Arr[row][i];
         tem = ' ';
         cout << tem;
      }

      gotoxy(x, y + (row + 1));
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

   if (enemy2Direction == "down") // toward negative x-axis
   {
      char nextlocation = getCharAtxy(Enemy2RightX - 7, Enemy2RightY);
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
         enemy2Direction = "up";
      }
   }
   if (enemy2Direction == "left") // right
   {
      char nextlocation = getCharAtxy(Enemy2RightX + 13, Enemy2RightY);
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
         enemy2Direction = "up";
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
   enemyTwoBullettArrX[totalBulletGenerateByEnemy2] = Enemy2RightX - 2;
   enemyTwoBulletArrY[totalBulletGenerateByEnemy2] = Enemy2RightY + 1;
   gotoxy(Enemy2RightX - 2, Enemy2RightY + 1);
   cout << ".";
   totalBulletGenerateByEnemy2++;
}
void moveBulletForLeftEnemy2()
{
   for (int i = 0; i < totalBulletGenerateByEnemy2; i++)
   {
      char nextlocation = getCharAtxy(enemyTwoBullettArrX[i] - 2, enemyTwoBulletArrY[i]);
      ereaseBulletForLeftEnemy2(enemyTwoBullettArrX[i], enemyTwoBulletArrY[i]);
      if (nextlocation == '*')
      {

         removeIndexBulletForLeftEnemy2(i);
      }
      else if (nextlocation == ' ')
      {
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
   enemyTwoRightBullettArrX[totalBulletGenerateByrightEnemy2] = Enemy2RightX + 9;
   enemyTwoRightBulletArrY[totalBulletGenerateByrightEnemy2] = Enemy2RightY + 1;
   gotoxy(Enemy2RightX + 9, Enemy2RightY + 1);
   cout << ".";
   totalBulletGenerateByrightEnemy2++;
}
void moveBulletForRightEnemy2() // left
{
   for (int i = 0; i < totalBulletGenerateByrightEnemy2; i++)
   {
      char nextlocation = getCharAtxy(enemyTwoRightBullettArrX[i] + 2,
                                      enemyTwoRightBulletArrY[i]);
      ereaseBulletForLeftEnemy2(enemyTwoRightBullettArrX[i], enemyTwoRightBulletArrY[i]);
      if (nextlocation == '*')
      {
         
         removeIndexBulletForRightEnemy2(i);
      }
      else if (nextlocation == ' ')
      {

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
      else if (nextlocation == ' ')
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
      else if (nextlocation == ' ')
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
   // second enemy
}

// enemy-two

// monochoki health and score
void MonochokiHealthDecrease()
{
   gotoxy(2, 3);
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

      if (enemyOneLocationX[i] == monoChokiX + 4 && (enemyOneLocationY[i] == monoChokiY + 1 || enemyOneLocationY[i] == monoChokiY + 2))
      {
         collideBullettoMonochoki();
         ereaseEnemyOneBullet(enemyOneLocationX[i], enemyOneLocationY[i]);

         removeIndexOfEnemyOne(i);
      }
      char nextlocation = getCharAtxy(enemyOneLocationX[i] - 1, enemyOneLocationY[i]);
      {
         if (nextlocation == '{')
         {
            collideBullettoMonochoki();
            ereaseEnemyOneBullet(enemyOneLocationX[i], enemyOneLocationY[i]);

            removeIndexOfEnemyOne(i);
         }
      }
   }
   for (int i = 0; i < totalBulletByEnemyOne; i++)
   {

      if (enemyOneLocationX[i] == monoChokiX + 10 && (enemyOneLocationY[i] == monoChokiY ||
                                                      enemyOneLocationY[i] == monoChokiY + 1 || enemyOneLocationY[i] == monoChokiY + 2 || enemyOneLocationY[i] == monoChokiY + 3))
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

      if (enemyTwoRightBullettArrX[i] + 2 == monoChokiX && ((enemyTwoRightBulletArrY[i] == monoChokiY || enemyTwoRightBulletArrY[i] == monoChokiY + 1 || enemyTwoRightBulletArrY[i] == monoChokiY + 2)))
      {
         collideBullettoMonochoki();
         ereaseBulletForLeftEnemy2(enemyTwoRightBullettArrX[i], enemyTwoRightBulletArrY[i]);

         removeIndexBulletForRightEnemy2(i);
      }
      char nextlocation = getCharAtxy(enemyTwoRightBullettArrX[i] + 2, enemyTwoRightBulletArrY[i]);
      if (nextlocation == '}')
      {
         collideBullettoMonochoki();
         ereaseBulletForLeftEnemy2(enemyTwoRightBullettArrX[i], enemyTwoRightBulletArrY[i]);

         removeIndexBulletForRightEnemy2(i);
      }
   }
   for (int i = 0; i < totalBulletGenerateByEnemy2; i++)
   {
      if (enemyTwoBullettArrX[i] == monoChokiX + 10 && (enemyTwoBulletArrY[i] == monoChokiY || enemyTwoBulletArrY[i] == monoChokiY + 1))
      {
         collideBullettoMonochoki();
         ereaseBulletForLeftEnemy2(enemyTwoBullettArrX[i], enemyTwoBulletArrY[i]);

         removeIndexBulletForLeftEnemy2(i);
      }
   }

   for (int i = 0; i < totalBulletGenerateByDownEnemy2; i++)
   {
      if ((enemyTwoDownBulletArrY[i] + 1 == monoChokiY || enemyTwoDownBulletArrY[i] + 2 == monoChokiY + 6 || enemyTwoDownBulletArrY[i] == monoChokiY + 2) && (enemyTwoDownBullettArrX[i] == monoChokiX || enemyTwoDownBullettArrX[i] == monoChokiX + 1 || enemyTwoDownBullettArrX[i] == monoChokiX + 2 || enemyTwoDownBullettArrX[i] == monoChokiX + 3 || enemyTwoDownBullettArrX[i] == monoChokiX + 4 || enemyTwoDownBullettArrX[i] == monoChokiX + 5))
      {
         collideBullettoMonochoki();
         ereaseBulletForLeftEnemy2(enemyTwoDownBullettArrX[i], enemyTwoDownBulletArrY[i]);

         removeIndexBulletForDownEnemy2(i);
      }
   }

   for (int i = 0; i < totalBulletGenerateByUpEnemy2; i++)
   {
      if ((enemyTwoUpBulletArrY[i] - 1 == monoChokiY || enemyTwoUpBulletArrY[i] - 2 == monoChokiY + 6 || enemyTwoUpBulletArrY[i] == monoChokiY + 2) && (enemyTwoUpBullettArrX[i] == monoChokiX || enemyTwoUpBullettArrX[i] == monoChokiX + 1 || enemyTwoUpBullettArrX[i] == monoChokiX + 2 || enemyTwoUpBullettArrX[i] == monoChokiX + 3 || enemyTwoUpBullettArrX[i] == monoChokiX + 4 || enemyTwoUpBullettArrX[i] == monoChokiX + 5))
      {
         collideBullettoMonochoki();
         ereaseBulletForLeftEnemy2(enemyTwoUpBullettArrX[i], enemyTwoUpBulletArrY[i]);

         removeIndexBulletForUpEnemy2(i);
      }
   }

   // second enemy

   // third enemy

   for (int i = 0; i < totalBulletGenerateByrightEnemy3; i++)
   {
      if (isMonochokiDirectionUpOrDown == true)
      {
         if (enemyThreeRightBullettArrX[i] + 2 == monoChokiX && (enemyThreeRightBulletArrY[i] == monoChokiY || enemyThreeRightBulletArrY[i] == monoChokiY + 1 || enemyThreeRightBulletArrY[i] == monoChokiY + 2 || enemyThreeRightBulletArrY[i] == monoChokiY + 3 || enemyThreeRightBulletArrY[i] == monoChokiY + 4 || enemyThreeRightBulletArrY[i] == monoChokiY + 5))
         {
            collideBullettoMonochoki();
            ereaseBulletForLeftEnemy2(enemyThreeRightBullettArrX[i], enemyThreeRightBulletArrY[i]);

            removeIndexBulletForRightEnemy3(i);
         }
      }
      if (enemyThreeRightBullettArrX[i] + 2 == monoChokiX && (enemyThreeRightBulletArrY[i] == monoChokiY || enemyThreeRightBulletArrY[i] == monoChokiY + 1 || enemyThreeRightBulletArrY[i] == monoChokiY + 1))
      {
         collideBullettoMonochoki();
         ereaseBulletForLeftEnemy2(enemyThreeRightBullettArrX[i], enemyThreeRightBulletArrY[i]);

         removeIndexBulletForRightEnemy3(i);
      }
      char nextlocation = getCharAtxy(enemyThreeRightBullettArrX[i] + 2, enemyThreeRightBulletArrY[i]);
      if (nextlocation == '}')
      {
         collideBullettoMonochoki();
         ereaseBulletForLeftEnemy2(enemyThreeRightBullettArrX[i], enemyThreeRightBulletArrY[i]);

         removeIndexBulletForRightEnemy3(i);
      }
   }

   for (int i = 0; i < totalBulletGenerateByLeftEnemy3; i++)
   {
      if (isMonochokiDirectionUpOrDown == true)
      {
         if ((enemyThreeBullettArrX[i] == monoChokiX + 3 || enemyThreeBullettArrX[i] == monoChokiX + 5) && (enemyThreeBulletArrY[i] == monoChokiY || enemyThreeBulletArrY[i] == monoChokiY + 1 || enemyThreeBulletArrY[i] == monoChokiY + 2 || enemyThreeBulletArrY[i] == monoChokiY + 3 || enemyThreeBulletArrY[i] == monoChokiY + 4 || enemyThreeBulletArrY[i] == monoChokiY + 5))
         {
            collideBullettoMonochoki();
            ereaseBulletForLeftEnemy2(enemyThreeBullettArrX[i], enemyThreeBulletArrY[i]);

            removeIndexBulletForLeftEnemy3(i);
         }
      }
      if (enemyThreeBullettArrX[i] == monoChokiX + 10 && (enemyThreeBulletArrY[i] == monoChokiY || enemyThreeBulletArrY[i] == monoChokiY + 1))
      {
         collideBullettoMonochoki();
         ereaseBulletForLeftEnemy2(enemyThreeBullettArrX[i], enemyThreeBulletArrY[i]);

         removeIndexBulletForLeftEnemy3(i);
      }
   }

   for (int i = 0; i < totalBulletGenerateByDownEnemy3; i++)
   {
      if ((enemyThreeDownBulletArrY[i] + 1 == monoChokiY || enemyThreeDownBulletArrY[i] + 1 == monoChokiY + 6 || enemyThreeDownBulletArrY[i] == monoChokiY + 2) && (enemyThreeDownBullettArrX[i] == monoChokiX || enemyThreeDownBullettArrX[i] == monoChokiX + 1 || enemyThreeDownBullettArrX[i] == monoChokiX + 2 || enemyThreeDownBullettArrX[i] == monoChokiX + 3 || enemyThreeDownBullettArrX[i] == monoChokiX + 4 || enemyThreeDownBullettArrX[i] == monoChokiX + 5))
      {
         collideBullettoMonochoki();
         ereaseBulletForLeftEnemy2(enemyThreeDownBullettArrX[i], enemyThreeDownBulletArrY[i]);

         removeIndexBulletForDownEnemy3(i);
      }
   }

   for (int i = 0; i < totalBulletGenerateByUpEnemy3; i++)
   {
      if ((enemyThreeUpBulletArrY[i] - 1 == monoChokiY || enemyThreeUpBulletArrY[i] - 2 == monoChokiY + 6 || enemyThreeUpBulletArrY[i] == monoChokiY + 2) && (enemyThreeUpBullettArrX[i] == monoChokiX || enemyThreeUpBullettArrX[i] == monoChokiX + 1 || enemyThreeUpBullettArrX[i] == monoChokiX + 2 || enemyThreeUpBullettArrX[i] == monoChokiX + 3 || enemyThreeUpBullettArrX[i] == monoChokiX + 4 || enemyThreeUpBullettArrX[i] == monoChokiX + 5))
      {
         collideBullettoMonochoki();
         ereaseBulletForLeftEnemy2(enemyThreeUpBullettArrX[i], enemyThreeUpBulletArrY[i]);

         removeIndexBulletForUpEnemy3(i);
      }
   }

   // third enemy

   // forth enemy start
   for (int i = 0; i < totalBulletGenerateByrightEnemy4; i++)
   {
      if (isMonochokiDirectionUpOrDown == true)
      {
         if (enemyFourRightBullettArrX[i] + 2 == monoChokiX && (enemyFourRightBulletArrY[i] == monoChokiY || enemyFourRightBulletArrY[i] == monoChokiY + 1 || enemyFourRightBulletArrY[i] == monoChokiY + 2 || enemyFourRightBulletArrY[i] == monoChokiY + 3 || enemyFourRightBulletArrY[i] == monoChokiY + 4 || enemyFourRightBulletArrY[i] == monoChokiY + 5))
         {
            collideBullettoMonochoki();
            ereaseBulletForLeftEnemy2(enemyFourRightBullettArrX[i], enemyFourRightBulletArrY[i]);

            removeIndexBulletForRightEnemy4(i);
         }
      }
      if (enemyFourRightBullettArrX[i] + 2 == monoChokiX && (enemyFourRightBulletArrY[i] == monoChokiY || enemyFourRightBulletArrY[i] == monoChokiY + 1 || enemyFourRightBulletArrY[i] == monoChokiY + 2))
      {
         collideBullettoMonochoki();
         ereaseBulletForLeftEnemy2(enemyFourRightBullettArrX[i], enemyFourRightBulletArrY[i]);

         removeIndexBulletForRightEnemy4(i);
      }
      char nextlocation = getCharAtxy(enemyFourRightBullettArrX[i] + 2, enemyFourRightBulletArrY[i]);
      if (nextlocation == '}')
      {
         collideBullettoMonochoki();
         ereaseBulletForLeftEnemy2(enemyFourRightBullettArrX[i], enemyFourRightBulletArrY[i]);

         removeIndexBulletForRightEnemy4(i);
      }
   }
   // forth enemy end
}

// monochoki health and score

// third Enemy

void printEnemyleft3(int x, int y)
{
   if (enemyThreeLife < totalLife)
   {
      gotoxy(x, y);
      for (int row = 0; row < 3; row++)
      {
         for (int i = 0; i < 9; i++)
         {
            cout << enemy1[row][i];
         }
         gotoxy(x, y + (row + 1));
      }
   }
   if (enemyThreeLife >= totalLife)
   {
      ereaseEnemyleft3(x, y);
   }
}
void ereaseEnemyleft3(int x, int y)
{
   gotoxy(x, y);

   for (int row = 0; row < 3; row++)
   {
      for (int i = 0; i < 9; i++)
      {
         char emp;
         emp = enemy1[row][i];
         emp = ' ';
         cout << emp;
      }
      gotoxy(enemyOneX, enemyOneY + (row + 1));
   }
}

void printEnemyright3(int x, int y)
{
   if (enemyThreeLife < totalLife)
   {
      gotoxy(x, y);
      for (int row = 0; row < 3; row++)
      {
         for (int i = 0; i < 9; i++)
         {
            cout << leftBox1[row][i];
         }
         gotoxy(x, y + (row + 1));
      }
   }
   if (enemyThreeLife >= totalLife)
   {
      ereaseEnemyright3(x, y);
   }
}

void ereaseEnemyright3(int x, int y)
{
   gotoxy(x, y);

   for (int row = 0; row < 3; row++)
   {
      for (int i = 0; i < 9; i++)
      {
         char tem = leftBox1[row][i];
         tem = ' ';
         cout << tem;
      }
      gotoxy(x, y + (row + 1));
   }
}

void printEnemyUp3(int x, int y)
{
   if (enemyThreeLife < totalLife)
   {
      gotoxy(x, y);
        for (int row = 0; row < 6; row++)
      {
         for (int i = 0; i < 5; i++)
         {
            cout << upEnem0Arr[row][i];
         }

         gotoxy(x, y + (row + 1));
      }
   }
   if (enemyThreeLife >= totalLife)
   {
      ereaseEnemyThreeUp(x, y);
   }
}

void ereaseEnemyThreeUp(int x, int y)
{
   gotoxy(x, y);
      for (int row = 0; row < 6; row++)
   {
      for (int i = 0; i < 5; i++)
      {
         char tem = upEnem0Arr[row][i];
         tem = ' ';
         cout << tem;
      }
      gotoxy(x, y + (row + 1));
   }
}

void printEnemyDown3(int x, int y)
{
   if (enemyThreeLife < totalLife)
   {
      gotoxy(x, y);
        for (int row = 0; row < 6; row++)
      {
         for (int i = 0; i < 5; i++)
         {
            cout << downEnem5Arr[row][i];
         }

         gotoxy(x, y + (row + 1));
      }
   }
   if (enemyThreeLife >= totalLife)
   {
      ereaseEnemyThreeDown(x, y);
   }
}

void ereaseEnemyThreeDown(int x, int y)
{
   gotoxy(x, y);
    for (int row = 0; row < 6; row++)
   {
      for (int i = 0; i < 5; i++)
      {
         char tem = downEnem5Arr[row][i];
         tem = ' ';
         cout << tem;
      }

      gotoxy(x, y + (row + 1));
   }
}

void moveEnemyThree()
{
   if (enemy3Direction == "up")
   {
      char nextlocation = getCharAtxy(enemy3X, enemy3y - 4);
      if (nextlocation == ' ')
      {
         ereaseEnemyleft3(enemy3X, enemy3y);
         ereaseEnemyThreeUp(enemy3X, enemy3y);
         ereaseEnemyright3(enemy3X, enemy3y);
         ereaseEnemyThreeDown(enemy3X, enemy3y);
         enemy3y--;

         printEnemyUp3(enemy3X, enemy3y);
         generateBulletForUpenemy3();
      }
      if (nextlocation == '*')
      {
         enemy3Direction = "right";
      }
   }

   if (enemy3Direction == "left") // toward negative x-axis
   {
      char nextlocation = getCharAtxy(enemy3X - 5, enemy3y);
      if (nextlocation == ' ')
      {

         ereaseEnemyThreeUp(enemy3X, enemy3y);
         ereaseEnemyleft3(enemy3X, enemy3y);
         ereaseEnemyright3(enemy3X, enemy3y);
         ereaseEnemyThreeDown(enemy3X, enemy3y);
         generateBulletForLeftenemy3();
         enemy3X--;

         printEnemyleft3(enemy3X, enemy3y);
      }
      if (nextlocation == '*')
      {
         enemy3Direction = "right";
      }
   }
   if (enemy3Direction == "right") // right
   {
      char nextlocation = getCharAtxy(enemy3X + 12, enemy3y);
      if (nextlocation == ' ')
      {
         ereaseEnemyleft3(enemy3X, enemy3y);
         ereaseEnemyThreeUp(enemy3X, enemy3y);
         ereaseEnemyright3(enemy3X, enemy3y);
         ereaseEnemyThreeDown(enemy3X, enemy3y);
         enemy3X++;

         printEnemyright3(enemy3X, enemy3y);
         generateBulletForRightenemy3();
      }
      if (nextlocation == '*')
      {
         enemy3Direction = "left";
      }
   }
   if (enemy3Direction == "down") // down
   {
      char nextlocation = getCharAtxy(enemy3X, enemy3y + 7);
      if (nextlocation == ' ')
      {
         ereaseEnemyleft3(enemy3X, enemy3y);
         ereaseEnemyThreeUp(enemy3X, enemy3y);
         ereaseEnemyright3(enemy3X, enemy3y);
         ereaseEnemyThreeDown(enemy3X, enemy3y);
         enemy3y++;
         printEnemyDown3(enemy3X, enemy3y);
         generateBulletForDownenemy3();
      }
      if (nextlocation == '*')
      {
         enemy3Direction = "right";
      }
   }
}

void generateBulletForLeftenemy3()
{
   enemyThreeBullettArrX[totalBulletGenerateByLeftEnemy3] = enemy3X - 2;
   enemyThreeBulletArrY[totalBulletGenerateByLeftEnemy3] = enemy3y + 1;
   gotoxy(enemy3X - 2, enemy3y + 1);
   cout << ".";
   totalBulletGenerateByLeftEnemy3++;
}

void moveBulletForLeftEnemy3()
{
   for (int i = 0; i < totalBulletGenerateByLeftEnemy3; i++)
   {
      char nextlocation = getCharAtxy(enemyThreeBullettArrX[i] - 1, enemyThreeBulletArrY[i]);
         ereaseBulletForLeftEnemy2(enemyThreeBullettArrX[i], enemyThreeBulletArrY[i]);

      if (nextlocation == '*')
      {
         removeIndexBulletForLeftEnemy3(i);
      }
      else if (nextlocation == ' ')
      {
         enemyThreeBullettArrX[i] = enemyThreeBullettArrX[i] - 1;
         printBulletForLeftEnemy2(enemyThreeBullettArrX[i], enemyThreeBulletArrY[i]);
      }
   }
}

void removeIndexBulletForLeftEnemy3(int index)
{
   for (int i = index; i < totalBulletGenerateByLeftEnemy3 - 1; i++)
   {
      enemyThreeBullettArrX[i] = enemyThreeBullettArrX[i + 1];
      enemyThreeBulletArrY[i] = enemyThreeBulletArrY[i + 1];
   }
   totalBulletGenerateByLeftEnemy3--;
}

void generateBulletForRightenemy3()
{
   char nextlocation=getCharAtxy(enemy3X+3,enemy3y);
   enemyThreeRightBullettArrX[totalBulletGenerateByrightEnemy3] = enemy3X + 9;
   enemyThreeRightBulletArrY[totalBulletGenerateByrightEnemy3] = enemy3y + 1;
   gotoxy(enemy3X + 9, enemy3y + 1);
   cout << ".";
   totalBulletGenerateByrightEnemy3++;
}

void moveBulletForRightEnemy3()
{
   for (int i = 0; i < totalBulletGenerateByrightEnemy3; i++)
   {
      char nextlocation = getCharAtxy(enemyThreeRightBullettArrX[i] + 2, enemyThreeRightBulletArrY[i]);
      if (nextlocation == '*')
      {
         ereaseBulletForLeftEnemy2(enemyThreeRightBullettArrX[i], enemyThreeRightBulletArrY[i]);
         removeIndexBulletForRightEnemy3(i);
      }
      else if (nextlocation == ' ')
      {
         ereaseBulletForLeftEnemy2(enemyThreeRightBullettArrX[i], enemyThreeRightBulletArrY[i]);
         enemyThreeRightBullettArrX[i] = enemyThreeRightBullettArrX[i] + 1;
         printBulletForLeftEnemy2(enemyThreeRightBullettArrX[i], enemyThreeRightBulletArrY[i]);
      }
   }
}

void removeIndexBulletForRightEnemy3(int index)
{
   for (int i = index; i < totalBulletGenerateByrightEnemy3 - 1; i++)
   {
      enemyThreeRightBullettArrX[i] = enemyThreeRightBullettArrX[i + 1];
      enemyThreeRightBulletArrY[i] = enemyThreeRightBulletArrY[i + 1];
   }
   totalBulletGenerateByrightEnemy3--;
}

void generateBulletForDownenemy3()
{
   enemyThreeDownBullettArrX[totalBulletGenerateByDownEnemy3] = enemy3X + 1;
   enemyThreeDownBulletArrY[totalBulletGenerateByDownEnemy3] = enemy3y + 5;
   gotoxy(enemy3X + 1, enemy3y + 5);
   cout << ".";
   totalBulletGenerateByDownEnemy3++;
}

void moveBulletForDownEnemy3()
{
   for (int i = 0; i < totalBulletGenerateByDownEnemy3; i++)
   {
      char nextlocation = getCharAtxy(enemyThreeDownBullettArrX[i], enemyThreeDownBulletArrY[i] + 2);
      if (nextlocation == '*')
      {
         ereaseBulletForLeftEnemy2(enemyThreeDownBullettArrX[i], enemyThreeDownBulletArrY[i]);
         removeIndexBulletForDownEnemy3(i);
      }
      else if (nextlocation == ' ')
      {
         ereaseBulletForLeftEnemy2(enemyThreeDownBullettArrX[i], enemyThreeDownBulletArrY[i]);
         enemyThreeDownBulletArrY[i] = enemyThreeDownBulletArrY[i] + 1;
         printBulletForLeftEnemy2(enemyThreeDownBullettArrX[i], enemyThreeDownBulletArrY[i]);
      }
   }
}

void removeIndexBulletForDownEnemy3(int index)
{
   for (int i = index; i < totalBulletGenerateByDownEnemy3 - 1; i++)
   {
      enemyThreeDownBullettArrX[i] = enemyThreeDownBullettArrX[i + 1];
      enemyThreeDownBulletArrY[i] = enemyThreeDownBulletArrY[i + 1];
   }
   totalBulletGenerateByDownEnemy3--;
}

void generateBulletForUpenemy3()
{
   enemyThreeUpBullettArrX[totalBulletGenerateByUpEnemy3] = enemy3X + 1;
   enemyThreeUpBulletArrY[totalBulletGenerateByUpEnemy3] = enemy3y;
   gotoxy(enemy3X + 1, enemy3y);
   cout << ".";
   totalBulletGenerateByUpEnemy3++;
}

void moveBulletForUpEnemy3()
{
   for (int i = 0; i < totalBulletGenerateByUpEnemy3; i++)
   {
      char nextlocation = getCharAtxy(enemyThreeUpBullettArrX[i], enemyThreeUpBulletArrY[i] - 4);
      if (nextlocation == '*')
      {
         ereaseBulletForLeftEnemy2(enemyThreeUpBullettArrX[i], enemyThreeUpBulletArrY[i]);
         removeIndexBulletForUpEnemy3(i);
      }
      else if (nextlocation == ' ')
      {
         ereaseBulletForLeftEnemy2(enemyThreeUpBullettArrX[i], enemyThreeUpBulletArrY[i]);
         enemyThreeUpBulletArrY[i] = enemyThreeUpBulletArrY[i] - 1;
         printBulletForLeftEnemy2(enemyThreeUpBullettArrX[i], enemyThreeUpBulletArrY[i]);
      }
   }
}

void removeIndexBulletForUpEnemy3(int index)
{
   for (int i = index; i < totalBulletGenerateByUpEnemy3 - 1; i++)
   {
      enemyThreeUpBullettArrX[i] = enemyThreeUpBullettArrX[i + 1];
      enemyThreeUpBulletArrY[i] = enemyThreeUpBulletArrY[i + 1];
   }
   totalBulletGenerateByUpEnemy3--;
}

void startingOfGame()
{
   system("cls");
   cout << "                  ______                                           __    __ " << endl;
   cout << "                  /                                              |    |  " << endl;
   cout << "                |  $$$$$$   ______    ______    _______   ______  | $$  | $$" << endl;
   cout << "                | $$___ $$ /         |      |  /       | /      |   $$    $$" << endl;
   cout << "                 $$      |  $$$$$$    $$$$$$||  $$$$$$$|  $$$$$$   >$$  $$ " << endl;
   cout << "                 _ $$$$$$ | $$  | $$ /      $$| $$      | $$    $$ /  $$$$" << endl;
   cout << "               |   __| $$| $$__/ $$|  $$$$$$$| $$_____ | $$$$$$$$|  $$  $$" << endl;
   cout << "                 $$    $$| $$    $$  $$    $$  $$        $$      | $$  | $$" << endl;
   cout << "                  $$$$$$ | $$$$$$$    $$$$$$$  |$$$$$$$   $$$$$$$  $$    $$" << endl;
   cout << "                         | $$       " << endl;
   cout << "                         | $$    " << endl;
   cout << "                           $$     " << endl
        << endl
        << endl;

   cout << "                                    MMM8&&&.          " << endl;
   cout << "                              _...MMMMM88&&&&...       " << endl;
   cout << "                          .::'''MMMMM88&&&&&&'''::.     " << endl;
   cout << "                         ::     MMMMM88&&&&&&     ::   " << endl;
   cout << "                         '::....MMMMM88&&&&&&....::'   " << endl;
   cout << "                            `''''MMMMM88&&&&''''`     " << endl;
   cout << "                         '         MMM8&&&          " << endl
        << endl;

   cout << "Press any key to continue the game ";
   getch();
}

// void lastCyldeEnemy() // new module for cylde
// {
//    if (enemyOnelife >= 20 && enemyTwoLife >= 20 && enemyThreeLife >= 20)
//    {
//       // printEnemyleft4(enemy4X, enemy4Y);
//       moveEnemyFour();
//    }
// }

void printEnemyleft4(int x, int y)
{
   // if (enemyThreeLife < totalLife)
   // {
   gotoxy(x, y);

   gotoxy(enemyOneX, enemyOneY);
   for (int row = 0; row < 3; row++)
   {
      for (int i = 0; i < 9; i++)
      {
         cout << enemy1[row][i];
      }
      gotoxy(enemyOneX, enemyOneY + (row + 1));
   }

   // }
   // if (enemyThreeLife >= totalLife)
   // {
   //    ereaseEnemyleft3(x, y);
   // }
}

void ereaseEnemyleft4(int x, int y)
{
   gotoxy(x, y);
   for (int row = 0; row < 3; row++)
   {
      for (int i = 0; i < 9; i++)
      {
         char emp;
         emp = enemy1[row][i];
         emp = ' ';
         cout << emp;
      }
      gotoxy(x, y + (row + 1));
   }
}

void printEnemyright4(int x, int y)
{
   // if (enemyThreeLife < totalLife)
   // {

   gotoxy(x, y);
   for (int row = 0; row < 3; row++)
   {
      for (int i = 0; i < 9; i++)
      {
         cout << leftBox1[row][i];
      }
      gotoxy(x, y + (row + 1));
   }
   // }
   // if (enemyThreeLife >= totalLife)
   // {
   //    ereaseEnemyright3(x, y);
   // }
}

void ereaseEnemyright4(int x, int y)
{
   gotoxy(x, y);

   for (int row = 0; row < 3; row++)
   {
      for (int i = 0; i < 9; i++)
      {
         char tem = leftBox1[row][i];
         tem = ' ';
         cout << tem;
      }
      gotoxy(x, y + (row + 1));
   }
}

void printEnemyUp4(int x, int y)
{
   // if (enemyThreeLife < totalLife)
   // {
   gotoxy(x, y);
   for (int row = 0; row < 6; row++)
   {
      for (int i = 0; i < 5; i++)
      {
         cout << upEnem0Arr[row][i];
      }

      gotoxy(x, y + (row + 1));
   }
   // }
   // if (enemyThreeLife >= totalLife)
   // {
   //    ereaseEnemyThreeUp(x, y);
   // }
}

void ereaseEnemyFourUp(int x, int y)
{
   gotoxy(x, y);
   for (int row = 0; row < 6; row++)
   {
      for (int i = 0; i < 5; i++)
      {
         char tem = upEnem0Arr[row][i];
         tem = ' ';
         cout << tem;
      }
      gotoxy(x, y + (row + 1));
   }

}

void printEnemyDown4(int x, int y)
{
   // if (enemyThreeLife < totalLife)
   // {
   gotoxy(x, y);
      for (int row = 0; row < 6; row++)
      {
         for (int i = 0; i < 5; i++)
         {
            cout << downEnem5Arr[row][i];
         }

         gotoxy(x, y + (row + 1));
      }
   // }
   // if (enemyThreeLife >= totalLife)
   // {
   //    ereaseEnemyThreeDown(x, y);
   // }
}

void ereaseEnemyFourDown(int x, int y)
{
   gotoxy(x, y);
     for (int row = 0; row < 6; row++)
   {
      for (int i = 0; i < 5; i++)
      {
         char tem = downEnem5Arr[row][i];
         tem = ' ';
         cout << tem;
      }

      gotoxy(x, y + (row + 1));
   }

}
void moveEnemyFour()
{
   if (enemy4Direction == "up")
   {
      char nextlocation = getCharAtxy(enemy4X, enemy4Y - 4);
      if (nextlocation == ' ')
      {
         ereaseEnemyleft4(enemy4X, enemy4Y);
         ereaseEnemyFourUp(enemy4X, enemy4Y);
         ereaseEnemyright4(enemy4X, enemy4Y);
         ereaseEnemyFourDown(enemy4X, enemy4Y);
         enemy4Y--;

         printEnemyUp4(enemy4X, enemy4Y);
      }
      if (nextlocation == '*')
      {
         enemy4Direction = "left";
      }
   }

   if (enemy4Direction == "left") // toward negative x-axis my mistake
   {
      char nextlocation = getCharAtxy(enemy4X - 3, enemy4Y);
      if (nextlocation == ' ')
      {

         ereaseEnemyFourUp(enemy4X, enemy4Y);
         ereaseEnemyleft4(enemy4X, enemy4Y);
         ereaseEnemyright4(enemy4X, enemy4Y);
         ereaseEnemyFourDown(enemy4X, enemy4Y);

         enemy4X--;

         printEnemyleft4(enemy4X, enemy4Y);
      }
      if (nextlocation == '*')
      {
         enemy4Direction = "right";
      }
   }
   if (enemy4Direction == "right") // right
   {
      char nextlocation = getCharAtxy(enemy4X + 10, enemy4Y);
      if (enemy4Y + 4 == 25)
      {
         enemy4Direction = "up";
      }
      else if (nextlocation == ' ')
      {
         ereaseEnemyleft4(enemy4X, enemy4Y);
         ereaseEnemyFourUp(enemy4X, enemy4Y);
         ereaseEnemyright4(enemy4X, enemy4Y);
         ereaseEnemyFourDown(enemy4X, enemy4Y);
         enemy4X++;
         enemy4Y++;

         printEnemyright4(enemy4X, enemy4Y);
      }

      else if (nextlocation == '*')
      {
         enemy4Direction = "up";
      }
   }
   if (enemy4Direction == "down") // down
   {
      char nextlocation = getCharAtxy(enemy4X, enemy4Y + 7);
      if (nextlocation == ' ')
      {
         ereaseEnemyleft4(enemy4X, enemy4Y);
         ereaseEnemyFourUp(enemy4X, enemy4Y);
         ereaseEnemyright4(enemy4X, enemy4Y);
         ereaseEnemyFourDown(enemy4X, enemy4Y);
         enemy4Y++;
         printEnemyDown4(enemy4X, enemy4Y);
      }
      if (nextlocation == '*')
      {
         enemy4Direction = "right";
      }
   }
}

// void generateBulletForLeftenemy4()
// {
//    if (enemy4Direction == "left")
//    {
//       // enemyFourRightBullettArrX[totalBulletGenerateByLeftEnemy4] = enemy4X + 8;
//       // enemyFourRightBulletArrY[totalBulletGenerateByLeftEnemy4] = enemy4Y + 1;
//       // gotoxy(enemy4X + 8, enemy4Y + 1);
//       // cout << ".";
//       // totalBulletGenerateByLeftEnemy4++;
//       enemyFourBullettArrX[totalBulletGenerateByLeftEnemy4] = enemy4X - 2;
//       enemyFourBullettArrX[totalBulletGenerateByLeftEnemy4] = enemy4Y + 1;
//       gotoxy(enemy4X - 2, enemy4Y + 1);
//       cout << ".";
//       totalBulletGenerateByLeftEnemy4++;
//    }
// }

// void moveBulletForLeftEnemy4()
// {
//    for (int i = 0; i < totalBulletGenerateByLeftEnemy4; i++)
//    {
//       char nextlocation = getCharAtxy(enemyFourBullettArrX[i] - 2, enemyFourBulletArrY[i]);
//       if (nextlocation == '*')
//       {
//          ereaseBulletForLeftEnemy2(enemyFourBullettArrX[i], enemyFourBulletArrY[i]);
//          removeIndexBulletForLeftEnemy4(i);
//       }
//       else if (nextlocation == ' ')
//       {
//          ereaseBulletForLeftEnemy2(enemyFourBullettArrX[i], enemyFourBulletArrY[i]);
//          enemyFourBullettArrX[i] = enemyFourBullettArrX[i] - 1;
//          printBulletForLeftEnemy2(enemyFourBullettArrX[i], enemyFourBulletArrY[i]);
//       }
//    }
// }
// void removeIndexBulletForLeftEnemy4(int index)
// {
//    for (int i = index; i < totalBulletGenerateByLeftEnemy4 - 1; i++)
//    {
//       enemyFourBullettArrX[i] = enemyFourBullettArrX[i + 1];
//       enemyFourBulletArrY[i] = enemyFourBulletArrY[i + 1];
//    }
//    totalBulletGenerateByLeftEnemy4--;
// }

void generateBulletForRightenemy4()
{
   if (enemy4Direction == "right")
   {
      enemyFourRightBullettArrX[totalBulletGenerateByrightEnemy4] = enemy4X + 9;
      enemyFourRightBulletArrY[totalBulletGenerateByrightEnemy4] = enemy4Y + 1;
      gotoxy(enemy4X + 9, enemy4Y + 1);
      cout << ".";
      totalBulletGenerateByrightEnemy4++;
   }
}

void moveBulletForRightEnemy4()
{
   for (int i = 0; i < totalBulletGenerateByrightEnemy4; i++)
   {
      char nextlocation = getCharAtxy(enemyFourRightBullettArrX[i] + 2, enemyFourRightBulletArrY[i]);
      if (nextlocation == '*')
      {
         ereaseBulletForLeftEnemy2(enemyFourRightBullettArrX[i], enemyFourRightBulletArrY[i]);
         removeIndexBulletForRightEnemy4(i);
      }
      else if (nextlocation == ' ' || nextlocation == '.')
      {
         ereaseBulletForLeftEnemy2(enemyFourRightBullettArrX[i], enemyFourRightBulletArrY[i]);
         enemyFourRightBullettArrX[i] = enemyFourRightBullettArrX[i] + 1;
         printBulletForLeftEnemy2(enemyFourRightBullettArrX[i], enemyFourRightBulletArrY[i]);
      }
   }
}

void removeIndexBulletForRightEnemy4(int index)
{
   for (int i = index; i < totalBulletGenerateByrightEnemy4 - 1; i++)
   {
      enemyFourRightBullettArrX[i] = enemyFourRightBullettArrX[i + 1];
      enemyFourRightBulletArrY[i] = enemyFourRightBulletArrY[i + 1];
   }
   totalBulletGenerateByrightEnemy4--;
}

void timer()
{
   second++;
   if (second == 60)
   {
      second = 0;
      minute++;
   }
   if (minute == 60)
   {
      minute = 0;
      hour++;
   }
   if (hour == 24)
   {
      hour = 0;
   }
   gotoxy(2, 5);
   cout << "Time:"
        << " " << hour << ":" << minute << ":" << second;
}

// void generateBulletForDownenemy4()
// {
//    if (enemy4Direction == "down")
//    {
//       enemyFourDownBullettArrX[totalBulletGenerateByDownEnemy4] = enemy4X + 1;
//       enemyFourDownBulletArrY[totalBulletGenerateByDownEnemy4] = enemy4Y + 5;
//       gotoxy(enemy3X + 1, enemy4Y + 5);
//       cout << ".";
//       totalBulletGenerateByDownEnemy4++;
//    }
// }
// void moveBulletForDownEnemy4()
// {
//    for (int i = 0; i < totalBulletGenerateByDownEnemy4; i++)
//    {
//       char nextlocation = getCharAtxy(enemyFourDownBullettArrX[i], enemyFourDownBulletArrY[i] + 2);
//       if (nextlocation == '*')
//       {
//          ereaseBulletForLeftEnemy2(enemyFourDownBullettArrX[i], enemyFourDownBulletArrY[i]);
//          removeIndexBulletForDownEnemy4(i);
//       }
//       else if (nextlocation == ' ')
//       {
//          ereaseBulletForLeftEnemy2(enemyFourDownBullettArrX[i], enemyFourDownBulletArrY[i]);
//          enemyFourDownBulletArrY[i] = enemyFourDownBulletArrY[i] + 1;
//          printBulletForLeftEnemy2(enemyFourDownBullettArrX[i], enemyFourDownBulletArrY[i]);
//       }
//    }
// }

// void removeIndexBulletForDownEnemy4(int index)
// {
//    for (int i = index; i < totalBulletGenerateByDownEnemy4 - 1; i++)
//    {
//       enemyFourDownBullettArrX[i] = enemyFourDownBullettArrX[i + 1];
//       enemyFourDownBulletArrY[i] = enemyFourDownBulletArrY[i + 1];
//    }
//    totalBulletGenerateByDownEnemy4--;
// }

// void generateBulletForUpenemy4()
// {
//    if (enemy4Direction == "up")
//    {
//       enemyFourUpBullettArrX[totalBulletGenerateByUpEnemy4] = enemy3X + 1;
//       enemyFourUpBulletArrY[totalBulletGenerateByUpEnemy4] = enemy3y;
//       gotoxy(enemy3X + 1, enemy3y);
//       cout << ".";
//       totalBulletGenerateByUpEnemy4++;
//    }
// }

// void moveBulletForUpEnemy4()
// {
//    for (int i = 0; i < totalBulletGenerateByUpEnemy4; i++)
//    {
//       char nextlocation = getCharAtxy(enemyFourUpBullettArrX[i], enemyFourUpBulletArrY[i] - 4);
//       if (nextlocation == '*')
//       {
//          ereaseBulletForLeftEnemy2(enemyFourUpBullettArrX[i], enemyFourUpBulletArrY[i]);
//          removeIndexBulletForUpEnemy4(i);
//       }
//       else if (nextlocation == ' ')
//       {
//          ereaseBulletForLeftEnemy2(enemyFourUpBullettArrX[i], enemyFourUpBulletArrY[i]);
//          enemyFourUpBulletArrY[i] = enemyFourUpBulletArrY[i] - 1;
//          printBulletForLeftEnemy2(enemyFourUpBullettArrX[i], enemyFourUpBulletArrY[i]);
//       }
//    }
// }

// void removeIndexBulletForUpEnemy4(int index)
// {
//    for (int i = index; i < totalBulletGenerateByUpEnemy4 - 1; i++)
//    {
//       enemyFourUpBullettArrX[i] = enemyFourUpBullettArrX[i + 1];
//       enemyFourUpBulletArrY[i] = enemyFourUpBulletArrY[i + 1];
//    }
//    totalBulletGenerateByUpEnemy4--;
// }
