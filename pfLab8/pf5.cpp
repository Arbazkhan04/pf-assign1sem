#include <iostream>
using namespace std;
int main()
{
    bool already = false;
    int size;
    cout << "Enter size";
    cin >> size;
    int serarch;
    cout << "Enter a number For search";
    cin >> serarch;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter a number";
        cin >> arr[i];
        if (serarch == arr[i])
        {
            already = true;
            break;
        }
    }
    if (already == true)
    {
        cout << "Already exist";
    }
    else if (already == false)
    {
        cout << "not exist";
    }
}