#include<iostream>
using namespace std;
int totalDigit(int number);
int main()
{
 int nnumber;
 cout<<"enter a number";
 cin>>nnumber;
 int result=totalDigit(nnumber);
 cout<<"you have entered "<<result;
}
int totalDigit(int number)
{
    int coutn=0;
    
   while(number>0){
    int rem=number%10;
    number=number/10;
    coutn++;
   }
    return coutn;
   //use while in this case;
}