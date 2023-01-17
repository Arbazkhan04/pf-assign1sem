#include<iostream>
using namespace std;
int main()
{
    int n1=0,n2=1, series=0;
    int number;
    cout<<"enter number";
    cin>>number;
    cout<<n1<<","<<n2;
    for(int i=1; i<=number-2;i++)
    //because we are printing the of n1 and n2 alreadxy so that why we are derease the condional by 2
    {
        series=n1+n2;
        cout<<","<<series;
          
        n1=n2;
        n2=series;

      
    
     
    }
}