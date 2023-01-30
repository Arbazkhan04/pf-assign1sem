#include<iostream>
#include<string>
using namespace std;
int main()
{
    string word="abcdefghijklmnopqrstuvwxyz";
    string user;
    cout<<"enter a number";
    cin>>user;
    for(int i=0;i<=user.length();i++)
    {
        for(int j=0;j<=word.length();j++)
        {
            if(user[i]==word[j]){
                cout<<word[j+1];
            }
        }
    }


}
