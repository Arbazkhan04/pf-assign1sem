#include<iostream>
using namespace std;
void isEven(int number);
int main()
{
int number;
while(true)
{
  cout<<"Enter Number " ;
  cin>>number;
  isEven(number);
}

}

void isEven(int number)
{
if(number % 2==0)
  {
    cout<<"Event Number "<<endl;
  }
if(number % 2 !=0)
{
   cout<<"odd Number "<<endl;
}
}

