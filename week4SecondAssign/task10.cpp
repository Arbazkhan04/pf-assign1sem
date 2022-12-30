#include<iostream>
using namespace std;
#include <string>
void CountryDiscocunt(string , int);
int main()
{
   string coutryName;
   int ticketPrice;
  while (true)
  {
     cout<<"Enter Your Country Name in lower case";
   cin>>coutryName;
    cout<<"Enter Amount in Dollars";
   cin>>ticketPrice;

   CountryDiscocunt(coutryName,ticketPrice);
  }
  

}

void CountryDiscocunt(string countryName,int ticketPrice)
{
  if(countryName=="pakistan")
  {
    int discount=(ticketPrice*5)/100;
    int finalPrice=ticketPrice-discount;
    cout<<finalPrice;
  }
   if(countryName=="irland")
  {
    int discount=(ticketPrice*10)/100;
    int finalPrice=ticketPrice-discount;
    cout<<finalPrice;
  }
    if(countryName=="india")
  {
    int discount=(ticketPrice*20)/100;
    int finalPrice=ticketPrice-discount;
    cout<<finalPrice;
  }
      if(countryName=="england")
  {
    int discount=(ticketPrice*30)/100;
    int finalPrice=ticketPrice-discount;
    cout<<finalPrice;
  }
      if(countryName=="canada")
  {
    int discount=(ticketPrice*45)/100;
    int finalPrice=ticketPrice-discount;
    cout<<finalPrice;
  }
}