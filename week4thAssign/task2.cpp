#include<iostream>
using namespace std;
void printName(string name); //function prototype
int main()
{ 
string name;
string secondName;
cout<<"Enter Name ";
cin>>secondName;
printName(secondName);
name="khan";
printName(name);
printName("Arbaz");
}

void printName(string name)
{
cout<<"My name is "<<name;
}
