#include<iostream>
#include<string>
using namespace std;
int time(int examStartingHour,int examstartingMinutes,int studentArrivalHour,int studentArrivalMinutes  );
int main()
{
  int examStartingHour, examstartingMinutes, studentArrivalHour, studentArrivalMinutes;
  cout<<"Exam start minutes";
  cin>>examstartingMinutes; 
  cout<<"Exam start hour";
  cin>>examStartingHour; 
  cout<<"studnet Arriving hour";
  cin>>studentArrivalHour; 
  cout<<"studnets Arriving /minutes";
  cin>>studentArrivalMinutes; 

}
int time(int examStartingHour,int examstartingMinutes,int studentArrivalHour,int studentArrivalMinutes  )
{
    if(examStartingHour==studentArrivalHour && examstartingMinutes==studentArrivalMinutes)
    {
         //on time
    }
    else if(examStartingHour)

    // int hourResult, minuteResult;
    // hourResult=examStartingHour-studentArrivalHour;
    // minuteResult=examstartingMinutes-studentArrivalMinutes;
 
    // if(hourResult>0 && minuteResult>0)
    // {
        
    // }
    // else if(hourResult=minuteResult)
    // {

    // }
    

}