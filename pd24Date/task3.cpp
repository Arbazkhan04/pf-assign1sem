#include<iostream>
#include<fstream>
using namespace std;
int main()
{
   fstream file;
   file.open("tast3.txt",ios::in);
   string name;
   char comma=',';
   string number;
   while(!file.eof())
   {
     file>>name;
   } 
   file.close(); 
   int idx=0;
   string newName;
   while(name[idx]=='\0')
   {
     if(name[idx]!=comma)
     {
        newName=newName+name[idx];
     }
   }
   cout<<newName;

}