#include<iostream>
#include<cmath>
using namespace std;
float calculatAngle(float base,float degree);
int main()
{
  float base,degree;
  cout<<"Enter base ";
  cin>>base;
  cout<<"Enter degree ";
  cin>>degree;
  float result=calculatAngle(base,degree);
  cout<<result;
}
float calculatAngle(float base,float degree)
{
    float radian=57.29;
    float angle=degree/radian;
    float tanAngle=tan(angle);
    float totalAngle=tanAngle*base;
   return totalAngle;
}