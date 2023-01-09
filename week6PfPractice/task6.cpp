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
    float payableAmount=amount;
    if(day=="Sunday" && (month=="October" ||month=="March"||month=="August"))
      {
       payableAmount=amount-(amount*10)/100;
      }
      else if(day=="Monday" && (month=="November"||month=="December"))
      {
         payableAmount=amount-(amount*5)/100;
      }
    
     return payableAmount;
}