#include<iostream>
using namespace std;
void swap(int &a ,int &b);//pass by reference without pointer;
void swap2(int *ptr1,int *ptr2);//pass by reference with pointer 
int main()
{ 
  int a=10;
  int b=20;
  cout<<a<<b;
  swap(a,b);
  cout<<a<<b;
  swap2(&a,&b);
  cout<<a<<b;
}
void swap(int &a, int &b)
{
 int tep=a;
 a=b;
 b=tep;
}
void swap2(int *ptr1,int *ptr2)
{
 int temp=*ptr1;
 *ptr2=*ptr1;
 *ptr1=temp;
}