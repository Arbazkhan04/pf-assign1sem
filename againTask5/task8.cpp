#include<iostream>
using namespace std;
int symmetrical(int number);
int main()
{
   int n1;
   cout<<"Enter a Number :";
   cin>>n1;
   int result=symmetrical(n1);
    if(result==0)
   {
       cout<<"Number is Symmetrical ";
   }
   if(result!=0)
   {
     cout<<"Not a Symmertical";
   }
}

int symmetrical(int number)
{
   
    int div1=number/10;
    int rem1=number%10;
    
    int div2=div1/10;
    int rem2=div1%10;
   
    int div3=div2/10;
    int rem3=div2%10;
    int totalResult=(rem2-rem1)-(rem2-rem3);
    return totalResult;
}