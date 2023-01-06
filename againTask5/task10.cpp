#include<iostream>
using namespace std;
int main()
{
    
    int totalVolume;
    int p1;
    int p2;
    float workerAbsent;
    cout<<"Enter total Volume ";
    cin>>totalVolume;
    cout<<"Enter p2  contribution ";
    cin>>p1;
     cout<<"Enter p2  contribution ";
    cin>>p2;
    cout<<"Enter working  hour ";
    cin>>workerAbsent;

    float p1Contri=p1*workerAbsent;
    float p2Contri=p2*workerAbsent;
    float totalContri=p1Contri+p2Contri;
    // cout<<totalContri;
    int filledVolume=totalVolume-totalContri;
    float p1PerCentageContri=(p1Contri*100)/totalVolume;
    // cout<<"pipe one contribution "<<p1PerCentageContri<<endl;
    float p2PerCentageContri=(p2Contri*100)/totalVolume;
    // cout<<"pipe two contribution"<<p2PerCentageContri<<endl;
    float filledVolumePer=(filledVolume*100)/totalVolume;
    cout<<"The poll is " <<(filledVolumePer-100) <<" percentage filled ";
    if(totalContri>totalVolume)
    {
       cout<<workerAbsent <<"poll overFlow with "<<filledVolume;
    }



}