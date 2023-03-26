#include <iostream>
using namespace std;
void mergeArray(int arr1[][3],int arr2[][3],int arr3[][3]);
int main()
{
    int arr1[3][3] = {{1, 2, 3}, {4, 5,6}, {7,8,9}};
    int arr2[3][3] = {{10, 12, 13}, {22, 23, 21}, {32, 33, 31}};
    int arr3[6][3];
    mergeArray(arr1,arr2,arr3);
}
void mergeArray(int arr1[][3],int arr2[][3],int arr3[][3])
{
    int count=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            arr3[count][j]=arr1[i][j];
        }
        count++;
    }
     for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            arr3[count][j]=arr2[i][j];
        }
        count++;
    }
    for(int i=0;i<count;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr3[count][j]<<" ";
        }
        cout<<"\n";
    }
}