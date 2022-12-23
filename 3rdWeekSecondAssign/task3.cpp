#include<iostream>
using namespace std;
int main()
{
int time ;
float initialVelo, acceleration,finalVelocity;
cout<<"Enter time";
cin>>time;
cout<<"enter Intial Velocity";
cin>>initialVelo;
cout<<"enter acceleration";
cin>>acceleration;
finalVelocity=(acceleration*time)+initialVelo;
cout<<"final Velocity"<<finalVelocity;
}

