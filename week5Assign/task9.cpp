#include<iostream>
using namespace std;
int calEvenOrOdd(int number);
int main()
{
    int number;
    cout<<" Enter a number ";
    cin>>number;
       int result=calEvenOrOdd(number);
    if(result%2==0)
    {
        cout<<"The Number is Evenish ";
    }
    if(result % 2==1)
    {
        cout<<"The Number is Oddish ";
    }
}

int calEvenOrOdd(int number)
{
     int div1=number/10;
    // cout<<div1<<endl;
    int rem1=number%10;
    cout<<rem1;
    int div2=div1/10;
    int rem2=div1%10;
    cout<<rem2;
    int div3=div2/10;
    int rem3=div2%10;
    cout<<rem3;
    int div4=div3/10;
    int rem4=div3%10;
    cout<<rem4;
    int rem5=div4%10;
    cout<<rem5;
    int totalCal=rem1+rem2+rem3+rem4+rem5;
    return totalCal;
}