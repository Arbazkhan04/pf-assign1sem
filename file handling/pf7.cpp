// Task 07(OP): Write a program that read the text file line by line and display total number
// of lines on user screen.
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
 int count=0;
 fstream file;
 string word;
 file.open("example.txt",ios::in);
 while(  file>>word)
 {
  
    cout<<word<<endl;
    count++;
 }
 file.close();
 cout<<count;
}