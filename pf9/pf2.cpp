#include<iostream>
using namespace std;
int main()
{
    int size;
    int progress=0;
    cout<<"Enter The no Of week progress..";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cout<<"Enter "<<i+1<<"Day progress..";
        cin>>arr[i];
    }
    
    for(int i=0;i<size-1;i++)
    {
        
       if(arr[i+1]>arr[i])
       {
        progress++;
       }
    }
    cout<<progress;
}