#include<iostream>
#include<string>
using namespace std;
int main()
{
    int count=0;
    string word;
    cout<<"enter a word";
    getline(cin,word);
    int i=0;
    while(word[i]!='\0')
    {
        cout<<"The charachter is "<< word[i]<<" at index"<<i<<endl;
        i++;
        count++;
        
    }
    if(count%2==0)
    {
        cout<<"Even";
    }
    else if(count%2!=0){
        cout<<"fsle";
    }
}