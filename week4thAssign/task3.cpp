#include<iostream>
using namespace std;
void multiply(int number,int number2);
void add(int number1,int number2);
void sutraction(int number1,int number2);
int main()
{
char oper;
cout<<"Enter operator";
cin>>oper;

int n1,n2;
cout<<"Enter no:1 ";
cin>>n1;
cout<<" Enter no:2 ";
cin>>n2;
if(oper == '+')
   {
    add(n1,n2);
    }
if(oper == 'x')
  {
   multiply(n1,n2);

   }
if(oper == '-')
  {

   sutraction(n1,n2);
  }

}




void add(int number1,int number2)
{
int sum = number1+number2;
cout<<sum<<endl;
}

void multiply(int number1,int number2)
{
int multiply=number1*number2;
cout<<multiply<<endl;
}
void sutraction(int number1,int number2)
{
int sub=number1-number2;
cout<<"sub is :"<<sub;
}

