
#include<iostream>
using namespace std;
float taxCalculator(char type,float price);
float taxAmount;
float finalPrice;
int motorCycle=6;
int electric=8;
int seden=10;
int van=12;
int truck=14;

int main()
{
    char type;
    float price;
    cout<<"Enter vehicle code";
    cin>>type;
    cout<<"Enter price ";
    cin>>price;
    int result=taxCalculator(type,price);
    cout<<result;

  
}
float taxCalculator(char type,float price)
{
    if(type=='M')
    {
     taxAmount=price*(motorCycle/100.0);
     finalPrice=price*taxAmount;
      return finalPrice;
    }
    if(type=='E')
    {
     taxAmount=price*(electric/100.0);
     finalPrice=price*taxAmount;
      return finalPrice;
    }
}
