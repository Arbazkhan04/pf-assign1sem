// Task 10(CP): You are assigned to develop a project in which the project manager wants
// the following functionalities.
// ● Create a file name student.txt in your Directory using the C++.
// ● Create a function that will ask the student's details from the console
// ● Create a separate function to save that information in the separate line of the file
// student.txt.
// Information contains:
// 1. Student Name
// 2. Student Age
// 3. Student Matric marks
// 4. Student Fsc marks
// 5. Ecat marks

#include<iostream>
#include<fstream>
using namespace std;
void saveStudent(string name,int age,string mMatric,string FscMark,string Ecat);
int main()
{
  string name, marks, mMatric,string ,FscMark, Ecat;
  int age;
  cout<<"Enter your name ";
  cin>>name;
  cout<<"Enter your age ";
  cin>>age;
  cout<<"Enter your Matric marks ";
  cin>>mMatric;
  cout<<"Enter your Fsc ";
  cin>>FscMark;
  cout<<"Enter your Ecat ";
  cin>>Ecat;
   saveStudent(name,age,mMatric,FscMark,Ecat);
}

void saveStudent(string name,int age,string mMatric,string FscMark,string Ecat)
{
    fstream file;
    file.open("student.txt",ios::out);
    file<<name<<age<<mMatric<<FscMark<<Ecat;
    file.close();
}