#include<iostream>
using namespace std;
int main()
{

int sub1,sub2,sub3,sub4,sub5,toalMars,givenMarks=500;
float totalPer;
cout<<"Enter First Subject Marks";
cin>>sub1;
cout<<"Enter Second Subject Marks";
cin>>sub2;
cout<<"Enter third Subject Marks";
cin>>sub3;
cout<<"Enter fourth Subject Marks";
cin>>sub4;
cout<<"Enter fifth Subject Marks";
cin>>sub5;
toalMars=sub1+sub2+sub3+sub4+sub5;
totalPer=(toalMars*100)/givenMarks;
cout<<"The Total Percentage of your Subjects is "<<totalPer;


}
