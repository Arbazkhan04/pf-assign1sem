#include<iostream>
using namespace std;
int main()
{
  int arr[10]={1,2,3,4,5,6,7,8,10,9};
  int arr1[9];
  for(int i=0;i<9;i++)
  {
    cout<<"Enter Number";
    cin>>arr1[i];
  }
  for(int i=0;i<10;i++)
  {
    for(int j=0;j<9;j++)
    {
        if(arr[i]==arr1[j])
        {
          arr[i]=-1;
          break;
        }
    }
  }
  for(int i=0;i<10;i++)
  {
    if(arr[i]!=-1)
    {
        cout<<arr[i];
    }
  }
}