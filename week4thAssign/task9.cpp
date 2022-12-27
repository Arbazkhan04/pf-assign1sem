#include<iostream>
using namespace std;
void totalAmount(string day, int amount);
int main()
{
string day;
int amt;
cout<<"Enter Day";
cin>>day;
cout<<"Emter amount";
cin>>amt;
totalAmount(day,amt);
}

void totalAmount(string day, int amount)
{
  int sundayAmount,totalAmount;
   if(day=="sunday")
   {
   sundayAmount=(amount*10)/100;
   totalAmount=amount-sundayAmount;
   cout<<totalAmount;
   }
   if(day !="sunday")
   {
     cout<<amount;
   }
}


