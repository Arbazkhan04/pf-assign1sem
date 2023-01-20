#include <iostream>
using namespace std;

void leftAstrick(int);
void rightAstirck(int);

int main()
{

    leftAstrick(3);
}

void leftAstrick(int rightAstrick)
{
   for(int i=rightAstrick;i>0;i--)
   {
    for(int j=i;j>0;j--)
    {
        cout<<"@";
    }
    cout<<endl;
   }
for(int i=0;i<rightAstrick;i++)
  {
    for(int j=0;j<=i; j++)
    {
        cout<<"*";
    }
    cout<<endl;
    
   }


}
