#include<iostream>

using namespace std;
int main()
{

float matric,intermediate,ecat,Result;
int tMatric=1100,tIntermediate=550,tEcat=400;
float tPerMAtric,tPerInter,tPerCat;
cout<<"Enter matric marks";
cin>>matric;
cout<<"Enter intermediate marks";
cin>>intermediate;
cout<<"Enter ecat marks";
cin>>ecat;
tPerMAtric=matric/tMatric*100;
tPerInter=intermediate/tIntermediate*100;
tPerCat=ecat/tEcat*100;
Result=tPerMAtric*10/100+tPerInter*40/100+tPerCat*50/100;
cout<<"Your Aggregrate is:"<<Result;




}
