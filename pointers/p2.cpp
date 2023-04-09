#include<iostream>
using namespace std;
void pass(int *arr,int size);
int main()
{
    int arr[3]={1,3,2};
    pass(arr, 3);
}
void pass(int *arr,int size)
{
  for(int i=0;i<size;i++)
  { 
        cout<<arr[i];
    
  }
}