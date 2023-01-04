#include<iostream>
using namespace std;
int main()
{
    // int hour=10 ,minute=56;
    int hour,minute;
    cout<<"Enter Hour ";
    cin>>hour;
    cout<<"Enter Minute ";
    cin>>minute;
    int minusMinute;
    // int totalHour=hour * minute 
    int totalMintue=minute+15;
    if(totalMintue>=60)
    {
      hour++; 
     totalMintue-60; 
    //  cout<<totalMintue<<endl;
    }
   cout<<hour<<totalMintue;
    
}