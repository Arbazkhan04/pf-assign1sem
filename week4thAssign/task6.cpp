#include<iostream>
using namespace std;
void isEligible(int age);
int main()
{
int age;
while(true)
{
cout<<"Enter your age ";
cin>>age;
isEligible(age);
}


}


void isEligible(int age)
{
if(age>=18)
{
  cout<<"you are eligile to vote "<<endl;
}
if(age<18)
{
  cout<<"you are not eligile to vote "<<endl;
}

}
