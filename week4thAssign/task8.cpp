#include<iostream>
using namespace std;
void greaterNumber(int number1,int number2);
int main()
{
int n1,n2;
cout<<"Enter number1 ";
cin>>n1;
cout<<"Enter number2 ";
cin>>n2;
greaterNumber(n1,n2);

}

void greaterNumber(int number1,int number2)
{
  if(number1>number2)
  {
    cout<<number1<<" is greater"<<endl;
  }
  if(number1<number2)
  {
    cout<<number2<<" is greater "<<endl;
  }
}
