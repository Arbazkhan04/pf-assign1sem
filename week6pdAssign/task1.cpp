#include<iostream>
#include<string>
using namespace std;
string play(string,string);
int main()
{
  string tem,humidity;
  cin>>tem>>humidity;
  string result=play(tem,humidity);
  cout<<result;
}
string play(string tem,string humidity)
{
    string finalResult;
    if(tem=="warm" && humidity=="dry")
      finalResult="play tennis";
     else if(tem=="warm" && humidity=="humid")
    finalResult=="swim";
     else if(tem=="cold" && humidity=="dry")
    finalResult=="play basketball";
      else if(tem=="cold" && humidity=="humid")
    finalResult=="watch tv";
    return finalResult;

}
