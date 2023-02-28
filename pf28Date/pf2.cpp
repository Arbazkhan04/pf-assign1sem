#include<iostream>
#include<string>
using namespace std;
int main()
{
    char board[5][5]={{'.','.','*','.','*'},{'.','.','*','.','*'},{'*','.','*','*','*'},{'*','.','*','.','.'},{'*','.','*','.','.'}};
    string location;
    cout<<"Enter your location ";
    cin>>location;
    char a1=location[0];
    char a2=location[1];
    int a2ToNumber=int(a2)-'0';
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
           if(a1=='A' && j==a2ToNumber)
           {
              if(board[i][j]=='*')
              {
                cout<<"Splash";
                return 0;
              }
              else if(board[i][j]=='.')
              {
                cout<<"Boom";
                return 0;
              }
           }
             if(a1=='B' && j==a2ToNumber)
           {
              if(board[i][j]=='*')
              {
                cout<<"Splash";
                return 0;
              }
              else if(board[i][j]=='.')
              {
                cout<<"Boom";
                return 0;
              }
           }
          
        }
    }

}