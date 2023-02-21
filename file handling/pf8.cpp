// Task 08(OP): Write a program that read text file character by character and display total
// number of characters in the file.
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream file;
    file.open("example.txt",ios::in);
    char t;int count=0;
    while(file>>t)
    {
        count++;    }
    file.close();
    cout<<count;
}
