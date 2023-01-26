#include<iostream>
using namespace std;
int main()
{
    
    int n=3025;
    int rem=n%1000;
    n=n/100;
    int total=rem+n;
    cout<<total;
}