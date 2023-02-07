/*When coloring a striped pattern, you may start by coloring each square sequentially,
meaning you spend time needing to switch coloring pencils.
Create a program where given an array of colors cols, it prints how long it takes to color
the whole pattern.*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int colSize,timeTakenByPencil=0;
    cout<<"Enter the color size ";
    cin>>colSize;
    string colorArr[colSize];
    for(int i=0;i<colSize;i++)
    {
        cout<<"enter a string ";
        cin>>colorArr[i];
    }

    for(int i=0;i<colSize-1;i++)
    {
        int j=1+i;
        if(colorArr[i]!=colorArr[j])
        {
              timeTakenByPencil++;
        }
       
       
    }
    cout<<timeTakenByPencil+(colSize*2);


}