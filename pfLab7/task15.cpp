#include<iostream>
using namespace std;
void calculatePrice(int money,int year);
int main()
{
 int money;
 int year;
 cout<<"Enter money";
 cin>>money;
 cout<<"Enter year";
 cin>>year;
 calculatePrice(money,year);

}
void calculatePrice(int money,int year)
{
    int differenceYearHeReached=year-1800;
    int evenCount=0;
    int oddCount=0;
 while(year>1800)
 {
    

    if(year%2==0)
    {
      evenCount++;
    }
    else if(year%2==1)
    {
       oddCount++;
    }
    year--;
 }
//  int differenceYearHeReached=year-1800;
cout<<"even"<<evenCount<<endl;
cout<<"odd"<<oddCount<<endl;



 int totalEven=evenCount*12000;
 cout<<"even"<<totalEven<<endl;
 int totalOdd=((12000*differenceYearHeReached)+50);
 cout<<"total odd"<<totalOdd<<endl;
 int sum=totalEven+totalOdd;
 cout<<"sum"<<sum<<endl;
 if(sum<money)
 {
   int totalLeftMoney=money-sum;
   cout<<totalLeftMoney;
 }
 else if(sum>money)
 {
   int totalChargeMoney=sum-money;
   cout<<totalChargeMoney;
 }
}