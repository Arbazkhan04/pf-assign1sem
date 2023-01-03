#include<iostream>
void add(int ,int);
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter number 1: ";
    cin>>a;
    cout<<"Enteer Number 2: ";
    cin>>b;
    add(a,b);


}
void add(int num1,int num2)
{
    int result=num1+num2;
    cout<<result;
}