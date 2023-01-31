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
        cout<<"Enter no. for fisrt array for only size having two";
        cin>>arr1[i];
    }
     for(int j=0;j<secondSize;j++)
    {
        cout<<"Enter no. for fisrt array ";
        cin>>arr2[j];
    }
    int totalsize=sizeof(arr2)/sizeof(arr2[0]);
    // cout<<totalsize;
    int thirdarray[totalsize];
    thirdarray[0]=arr1[0];
    thirdarray[(totalsize-1)+2]=arr1[2];
      int m=0;
    for(int i=1;i<totalsize;i++)
    {
      
     thirdarray[i]=arr2[m];
     m++;
    }
    for(int i=0;i<totalsize+2;i++)
    {
      cout<<thirdarray[i]<<" ";
    }

    
}