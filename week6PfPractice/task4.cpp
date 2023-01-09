#include<iostream>
#include<string>
using namespace std;
float payable(float , string,string);
int main()
{
   float amount;
   string day,month;
   cout<<"Enter amount";
   cin>>amount;
   cout<<"Enter day";
   cin>>day;
   cout<<"Enter month";
   cin>>month;
   float result=payable(amount,day,month);
   cout<<result;

}
float payable(float amount, string day,string month)
{
    float payableAmount=0.0;
    if(day=="Sunday" && month=="October")
      {
       payableAmount=amount-(amount*10)/100;
      }
     else if(day=="Sunday"&& month!="October")
     {
         payableAmount=amount-(amount*5)/100;
     }
     return payableAmount;
}