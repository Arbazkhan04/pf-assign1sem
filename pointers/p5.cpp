#include<iostream>
using namespace std;
int main()
{
    int arr[3][3]={{1,0,4},{1,23,2},{1,1,4}};
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            arr[j][i]=arr[i][j];//make new two day array an doush all the elemetn into it  
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}