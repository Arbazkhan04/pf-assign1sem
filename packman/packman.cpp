#include <iostream>
#include<string>
#include<windows.h>
using namespace std;
void packManDesign();
void gotoxy(int x , int y);
void erase(int x,int y,char previous);
void showGost(int x,int y);
void printPackman(int x,int y);
char getCharAtxy(short int x ,short int y);
int main()
{
  int gx=1;
  int gy=1;
   string direction="right";
   char previousChar=' ';
  system("cls");
  packManDesign();
  showGost(gx,gy);
  while(true)
  {
    Sleep(100);
    if(direction=="right")
    {
      char nextLocation=getCharAtxy(gx+1,gy);
      if(nextLocation=='%')
      {
        direction="left";
        // erase(packmanX,packmanY);
        // packmanX=packmanX-1;
        // printPackman(packmanX,packmanY);
      }
      else if(nextLocation==' '|| nextLocation=='.')
      {
        erase(gx,gy,previousChar);
        gx=gx+1;
        previousChar=nextLocation;
        showGost(gx,gy);
        
      }
    }
    if(direction=="left")
    {
      char nextLocation=getCharAtxy(gx-1,gy);
      if(nextLocation=='%')
      {
        direction="right";
      }
      else if(nextLocation==' '|| nextLocation=='.')
      {
        erase(gx,gy,previousChar);
        gx=gx-1;
        previousChar=nextLocation;
        showGost(gx,gy);
        
      }
    }
  }
  //  if(GetAsyncKeyState(VK_DOWN))
  //   {
  //    char nextLocation=getCharAtxy(packmanX,packmanY+1);
  //     if(nextLocation==' ')
  //     {
  //       erase(packmanX,packmanY);
  //       packmanY=packmanY+1;
  //       printPackman(packmanX,packmanY);
  //     }
  //   }
  //   if(GetAsyncKeyState(VK_UP))
  //   {
  //    char nextLocation=getCharAtxy(packmanX,packmanY-1);
  //     if(nextLocation==' ')
  //     {
  //       erase(packmanX,packmanY);
  //       packmanY=packmanY-1;
  //       printPackman(packmanX,packmanY);
  //     }
  //   }
  //   if(GetAsyncKeyState(VK_ESCAPE))
  //   {
  //     gameRunning=false;
  //   }
  //   Sleep(200);
  // }
  
}
  

void gotoxy(int x, int y)
{
    COORD coordinate;
    coordinate.X = x;
    coordinate.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinate);
}
char getCharAtxy(short int x,short int y)
{
  CHAR_INFO ci;
  COORD xy={0,0};
  SMALL_RECT rect={x,y,x,y};
  COORD coorBufSize;
  coorBufSize.X=1;
  coorBufSize.Y=2;
  return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE),&ci,coorBufSize,xy,&rect)?ci.Char.AsciiChar: ' ';
}


void packManDesign()
{
 cout<<"|| **   ***************************************************            ******         ||"<<endl;
 cout<<"||      %%%%%%%%%%%%        ****             %%%%%%%%%%%%%%   |%|       %%%%%         ||"<<endl;
 cout<<"||         |%|   |%|     |%|****             |%|         |%|  |%|         |%|         ||"<<endl;
 cout<<"||         |%|   |%|     |%|****             |%|         |%|  |%|         |%|         ||"<<endl;
 cout<<"||         %%%%%%%%% --  |%|****             %%%%%%%%%%%%%%             %%%%%         ||"<<endl;
 cout<<"||         |%|       --  |%|****             ************** |%| --          -         ||"<<endl;
 cout<<"||         %%%%%%%%% --  |%|****             %%%%%%%%%%%%%% |%| --      %%%%%         ||"<<endl;
 cout<<"||               |%|-                        |%| --------                 |%|         ||"<<endl;
 cout<<"||       ******* |%|-                        |%| --------|%|              |%|         ||"<<endl;
 cout<<"||**|%|  |%|%|%| |%|-   |%|                      --------|%|      --|%|   |%|         ||"<<endl;
 cout<<"||**|%|  |%| |%|        %%%%%%%%%                --------|%|      --|%|               ||"<<endl;
 cout<<"||**|%|  |%| |%|            --|%|                     %%%%%%  |%| --|%|               ||"<<endl;
 cout<<"||**|%|                     --|%|                             |%| --|%|               ||"<<endl;
 cout<<"||**|%|  %%%%%%%%%%%      ----|%|%%%%%%%%%                    |%| --|%|%%%%%%%        ||"<<endl;
 cout<<"--------------------------------------------------------------|%|------------------   ||"<<endl;
 cout<<"           ------------------------------------------------          ----             ||"<<endl;
 cout<<"||**|%|  |%| |%|        %%%%%%%%%                --------|%|  |%| --|%|               ||"<<endl;
 cout<<"||**|%|  |%| |%|            --|%|                     %%%%%%  |%| --|%|               ||"<<endl;
 cout<<"||**|%|                     --|%|                             |%| --|%|               ||"<<endl;
 cout<<"||**|%|  %%%%%%%%%%%      ----|%|%%%%%%%%%                    |%| --|%|%%%%%%%        ||"<<endl;
 cout<<"||------------------------------------------------------      |%| --------            ||"<<endl;
 cout<<"||------------------------------------------------------               --------       ||"<<endl;
 cout<<"######################################################################################"<<endl;
}
// void printPackman(int x,int y){
//    gotoxy(x,y);
//    cout<<"P";
// }
void erase(int x,int y,char previous)
{
  gotoxy(x,y);
  cout<<previous;
}
void showGost(int x,int y)
{
  gotoxy(x,y);
  cout<<"G";
}
