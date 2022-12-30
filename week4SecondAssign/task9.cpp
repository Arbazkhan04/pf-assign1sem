#include<iostream>
#include<string>
using namespace std;
void trueFalseConverter(string toConvert);
int main()
{
  string toConvert;
  cout<<"Enter True or False in lower Case";
  cin>>toConvert;
  trueFalseConverter(toConvert);

}

void trueFalseConverter(string toConvert)
{
  if(toConvert=="false")
  {
     cout<<"True";
  }
  if(toConvert=="true"){
    cout<<"False";
  }
  else{
    cout<<"Enter only true of false in lower case";
  }
}