#include <iostream>
#include <string>
using namespace std;
int main()
{
    int count = 0;
    string word;
    cout << "enter a word";
    getline(cin, word);
    int i = 0;
    while (word[i] != '\0')
    {

        i++;
    }
    for(int j=i;j>=0;j--)
    {
      cout<<word[j];
    }
}