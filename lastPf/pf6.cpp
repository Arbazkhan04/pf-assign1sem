#include <iostream>
using namespace std;
void passArr(int arr[][3], int size);
int count = 0;
int main()
{

    int row = 13, col = 6;
    char arr[row][col] = {{'*', 'x', 'x', '.', '.', 'x'}, {'*', 'x', 'x', '.', '.', 'x'}, {'*', 'x', 'x', '.', '.', 'x'}, {'*', 'x', 'x', '.', '.', 'x'}, {'*', 'x', 'x', '.', '.', 'x'}, {'*', 'x', 'x', '.', '.', 'x'}, {'*', 'x', 'x', '.', '.', 'x'}, {'*', 'x', 'x', '.', '.', 'x'}, {'*', 'x', 'x', '.', '.', 'x'}, {'*', 'x', 'x', '.', '.', 'x'}, {'*', 'x', 'x', '.', '.', 'x'}, {'*', 'x', 'x', '.', '.', 'x'}, {'*', 'x', 'x', '.', '.', 'x'}};
    int BusinessSeat;
    int DesieredRow, DesiredCol;
    cout << "Enter type Seats ";
    cin >> BusinessSeat;
    cout << "Enter row Seats ";
    cin >> DesieredRow;
    cout << "Enter col Seats ";
    cin >> DesiredCol;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (BusinessSeat <= 2)
            {
                if (i == DesieredRow && j == DesiredCol)
                {
                    if (arr[i][j] == '*')
                    {
                        cout << "Seat is availabe ";
                    }
                    else if (arr[i][j] == 'x')
                    {
                        cout << "Seat is not availabe ";
                    }
                }
            }
            else if (BusinessSeat > 3 && BusinessSeat <= 7)
            {
                if (i == DesieredRow && j == DesiredCol)
                {
                    if (arr[i][j] == '*')
                    {
                        cout << "Seat is availabe ";
                    }
                    else if (arr[i][j] == 'x')
                    {
                        cout << "Seat is not availabe ";
                    }
                }
            }
            else if (BusinessSeat > 7 && BusinessSeat <= 13)
            {
                if (i == DesieredRow && j == DesiredCol)
                {
                    if (arr[i][j] == '*')
                    {
                        cout << "Seat is availabe ";
                    }
                    else if (arr[i][j] == 'x')
                    {
                        cout << "Seat is not availabe ";
                    }
                }
            }
        }
    }
}