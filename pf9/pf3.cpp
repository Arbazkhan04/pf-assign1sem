#include<iostream>
using namespace std;
int coutn(int ,int,int);
int main()
{
     int size;
     int progress=0;
    cout<<"Enter The no Of week progress..";
    cin>>size;
    int arr[size];
    int newArr[size];
    for(int i=0;i<size;i++)
    {
        cout<<"Ente Day progress..";
        cin>>arr[i];
    }
    int count=0;
    for(int i=1;i<size-1;i++)
    {
        if(arr[i]>arr[i-1] && arr[i]>arr[i+1])
        {
            // progress++;
          newArr[count]=arr[i];
          count++;
        }
    }
    if(count==0)
    {
        cout<<"No peek found..";
    }
    else 
    {
        for(int i=0;i<=count;i++)
        {
            cout<<newArr[i]<<" ";
        }
    }
}
