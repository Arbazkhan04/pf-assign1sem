#include<iostream>
using namespace std;
void patient(int period);

int main()
{
    int n;
    cout<<"Enter number";
    cin>>n;
    patient(n);
}
void patient(int period)
{
    int totalTreated=0;
    int totalUntreated=0;
   for(int i=period;i>0;i--)
   {
    int patient;
     cout<<"Entern of patient ";
     cin>>patient;
     if(patient<7)
     {
       cout<<"Day"<<i<<patient<<"treated and untreated is 0"<<endl;
       totalTreated=totalTreated+patient;
     }
       else if(i==3){
        if (totalTreated<totalUntreated)
        {
            int totalUntreatedTreated=patient-8;
        //    totalTreated=8-patient;
             totalUntreated=8;
             cout<<"Day"<<i<<totalUntreated<<"toal untreated"<<totalUntreatedTreated;
              totalTreated=totalTreated+totalUntreated;
           totalUntreated=totalUntreated+totalUntreatedTreated;
        }
       }
     else if(patient>=7)
     {
       int totalUntreatedTreated=patient-7;
       int totalTreatedpat=7;
       cout<<"Day"<<i<<totalTreatedpat<<"toal untreated"<<totalUntreatedTreated;
       totalTreated=totalTreated+totalTreatedpat;
       totalUntreated=totalUntreated+totalUntreatedTreated;

     }
   
 }
 cout<<"Total treated"<<totalTreated<<endl;
  cout<<"Total Untreated"<<totalUntreated<<endl;

  
}
