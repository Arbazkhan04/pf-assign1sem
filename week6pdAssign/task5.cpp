#include<iostream>
#include<string>
using namespace std;
float cal(string ,string ,int );
int main()
{
  string fruit,isWeekend;
  int totalNoOfItems;
  cout<<"Enter the days";
  cin>>isWeekend;
  cout<<"Enter the fruit name";
  cin>>fruit;
  cout<<"Enter the total no of item";
  cin>>totalNoOfItems;
  float result=cal(fruit,isWeekend,totalNoOfItems);
  cout<<result;
  
}

float cal(string fruit ,string isWeekend,int totalNo )
{
    float final;
    if(isWeekend=="Saturday"||  isWeekend=="Sunday")
    {
       if(fruit=="orange"){
        final=totalNo*0.90;
       }

    }
    else if(isWeekend=="Monday"||  isWeekend=="Tuesday"||isWeekend=="Wednesday"||  isWeekend=="Thursday" || isWeekend=="Friday")
      {
        if(fruit=="kiwi")
        {
            final=totalNo*2.70;
        }
      } 
       
        return final;
}