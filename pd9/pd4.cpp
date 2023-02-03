// Create a program that checks in an array (slot machine outcome) and prints true if all
// elements in the array are identical, and false otherwise. The array will contain 4 elements.
#include <iostream>
using namespace std;
int main()
{
    bool flag=false;
    int arrSize;
    cout << "Enter the size of Array ";
    cin >> arrSize;
    string arr[arrSize];
    for (int i = 0; i < arrSize; i++)
    {
        cout << "Enter string ";
        cin >> arr[i];
    }
    for(int i = 0; i < arrSize; i++)
    {
        for(int j=0;j<arrSize;j++)
        {
            if(arr[j]!=arr[i] || arr[j].length()!=arr[i].length())
            {
              flag=false;
              break;
            }
            else if(arr[j]==arr[i])
            {
                flag=true;
            }
        

        }
    }
    if(flag==true)
    {
        cout<<"true";

    }
    else if(flag!=true)
    {
        cout<<"flase";
    }
}