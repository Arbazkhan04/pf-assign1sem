#include<iostream>
using namespace std;
float cheapestPrice(string day,int kilometer);

int main()
{
    string day;
    int kilometer;
    cout<<"Enter day";
    cin>>day;
    cout<<"Enter kilometer";
    cin>>kilometer;
    float result=cheapestPrice(day,kilometer);
    cout<<result;

}

float cheapestPrice(string day,int kilometer)
{
    float result;
   if(kilometer<=19 && day=="day")
   {
    result=0.79+0.70;
   }
  else if(kilometer<=19 && day=="night")
   {
    result=0.90+0.70;
   }
    else if((kilometer>19 && kilometer<=99) &&( day=="day"|| day=="nigth"))
   {
    result=0.06;
   }
    else if((kilometer>=100) && ( day=="day"|| day=="nigth"))
   {
    result=0.06;
   }
   return result;

}