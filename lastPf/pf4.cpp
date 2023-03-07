#include <iostream>
using namespace std;
void passArr(int arr[], int size);
int main()
{
    int size = 9;
    int arr[size] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    passArr(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
    }
}
void passArr(int arr[], int size)
{
    int n;
    cout << "Enter roation for the array ";
    cin >> n;
    int temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < size-1; j++)
        {
            temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
        }
    }
}