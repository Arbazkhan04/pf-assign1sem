#include<iostream>
#include<string>
#include<cmath>
using namespace std;
float myFun(string leapYear,int holidays,int weekend);
int main()
{
  string year;
  int holidays;
  int weeekend;
  cin>>year>>holidays>>weeekend;
  float result=myFun(year,holidays,weeekend);
  cout<<result;
}
float myFun(string leapYear,int holidays,int weekend)
{
  float finalResult;
  finalResult=(2*holidays)/3 + (3*weekend)/4;
  if(leapYear=="leapYear")
  {
    float newResult=(finalResult*15)/100;
    return newResult;
  }
  return finalResult;
}