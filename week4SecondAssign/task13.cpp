#include<iostream>
using namespace std;
int main()
{
 int workingMinutePerDay=63,holidaysMinutePerDays=127,totalDaysInYear=365,holidays,normGameTomhas=30000;
 cout<<"Enter holidays";
 cin>>holidays;
 int WorkingDays=totalDaysInYear-holidays;
 int timeForGames=(WorkingDays*workingMinutePerDay)+(holidays*holidaysMinutePerDays);
 int normGameDifference=normGameTomhas-timeForGames;
 cout<<normGameDifference;



}