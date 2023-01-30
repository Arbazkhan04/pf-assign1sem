#include <iostream>
#include <string>
using namespace std;
int main()
{
    string word;
    cout << "enter a word";
    getline(cin, word);
    int i = 0;
    while (word[i] != '\0')
    {

        i++;
    }
    char name;
    cout<<"Enter a letter";
    cin>>name;
    if(name==word[i-1])
    {
        cout<<"yes match";
    }

    
}