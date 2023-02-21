#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    int count=0;
  fstream file;
  char line;
  file.open("example.txt",ios::in);
  while(!file.eof())
  {
     file>>line;
     count++;
  }
  file.close();
  cout<<count;
}