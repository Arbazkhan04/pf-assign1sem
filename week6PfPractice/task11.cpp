#include<iostream>
#include<iostream>
using namespace std;
float myFun(float amount,string cat,int people);
float vip=499.99;
float normal=249.99;
int main()
{
   float amount;
   string cat;
   int people;
   cout<<"Enter amount";
   cin>>amount;
   cout<<"Enter catoriey";
   cin>>cat;
   cout<<"Enter no of people";
   cin>>people;
   float result=myFun(amount,cat,people);
   if(result<amount){

   cout<<"Yes you have "<<result<<"left";
   }
   else
   {
    cout<<"No enough is money you need"<<result<<"money";
   }



}

float myFun(float amount,string cat,int people)
{  
     float total;
    if(cat=="Vip" && people<=4)
    {
      total= amount-((vip*75)/100);

    }
    else if(cat=="Vip" && (people>4&& people<=9))
    {
          total= amount-((vip*60)/100);
    }
    else if(cat=="Vip" && (people>9 && people<=24))
    {
          total= amount-((vip*50)/100);
    }
    else if(cat=="Vip" &&  people>50)
    {
         total= amount-((vip*25)/100);
    }

    else if(cat=="Normal" && people<=4)
    {
      total= amount-((vip*75)/100);

    }
    else if(cat=="Normal" && (people>4&& people<=9))
    {
          total= amount-((vip*60)/100);
    }
    else if(cat=="Normal" && (people>9 && people<=24))
    {
          total= amount-((vip*50)/100);
    }
    else if(cat=="Normal" &&  people>50)
    {
         total= amount-((vip*25)/100);
    }

    return total;
}