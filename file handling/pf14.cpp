// Write a function display_words() in c++ to read lines from a text file "story.txt", and
// display those words, which are less than 4 characters

#include<iostream>
#include<fstream>
using namespace std;
bool display_words(string);
int main()
{
  fstream file;
  string word;
  file.open("stduent.txt",ios::in);
  while(!file.eof())
  {
    file>>word;
    bool result=display_words(word);
    if(result==true)
    {
        cout<<word;
    }
    
  }
  file.close();
}
bool display_words(string word1)
{
  bool yes=false;
  if(word1.length()<4)
  {
    yes=true;
  }
  return yes;
 
}