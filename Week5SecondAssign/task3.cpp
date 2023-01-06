#include<iostream>
using namespace std;
int main()
{
    int hours,days,worker;
    cout<<"Enter hours";
    cin>>hours;
     cout<<"Enter days";
    cin>>days;
     cout<<"Enter worker";
    cin>>worker;

    float finalDays=(days-((days*10)/100.0));
    int totalHour=finalDays*10;
    cout<<totalHour;
    if(totalHour<hours)
    {
       int finalResult=hours- totalHour;
       cout<<"Yes!"<<finalResult<<"hour left";
    }
    if(totalHour>hours)
    {
         int finalResult= totalHour-hours; 
         cout<<"Additional Hours"<<finalResult<<"is needed";
    }
   

    



}