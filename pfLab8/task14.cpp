#include<iostream>
using namespace std;
int main()
{
    int sum=0;
    int size;
    cout<<"Enter a number of resister ";
    cin>>size;
    float arr[size];
    for(int i=0;i<size;i++)
    {
        cout<<"Enter a value for Register "<<i+1;
        cin>>arr[i];
        sum+=arr[i];
    }
    cout<<sum;


}