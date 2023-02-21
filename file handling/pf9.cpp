// Task 09(OP): Write a program that calculates the frequency of character in file
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream file;
    file.open("example.txt",ios::in);
    char m,t;int count=0;
    cout<<"Enter the character for the frequency ";
    cin>>t;
    while(!file.eof())
    {
      file>>m;
      if(m==t)
      {
        count++;
      }
    }
    cout<<count++;
}