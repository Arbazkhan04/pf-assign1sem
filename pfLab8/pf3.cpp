#include<iostream>
using namespace std;
int main()
{
    int sum=0;
    int size;
    cout<<"enter a size";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
    {
       cout<<"Enter a number";
       cin>>arr[i];
       sum+=arr[i];
       
    }
    cout<<"The sum is "<<sum<<endl;
    float average=sum/size;
    cout<<"the average is"<<average;

}