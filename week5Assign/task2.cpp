#include<iostream>
float division(int ,int);
using namespace std;
int main()
{
    float a,b;
    cout<<"Enter number 1: ";
    cin>>a;
    cout<<"Enteer Number 2: ";
    cin>>b;
    float total=division(a,b);
    cout<<total;


}
float division(int num1,int num2)
{
    float result=num1/num2;
    return result;
}