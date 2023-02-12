#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
void packManDesign();
void gotoxy(int x, int y);
void erase(int x, int y, char previous);
void clear(int x, int y);
void showGost(int x, int y);
void printPackman(int x, int y);
char getCharAtxy(short int x, short int y);
void packmanTotalScore(int number);
int packmanScore = 0;
int main()
{
  int packmanX = 2;
  int packmanY = 1;
  bool gameRuning = true;
  int gx = 4;
  int gy = 2;
  int gx2 = 70;
  int gy2 = 5;
  string direction = "right";
  char previousChar = ' ';
  system("cls");
  packManDesign();
  printPackman(packmanX, packmanY);
  showGost(gx, gy);
  showGost(gx2, gy2);

  while (gameRuning)
  {
    if (GetAsyncKeyState(VK_DOWN))
    {
      char nextLocation = getCharAtxy(packmanX, packmanY + 1);
      if (nextLocation == ' ' || nextLocation == '-')
      {
        clear(packmanX, packmanY);
        packmanY = packmanY + 1;
        printPackman(packmanX, packmanY);
      }
      if (nextLocation == '-')
      {
        packmanScore++;
        packmanTotalScore(packmanScore);
      }
    }
    if (GetAsyncKeyState(VK_UP))
    {
      char nextLocation = getCharAtxy(packmanX, packmanY - 1);
      if (nextLocation == ' ' || nextLocation == '-')
      {
        clear(packmanX, packmanY);
        packmanY = packmanY - 1;
        printPackman(packmanX, packmanY);
      }
      if (nextLocation == '-')
      {
        packmanScore++;
        packmanTotalScore(packmanScore);
      }
    }
    if (GetAsyncKeyState(VK_LEFT))
    {
      char nextLocation = getCharAtxy(packmanX - 1, packmanY);
      if (nextLocation == ' ' || nextLocation == '-')
      {
        clear(packmanX, packmanY);
        packmanX = packmanX - 1;
        printPackman(packmanX, packmanY);
      }
      if (nextLocation == '-')
      {
        packmanScore++;
        packmanTotalScore(packmanScore);
      }
    }
    if (GetAsyncKeyState(VK_RIGHT))
    {
      char nextLocation = getCharAtxy(packmanX + 1, packmanY);
      if (nextLocation == ' ' || nextLocation == '-')
      {
        clear(packmanX, packmanY);
        packmanX = packmanX + 1;
        printPackman(packmanX, packmanY);
      }
      if (nextLocation == '-')
      {
        packmanScore++;
        packmanTotalScore(packmanScore);
      }
    }
    if (GetAsyncKeyState(VK_ESCAPE))
    {
      gameRuning = false;
    }
    Sleep(200);
    // 1st gost
    if (direction == "right")
    {
      char nextLocation = getCharAtxy(gx + 1, gy);
      if (nextLocation == '%' || nextLocation == '|' || nextLocation == '*' || nextLocation == '#')
      {
        direction = "down";
      }

      else if (nextLocation == ' ' || nextLocation == '-')
      {
        erase(gx, gy, previousChar);
        gx = gx + 1;
        previousChar = nextLocation;
        showGost(gx, gy);
      }
    }
    if (direction == "left")
    {
      char nextLocation = getCharAtxy(gx - 1, gy);
      if (nextLocation == '%' || nextLocation == '|' || nextLocation == '*' || nextLocation == '#')
      {
        direction = "up";
      }
      else if (nextLocation == ' ' || nextLocation == '-')
      {
        erase(gx, gy, previousChar);
        gx = gx - 1;
        previousChar = nextLocation;
        showGost(gx, gy);
      }
    }
    if (direction == "down")
    {
      char nextlocation = getCharAtxy(gx, gy + 1);
      if (nextlocation == '%' || nextlocation == '|' || nextlocation == '*' || nextlocation == '#')
      {
        direction = "left";
      }
      else if (nextlocation == ' ' || nextlocation == '-')
      {
        erase(gx, gy, previousChar);
        gy = gy + 1;
        previousChar = nextlocation;
        showGost(gx, gy);
      }
    }
    if (direction == "up")
    {
      char nextlocation = getCharAtxy(gx, gy - 1);
      if (nextlocation == '%' || nextlocation == '|' || nextlocation == '*' || nextlocation == '#')
      {
        direction = "right";
      }
      else if (nextlocation == ' ' || nextlocation == '-')
      {
        erase(gx, gy, previousChar);
        gy = gy - 1;
        previousChar = nextlocation;
        showGost(gx, gy);
      }
       // 1st gost
    }
  //  2nd gost
    if(direction=="right")
    {
      char nextlocation=getCharAtxy(gx2+1,gy2);
      if (nextlocation == '%' || nextlocation == '|' || nextlocation == '*' || nextlocation == '#')
      {
        direction=="up";
      }
      else if(nextlocation=='-'|| nextlocation==' ')
      {
        erase(gx2,gy2,previousChar);
        gx2=gx2+1;
        showGost(gx2,gy2);
      }
    }
     if(direction=="up")
    {
      char nextlocation=getCharAtxy(gx2,gy2-1);
      if (nextlocation == '%' || nextlocation == '|' || nextlocation == '*' || nextlocation == '#')
      {
        direction=="left";
      }
      else if(nextlocation=='-'|| nextlocation==' ')
      {
        erase(gx2,gy2,previousChar);
        gy2=gy2-1;
        showGost(gx2,gy2);
      }
    }
     if(direction=="left")
    {
      char nextlocation=getCharAtxy(gx2-1,gy2);
      if (nextlocation == '%' || nextlocation == '|' || nextlocation == '*' || nextlocation == '#')
      {
        direction=="down";
      }
      else if(nextlocation=='-'|| nextlocation==' ')
      {
        erase(gx2,gy2,previousChar);
        gx2=gx2-1;
        showGost(gx2,gy2);
      }
    }
     if(direction=="down")
    {
      char nextlocation=getCharAtxy(gx2,gy2+1);
      if (nextlocation == '%' || nextlocation == '|' || nextlocation == '*' || nextlocation == '#')
      {
        direction=="up";
      }
      else if(nextlocation=='-'|| nextlocation==' ')
      {
        erase(gx2,gy2,previousChar);
        gy2=gy2+1;
        showGost(gx2,gy2);
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

void packManDesign()
{
  cout << "||************************************************************************************||" << endl;
  cout << "||      %%%%%%%%%%%%        ****             %%%%%%%%%%%%%%   |%|       %%%%%         ||" << endl;
  cout << "||         |%|   |%|     |%|****             |%|         |%|  |%|         |%|         ||" << endl;
  cout << "||         |%|   |%|     |%|****             |%|         |%|  |%|         |%|         ||" << endl;
  cout << "||         %%%%%%%%% --  |%|****             %%%%%%%%%%%%%%             %%%%%         ||" << endl;
  cout << "||         |%|       --  |%|****             ************** |%| --          -         ||" << endl;
  cout << "||         %%%%%%%%% --  |%|****             %%%%%%%%%%%%%% |%| --      %%%%%         ||" << endl;
  cout << "||               |%|-                        |%| --------                 |%|         ||" << endl;
  cout << "||       ******* |%|-                        |%| --------|%|              |%|         ||" << endl;
  cout << "||**|%|  |%|%|%| |%|-   |%|                      --------|%|      --|%|   |%|         ||" << endl;
  cout << "||**|%|  |%| |%|        %%%%%%%%%                --------|%|      --|%|               ||" << endl;
  cout << "||**|%|  |%| |%|            --|%|                     %%%%%%  |%| --|%|               ||" << endl;
  cout << "||**|%|                     --|%|                             |%| --|%|               ||" << endl;
  cout << "||**|%|  %%%%%%%%%%%      ----|%|%%%%%%%%%                    |%| --|%|%%%%%%%        ||" << endl;
  cout << "||------------------------------------------------------------|%|------------------   ||" << endl;
  cout << "||           ------------------------------------------------          ----           ||" << endl;
  cout << "||**|%|  |%| |%|        %%%%%%%%%                --------|%|  |%| --|%|               ||" << endl;
  cout << "||**|%|  |%| |%|            --|%|                     %%%%%%  |%| --|%|               ||" << endl;
  cout << "||**|%|                     --|%|                             |%| --|%|               ||" << endl;
  cout << "||**|%|  %%%%%%%%%%%      ----|%|%%%%%%%%%                    |%| --|%|%%%%%%%        ||" << endl;
  cout << "||------------------------------------------------------      |%| --------            ||" << endl;
  cout << "||------------------------------------------------------               --------       ||" << endl;
  cout << "######################################################################################" << endl;
}
void printPackman(int x, int y)
{
  gotoxy(x, y);
  cout << "P";
}
void clear(int x, int y)
{
  gotoxy(x, y);
  cout << ' ';
}
void erase(int x, int y, char previous)
{
  gotoxy(x, y);
  cout << previous;
}
void showGost(int x, int y)
{
  gotoxy(x, y);
  cout << "G";
}
void packmanTotalScore(int number)
{
  gotoxy(90, 20);
  cout << "score is " << number;
}
