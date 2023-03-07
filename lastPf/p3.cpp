#include <iostream>
using namespace std;
void passArr(int arr1[], int arr2[], int arr3[], int size1, int size2);
int main()
{
    int size = 3;
    int size2 = 6;
    int arr1[size] = {1, 2, 3};
    int arr2[size] = {2, 3, 4};
    int arr3[size2];
    passArr(arr1, arr2, arr3, size, size2);
    for (int i = 0; i < size2; i++)
    {
        cout << arr3[i];
    }
}
void passArr(int arr1[], int arr2[], int arr3[], int size1, int size2)
{
    
    for (int j = 0; j < size1; j++)
    {
        arr3[j] = arr1[j];
       
    }
    for(int i=0;i<size1;i++)
    {
        arr3[size1+i]=arr2[i];
    }
}