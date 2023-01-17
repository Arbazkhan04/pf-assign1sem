#include<iostream>
using namespace std;
void table(int number);
int main()
{
int n1;
cout<<"Enter a number";
cin>>n1;
int result=table(n1);
cout<<result;

}
void table(int number)
{
 for(int i=1;i<=10;i++)
{
    int table=number*i; 
    cout<<number <<"x"<< i<<"="<< table<<endl;
}
}
