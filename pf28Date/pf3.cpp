#include <iostream>
#include <string>
int sum(int);
using namespace std;
int isIdentical[4][3] = {{1, 1, 2}, {1, 1, 2}, {1, 1, 1}, {1, 1, 1}};
int main()
{
    int row1 = sum(0);
    int row2 = sum(1);
    int row3 = sum(2);
    int row4 = sum(3);
    cout<<row1;
    int row1Mat = 0;
    int row2Mat = 0;
    int row3Mat = 0;
    int row4Mat = 0;

    if (row1 == row2)
    {
        row1Mat++;
    }
    if (row1 == row2)
    {
        row1Mat++;
    }
    if (row1 == row3)
    {
        row1Mat++;
    }
    if (row1 == row4)
    {
        row1Mat++;
    }
    cout<<row1Mat;
}

int sum(int row)
{
    int result;
    for (int i = 0; i < 3; i++)
    {
        result=result+ isIdentical[row][i];
    }
    return result;
}