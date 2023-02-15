#include <iostream>
using namespace std;
int main()
{
    // char hel2[10] = {' ', ' ', ' ', '_', '_', '_', ' ', ' ', ' '};
    // char hel1[10] = {'}', '-', '|', '_', '_', '_', '|', '-', '>'};
    // cout<<endl;
    // for (int i = 0; i < 9; i++)
    // {
    //     cout << hel2[i];
    // }
    // cout << endl;
    // for (int i = 0; i < 9; i++)
    // {
    //     cout << hel1[i];
    // }
    // sorting algorithm 
    int arr[5]={3,45,64,232,2};
    for(int i=0;i<5;i++)
    {
        int tem;
        for(int j=i;j<5;j++)
        {
            if(arr[i]>arr[j])
            {
              tem=arr[i];
              arr[i]=arr[j];
              arr[j]=tem;
            }
        }
        
    }
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
}