#include<iostream>
using namespace std;
int main()
{
    int smallest=99999;
    int size;
    cout<<"Size ";
    cin>>size;
    int arr[size];
   
    for(int i=0;i<size;i++)
    {
        cout<<"Enter a number ";
        cin>>arr[i];
        if(arr[i]<smallest)

        {
            smallest=arr[i];

        }
       
    }
    cout<<smallest;

}