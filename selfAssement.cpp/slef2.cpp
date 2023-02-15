#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter the size";
    cin >> size;
    int arr1[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Number";
        cin >> arr1[i];
    }
    int tem;
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            if (arr1[i] < arr1[j])
            {
                tem = arr1[i];
                arr1[i] = arr1[j];
                arr1[j] = tem;
            }
        }
    }
    int smallest;
   cout<<"Enter nth smallest number";
   cin>>smallest;
   cout<<arr1[size-smallest];
}