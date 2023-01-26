#include <iostream>
using namespace std;
int iteraionKarkar(int n);
int karkar(int n);
int main()
{
    int n1;
    cout << "Enter a numebr";
    cin >> n1;
    iteraionKarkar(n1);
    int  result=karkar(n1);
    cout<<result;

}

int iteraionKarkar(int n)
{
    int totalNump = n * n;
    int count = 0;
    int iteration = 0;
    while (totalNump > 0)
    {
        int rem = totalNump % 10;
        totalNump = totalNump / 10;
        iteration++;
    }
    return iteration;
}
int karkar(int n)
{
    int result = iteraionKarkar(n);
    if (result <= 2)
    {
        int totalNump = n * n;
        int count = 0;
    
        while (totalNump > 0)
        {
            int rem = totalNump % 10;
            totalNump = totalNump / 10;
            count = count + rem;
        }
    }
    else if (result > 0)
    {
        int totalNump = n * n;
        int count = 0;
            int rem = totalNump % 1000;
            totalNump = totalNump / 100;
        
      int total=rem+totalNump;
      return total;
    }
}