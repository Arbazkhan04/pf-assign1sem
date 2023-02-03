#include<iostream>
using namespace std;
int  main()
{
    string fruits[4]={"prach","apple","mango","banana"};
    int price[4]={12,13,53,544};
    string fruitforSearc;
    int quantity;
    cout<<"Enter quantity";
    cin>>quantity;
    cout<<"Enter fuit name";
    cin>>fruitforSearc;
    for(int i=0;i<4;i++)
    {
        if(fruitforSearc==fruits[i])
        {
          int total=price[i]*quantity;
          cout<<total<<" Bill";
        }
    }

}