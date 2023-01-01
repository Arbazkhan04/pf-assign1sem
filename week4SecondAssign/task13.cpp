#include<iostream>
#include<math.h>
using namespace std;

int main()
{
 int workingMinutePerDay=63,holidaysMinutePerDays=127,totalDaysInYear=365,holidays,normGameTomhas=30000;
 cout<<"Enter holidays";
 cin>>holidays;
 int WorkingDays=totalDaysInYear-holidays;
 int timeForGames=(WorkingDays*workingMinutePerDay)+(holidays*holidaysMinutePerDays);
 int normGameDifference=normGameTomhas-timeForGames;
//  cout<<normGameDifference<<endl;
 int hourForNormDays=normGameDifference/60;
//  cout<<hourForNormDays<<endl;
 float pointingvaluesHourForNormDays=(normGameDifference/60.00);
//  cout<<pointingvaluesHourForNormDays<<endl;
 float minuteForNormsDays=round((pointingvaluesHourForNormDays-hourForNormDays)*60.00);
//  cout<<minuteForNormsDays;
 cout<<hourForNormDays  << " Hour " <<minuteForNormsDays<< " Minute ";




}