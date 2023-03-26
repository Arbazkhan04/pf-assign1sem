#include <iostream>
using namespace std;
bool isIdentical(int arr[][3], int size1, int arr2[][3], int size2);
int main()
{
    int row = 3, col = 3;
    int arr[row][col] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int arr2[row][col] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int size1 = 3, size2 = 3;
    if (isIdentical( arr,  size1,  arr2,  size2))
    {
        cout << "yes";
    }
}

bool isIdentical(int arr[][3], int size1, int arr2[][3], int size2)
{
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size1; j++)
        {
            if (arr[i][j] != arr2[i][j])
            {
                return false;
            }
        }
    }
    return true;
}