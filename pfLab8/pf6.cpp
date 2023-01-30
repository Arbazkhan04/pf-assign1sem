#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Size ";
    cin>>size;
    int arr[size];
   
    for(int i=0;i<size;i++)
    {
        cout<<"Enter a number ";
        cin>>arr[i];
       
    }
     int n;
    cout<<"Enter a number for multiply";
    cin>>n;
    for(int i=0;i<size;i++)
    {
        
        cout<<arr[i]*n<<" ";
       
    }

}