#include<iostream>
#include<string>
using namespace std;
int  main()
{
    string character;
    cout<<"Enter yes or no";
    cin>>character;
    while(character=="yes"){
        cout<<"Enter again";
        cin>>character;
    }
}