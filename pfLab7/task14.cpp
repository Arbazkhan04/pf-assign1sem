#include<iostream>
using namespace std;
void calculateMoney(int age,int WashingPrice,int toyPrice);
int main()
{
    int age, washing, toy;
    cout<<"Enter your age";
    cin>>age;
    cout<<"Enter washing machine price";
    cin>>washing;
    cout<<"Enter toy price";
    cin>>toy;
    calculateMoney(age,washing,toy);


}
void calculateMoney(int age,int WashingPrice,int toyPrice)
{
    int money=0;
    int forEvenIterationCalculation=1;
    int totalToys=0;
    int totalSum;
  while(age>0)
  {
    if (age%2==0)
   {
    // money=forEvenIterationCalculation*((money+10)-1);
    money=((forEvenIterationCalculation*10)+money)-1;
    forEvenIterationCalculation++;
    // cout<<money<<endl;
   }
   else if(age % 2 !=0)
   {
      totalToys++;

    
   }
   
   age--;
  }
   int totaltoyPrice=totalToys*toyPrice;
    // cout<<totaltoyPrice;
  totalSum=money+totaltoyPrice;
  // cout<<totalSum;
  if(totalSum<WashingPrice)
  {
    int shortAmount=WashingPrice-totalSum;
    cout<<"no you need more money to buy"<<endl<<"And you need "<<shortAmount<<" To purchase this";

  }
  else if(totalSum>WashingPrice)
  {
    int moreAmount=totalSum-WashingPrice;
    cout<<"yes you can buy Because machine price is less than the amount that you have "<<moreAmount;
  }
  
  

}