// Write a program that reads the data from the students.txt file and stores the data of
// students in the topperStudents.txt.
#include<iostream>
#include<fstream>
using namespace std;
string name[3];
string pass[3];
int per[3];
int main()
{
    fstream file,file1;
    string name1,pass1;
    int per1;
    file.open("student2.txt",ios::in);
    int i=0;
    while(file>>name1>>pass1>>per1)
    {
      name[i]=name1;
      pass[i]=pass1;
      per[i]=per1;
      i++;
    }
    file.close();
    // for(int i=0;i<3;i++)
    // {
    //     cout<<name[i]<<" "<<pass[i]<<" "<<per[i]<<endl;
    // }

    file1.open("topperStudent.txt",ios::out);
    for(int i=0;i<3;i++)
    {
       if(per[i]>60) 
       {
         file1<<"Name: "<<name[i]<<"\n";
        
         file1<<"Adminssion Number: "<<pass[i]<<"\n";
        
         file1<<"Percentage :"<<per[i]<<"\n";
         

       }
    }
   file1.close();
}