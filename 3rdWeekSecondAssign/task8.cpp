#include<iostream>
using namespace std;
int main()
{
int number,rem1,div1,rem2,rem3,rem4,div2,div3,div4,total;
cout<<"Enter number ";
cin>>number;
rem1=number%10;
div1=number/10;
rem2=div1%10;
div2=div1/10;
rem3=div2%10;
div3=div2/10;
rem4=div3%10;
div4=div3/10;
total=rem1+rem2+rem3+rem4;
cout<<total;










}
