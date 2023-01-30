#include<iostream>
using namespace std;
int main()
{
    int firstSize,secondSize;
    cout<<"Enter first array size";
    cin>>firstSize;
    cout<<"Enter second array size";
    cin>>secondSize;
    int arr1[firstSize];
    int arr2[secondSize];
    for(int i=0;i<firstSize;i++)
    {
        cout<<"Enter no. for fisrt array ";
        cin>>arr1[i];
    }
     for(int j=0;j<firstSize;j++)
    {
        cout<<"Enter no. for fisrt array ";
        cin>>arr2[j];
    }
    int totalsize=sizeof(arr1)/sizeof(arr1[0])+sizeof(arr2)/sizeof(arr2[0]);
    for(int i=0;i<=totalsize;i++)
    {
        
    }
    

    
}