#include<iostream>
using namespace std;
int main()
{
  string first="abcde";
  string seconde="ab";
  for(int i=0;i<seconde.length();i++)
  {
    for(int j=0;j<first.length();j++)
    {
      if(first[j]==seconde[i])
      {
        for(int i=0;i<first.length();i++)
        {
          first[j]=first[j+1];
        }
        
      }
    }
  }
for(int i=0;i<first.length();i++)
{
  cout<<first[i];
}

}
