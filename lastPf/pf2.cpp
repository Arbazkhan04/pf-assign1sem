// pass array into function
#include<iostream>
using namespace std;
void passValue(int arr[][3],int size);
int main()
{
    int size=3;
    int arr[size][size]={{1,2,3},{1,2,3},{1,2,3}};
    passValue(arr,size);
}
void passValue(int arr[][3],int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
             cout<<arr[i][j]<<" ";
        }
     
    }
}