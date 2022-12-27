#include<iostream>
using namespace std;
void ifPass(int marks);
int main()
{
int marks;
while(true){
cin>>marks;
ifPass(marks);
}
}
void ifPass(int marks)
{
if(marks>50)
{
  cout<<"you have passed the quiz";
}
if(marks==50)
{
   cout<<"Your marks are 50";
}
if(marks<50)
{
cout<<"you are failed";
}
}
