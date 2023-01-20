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
  for(int i=rows;i>0;i--)
  {
    for(int j=i;j>0; j--)
    {
        cout<<"*";

    }
    cout<<endl;
   
  }
}