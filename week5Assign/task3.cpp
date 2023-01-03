#include<iostream>
using namespace std;
int maximum(int , int );
int main()
{
  int n1,n2;
  cout<<"No.1";
  cin>>n1;
  cout<<"No.2 ";
  cin>>n2;
  int result=maximum(n1,n2);
  cout<<result<<"is greater ";
}
int maximum(int num1,int num2)
{
    if(num1>num2)
    {
      return num1;
    }
    else{
        return num2;
    }
    return 0;
}