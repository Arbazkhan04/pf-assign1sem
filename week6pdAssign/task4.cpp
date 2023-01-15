#include<iostream>
using namespace std;
float charges(char,int);
float regCharges=10.00;
float premiumCharges=25.00;
int main()
{
  char character;
  int minutes;
  cout<<"Enter which type of customer you are select(p or r)";
  cin>>character;
  cout<<"Enter number of minutes ";
  cin>>minutes;
  float result=charges(character,minutes);
  cout<<result;
}
float charges(char code,int mintues)
{
    float final;
    if(code=='r' || code=='R')
    {
      if(mintues>50){
        final=( mintues-50)*0.20;
      }
      else{
        final=regCharges;
      }
    }
    else if(code=='p'|| code=='P')
    {
        char character;
        cout<<"Enter a character for Day(D) or Night(N)";
        cin>>character;
        if(character=='D'){
           if(mintues>75){
           final=( mintues-75)*0.10;
         }
         
        else if(character=='N')
         {
           if(mintues>100){
           final=(mintues-100)*0.05;
         }
          else{
            final=premiumCharges;
         }
         }
          
        }
    }
    return final;
}