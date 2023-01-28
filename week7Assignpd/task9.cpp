#include<iostream>
using namespace std;
void pyramid(int);
int main()
{
    int n;
    cout<<"Enter number of row";
    cin>>n;
pyramid(n);
}
void pyramid(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        for(int l=(n-i);l>0;l--)
        {
            cout<<" ";
        }
        for(int r=(n-i);r>0;r--)
        {
            cout<<" ";
        }
        for(int m=i;m>0;m--)
        {
            cout<<"*";
        }
       
     cout<<endl;
    }
}