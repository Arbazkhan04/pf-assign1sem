#include<iostream>
using namespace std;
void ampilfy(int);
int main()
{
    int n1;
    cout<<"Enter number";
    cin>>n1;

ampilfy(n1);
}
void ampilfy(int num)
{
    for(int i=1;i<=num;i++)
    {
        if(i%4==0)
        {
            cout<<i*10<<",";
            continue;
        }
        cout<<i<<",";
    }
}