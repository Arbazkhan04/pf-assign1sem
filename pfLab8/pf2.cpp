#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"enter size";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cout<<"Enter a number";
        cin>>arr[i];
       
    }
    for(int j=0; j<size;j++)
    {
         cout<<arr[j]<<" ";
    }
    
}