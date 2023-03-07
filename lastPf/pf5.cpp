#include <iostream>
using namespace std;
void passArr(int arr[][3], int size);
int count=0;
int main()
{
    int size = 3;
    int arr[size][3] = {{1,0,3},{0,0,0},{3,2,0}};
    passArr(arr, size);
    int totalsizeOfMatrix=(size*size)/2;
    if(count>totalsizeOfMatrix)
    {
        cout<<"true";
    }
    else
    {
        cout<<"fasle";
    }

}
void passArr(int arr[][3], int size)
{
  
  for(int i=0;i<size;i++)
  {
    for(int j=0;j<size;j++)
    {
        if(arr[i][j]==0)
        {
          count++;
        }
    }
  }
}
