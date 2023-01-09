#include<iostream>
#include<string>
using namespace std;
int main()
{
    int price;
    string brand;
    cout<<"Enter price ";
    cin>>price;
    cout<<"Enter brand ";
    cin>>brand;
    if(price<=1500 && brand=="breakout")
    {
        cout<<"buy the  dess "<<endl;
    }
    else
    {
        cout<<"Do not buy the dress"<<endl;
    }
}