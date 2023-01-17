#include<iostream>
using namespace std;
int sum (int number);
int main()
{
  int number;
  cout<<"number";
  cin>>number;
  int result=sum(number);
  cout<<result;

}
int sum (int number)
{
    int totalNumber=0;
    while(number>0)
    {
        int reminder=number%10;
        number=number/10;
        totalNumber=totalNumber+reminder;


    }
    return totalNumber;
}