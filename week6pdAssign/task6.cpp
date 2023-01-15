#include<iostream>
#include<string>
using namespace  std;
float apartment(string,int);
float studio(string,int);
int main()
{
   string month;
   int day; 
   cout<<"Enter month";
   cin>>month;
   cout<<"Enter day";
   cin>>day;
   float result1=apartment(month,day);
   float result2=studio(month,day);
   cout<<result1;
   cout<<result2;


} 

float apartment(string month,int day)
{
    float finalResult;
    if(month=="May"|| month=="October")
    {
        if(day>14)
        {
            float totalAmount=(65*day)-((65*day*10)/100);
              finalResult=totalAmount;
        }
        else{
            finalResult=day*65;
        }
      }
      return finalResult;
}
float studio(string month,int day)
{
   float finalResult;
    if(month=="May"|| month=="October")
    {
        if(day>14)
        {
            float totalAmount=(50*day)-((50*day*30)/100);
              finalResult=totalAmount;
        //    float discount=day-(day*30 )/100;
        //    finalResult=discount*50;
        }
         else if(day>7)
        {
            float totalAmount=(50*day)-((50*day*5)/100);
              finalResult=totalAmount;
        //    float discount=day-(day*30 )/100;
        //    finalResult=discount*50;
        }
        else if(day>14)
        {
            float totalAmount=(50*day)-((50*day*30)/100);
              finalResult=totalAmount;
        //    float discount=day-(day*30 )/100;
        //    finalResult=discount*50;
        }
        // else{
        //     finalResult=day*50;
        // }
    }
      else if(month=="June"|| month=="September")
    {
        if(day>14)
        {
            float totalAmount=(50*day)-((50*day*20)/100);
              finalResult=totalAmount;
        //    float discount=day-(day*30 )/100;
        //    finalResult=discount*50;
        }
    }
    
    return finalResult;
}
