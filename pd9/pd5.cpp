/*Write a C++ program that performs an even-odd transform to an array, n times. One
even-odd transformation is*/
#include <iostream>
using namespace std;
int main()
{
    int arrSize, noOfTrans;
    cout << "Enter the Size of Array ";
    cin >> arrSize;
    cout << "Enter No. of transforamtion";
    cin>>noOfTrans;
    int arr[arrSize];
    for (int i = 0; i < arrSize; i++)
    {
        cout << "Enter index of array ";
        cin >> arr[i];
    }
    for (int i = 0; i < noOfTrans; i++)
    {
        for (int j = 0; j < arrSize; j++)
        {
            if (arr[j] % 2 == 0)
            {
                arr[j]=arr[j] - 2;
            }
            else if (arr[j] % 2 != 0)
            {
                arr[j]=arr[j] + 2;
            }
        }
    }
    for(int m=0;m<arrSize;m++)
    {
        cout<<arr[m]<<" ";
    }
}