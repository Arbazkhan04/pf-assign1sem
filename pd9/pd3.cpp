#include<iostream>
using namespace std;
int main() 
{
  string name;
  cout<<"Enter a name";
  cin>>name;
  int lenght=name.length();
//   cout<<lenght;
  if(lenght%2==0)
  {
    cout<<"true";
  }
    else if (lenght%2!=0)
  {
    cout<<"false";
  }
}

