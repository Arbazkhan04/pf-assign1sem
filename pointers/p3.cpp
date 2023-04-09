#include <iostream>
using namespace std;
bool checkDiagoanl(int arr[][3], int size);
bool checkNonDiagonal(int arr[][3], int size);
int main()
{
    int arr[3][3] = {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}};
    bool r1 = checkDiagoanl(arr, 3);
    bool r2 = checkNonDiagonal(arr, 3);
    if (r1 && r2)
    {
        cout << "identical matrix";
    }
    else{
        cout<<"not identical";
    }
}
bool checkDiagoanl(int arr[][3], int size)
{
    int count = 0;
    int j = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i][j] == 1)
        {
            count++;
            j++;
        }
    }
    if (count == 3)
    {
        return true;
    }
    return false;
}
bool checkNonDiagonal(int arr[][3], int size)
{
    int dontIterate = 0;
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (j != dontIterate)
            {
                if (arr[i][j] == 0)
                {
                    count++;
                }
            }
        }
        dontIterate++;
    }
    if (count % 2 == 0)
    {
        return true;
    }
    return false;
}