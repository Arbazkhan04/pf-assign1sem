// Write a function in C++ to count the number of lines from a text file
// "story.txt" which is not starting with an alphabet "T".
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream file;
    file.open("story.txt",ios::in);
    string t;
    int count=0;
    while(!file.eof())
    {
       getline(file,t);
       if(t!="T")
       {
         count++;
       }
       
    }
    file.close();
    cout<<count;
    

    
}
