#include<iostream>
using namespace std;
int series(int);
int main()
{
  int n1;
  cout<<"enter a number";

  cin>>n1;
  int result=series(n1);
  cout<<result;
}
int series(int number)
{
    int nextnumber=0;
    int current=1;
//  int previous=3;
 for(int i=2;i<=number;i++)
 {
    nextnumber=current+i;
    current=nextnumber;
 }
   return nextnumber;
}