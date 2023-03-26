#include<iostream>
using  namespace std;
int top=-1;
const int maxSize=10;
int arr[maxSize];
bool checkIsEmpty();
bool checkIsFulll();
void push(int);
int pop();
int peek();

int main()
{
  push(7);
  push(3);
  cout<<"top element "<<peek()<<endl;
  pop();
  cout<<"top element"<<peek();
  push(5);

}
void push(int x)
{
  if(checkIsFulll())
  {
    cout<<"stack is overFlow "<<endl;
  }
  arr[++top]=x;
}
int pop()
{
    if(checkIsEmpty())
    {
       cout<<"stack is underFlow";
       return -1;
    }
    return arr[top--];//top element of array with derecremct in top

}
bool checkIsEmpty()
{
    if(top==-1)
    {
        return true;
    }
    return false;

}
bool checkIsFulll()
{
    if(top==maxSize-1)//check stack is full
    {
       return  true;
    }
 return false;
}
int peek()
{
    if(checkIsEmpty())
    {
        return -1;
    }
    return arr[top];
}