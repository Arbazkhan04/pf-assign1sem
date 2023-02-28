#include<iostream>
using namespace std;
int main()
{
    bool isTrue=true;
    int isIdenetity[3][3]={{1,0,0},{0,1,0},{0,0,1}};
    for(int i=0;i<3;i++)
    {
       for(int j=0;j<3;j++)
       {
        if(i==j && isIdenetity[i][j]!=1)
        {
            return isTrue=false;
        }
        if(i!=j && isIdenetity[i][j]==1)
        {
             return isTrue=false;
        }
        
       }

    }
    if(isTrue==false)
    {
        cout<<"Not identiyt";
    }
    else 
    {
        cout<<"Identiy ";
    }
}