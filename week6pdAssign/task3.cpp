#include<iostream>
#include<string>
using namespace std;
string astogicalSign(string ,int ,int);
int main()
{
  string sign;
  int month,data;
  
    cout<<"Enter a month";
    cin>>month;
       cout<<"Enter a sign";
    cin>>sign;
       cout<<"Enter a data";
    cin>>data;

   string resutl=astogicalSign(sign,month,data);
   cout<<resutl;
}
string astogicalSign(string sign, int month,int data)
{
   string finalResult;
   if(sign=="Aries"&&((month==3 && data>=21) || (month==4 && data<=19) ))
   finalResult="The Ram";
   else if(sign=="taurus"&&((month==4 && data>=20) || (month==5 && data<=20) ))
   finalResult="The Bull";
   else if(sign=="Demini"&&((month==5 && data>=21) || (month==6 && data<=22) ))
   finalResult="The TRamwins";
   else if(sign=="Cancer"&&((month==6 && data>=23) || (month==7 && data<=22) ))
   finalResult="The crab";
   else if(sign=="Leo"&&((month==7 && data>=23) || (month==8 && data<=22) ))
   finalResult="The lion";
   else
   cout<<"enter coorect number";
 
   return finalResult;
}