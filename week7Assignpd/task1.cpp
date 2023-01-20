#include<iostream>
using namespace std;
void astrick(int);
int main()
{
  int n1;
  cout<<"Enter nujmber";
  cin>>n1;
  astrick(n1);
}
void astrick(int rows )
{
  for(int i=0;i<rows;i++)
  {
    for(int j=0;j<=i; j++)
    {
        cout<<"*";
    }
    cout<<endl;
  }
}