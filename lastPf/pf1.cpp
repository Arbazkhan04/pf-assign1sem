#include<iostream>
using namespace std;
void changeValue(int &value1,int &value2);
int main()
{
int number=10;
int number2=20;
changeValue(number,number2);
cout<<number;
cout<<number2;
}


void changeValue(int &value1,int &value2)
{
  value1++;
  value2++;
}

