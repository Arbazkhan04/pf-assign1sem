#include<iostream>
#include<string>
using namespace std;
float earningAmount(string,int,int);
int main()
{
   int rows,col;
   string screen;
   cout<<"Enter no of rows";
   cin>>rows;
   cout<<"Enter no of col";
   cin>>col;
   cout<<"Enter screen";
   cin>>screen;
   float result=earningAmount(screen,rows,col);
   cout<<result;
}
float earningAmount(string screen,int rows,int col)
{
    float result;
    if(screen=="primiere")
    {
     result=(rows*col*12.0);
    }
   else if(screen=="normal")
    {
     result=(rows*col*7.50);
    }
    if(screen=="discout")
    {
     result=(rows*col*5.0);
    }
    return result;
}