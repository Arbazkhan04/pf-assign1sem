#include <iostream>
#include <string>
using namespace std;
int main()
{
    int vowel = 0;
    string word;
    cout << "enter a word";
    getline(cin, word);
    int i = 0;
    while (word[i] != '\0')
    {
        if(word[i]=='u' || word[i]=='u'|| word[i]=='u' || word[i]=='u'|| word[i]=='u' || word[i]=='u')
        {
        vowel++;                                                    
        }
        i++;
    }
    cout<<vowel;
}