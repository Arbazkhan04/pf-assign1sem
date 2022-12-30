#include <iostream>
using namespace std;
int main()
{
    int redRose, toulips, whiteRose, Result;
    cout << "Enter White Rose ";
    cin >> whiteRose;
    cout << "Enter red Rose ";
    cin >> redRose;
    cout << "Enter toulips Rose ";
    cin >> toulips;
    Result = redRose + toulips + whiteRose;
    if (Result > 200)
    {
        float discount = (Result * 20) / 100 - Result;
        cout << "original price" << Result;
        cout << "discount price" << discount;
    }
    if (Result < 200)
    {
        cout << Result;
    }
}