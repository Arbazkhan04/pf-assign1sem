#include<iostream>
using namespace std;
void calculatePrice(int money,int year);
int main()
{
 int money,year;
 cout<<"Enter money";
 cin>>money;
 cout<<"Enter year";
 cin>>year;
 calculatePrice(money,year);

}
void calculatePrice(int money,int year)
{
    int evenCount=0;
    int oddCount=0;
 while(year>1800)
 {
    

    if(year%2==0)
    {
      evenCount++;
    }
    else if(year%2!=0)
    {
       oddCount++;
    }
    year--;
 }
 int differenceYearHeReached=year-1800;
 int totalEven=evenCount*1200;
 int totalOdd=((12000+50)*differenceYearHeReached);
 int sum=totalEven+totalOdd;
 cout<<sum;
}