#include <iostream>
using namespace std;


void rightAstirck(int);

int main()
{
int n;
cout<<"Enter a number";
cin>>n;

    rightAstirck(n);
}

void rightAstirck(int rightAstrick)
{
    

   for(int i=1; i<=rightAstrick;i++)
   {
   

    for(int s=(rightAstrick-i);s>0;s--)
    {
        cout<<" ";
    } 
    for(int j=1;j<=i;j++)
    {
        cout<<"*";
       
    }
    
    // for(int s=(rightAstrick-jEqualToM); s>0; s--)
    // {
    //     cout<<" ";
    //     jEqualToM--;
        
    // }
    // for(int r=rightAstrick;r>0;r--)
    // {
    //     cout<<"*";
    // }
    cout<<endl;
    for(int m=rightAstrick;m>0;m--)
    {
        for(int j=1;j<=m;j++)
        {
            cout<<"*";
        }

        // for(int k=(rightAstrick-m);k>0;k++)
        // {
        //     cout<<" ";
        // }
        cout<<endl;
    }
   }
   
   
 



}
