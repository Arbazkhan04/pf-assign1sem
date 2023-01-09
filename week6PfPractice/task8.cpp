#include<iostream>
using namespace std;
string speed(float number);
int main()
{
  float number;
  cout<<"Enter number";
  cin>>number;
  string result=speed(number);
  cout<<result;
}
string speed(float number)
{ 
    string speed;
    if(number>=1.0 && number<10.9)
    speed="slow";
   else if(number>=11.0 && number<50.9)
    speed="Averaage";
     else if(number>=51.0 && number<150.9)
    speed="Averaage";
     else if(number>=151.0 && number<1000.9)
    speed="utra fast";
    else
    speed="extremely Fast";

    return speed;
}