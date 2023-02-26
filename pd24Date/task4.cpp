#include <iostream>
#include <string>
#include <fstream>

void shiftIndex(int);

using namespace std;

int totalRemoveIndex = 0;
string alpha = "abcdefghijklmnopqrstuvwxyz";

int main()
{
    fstream file;
    string line = "mdc";
    string newStr = "abcdefghijklmnopqrstuvwxyz";

    file.open("alph.txt", ios::app);
    file << line;
   

    for (int i = 0; i < line.length(); i++)
    {
        for (int j = 0; j < newStr.length(); j++)
        {
            if (line[i] == newStr[j])
            {
                totalRemoveIndex++;
                shiftIndex(j);
            }
        }
    }

    for(int i=0;i<alpha.length()-totalRemoveIndex;i++)
    {
        file<<alpha[i];
    }
     file.close();
    return 0;
}

void shiftIndex(int index)
{
    for (int i = index; i < alpha.length() - totalRemoveIndex; i++)
    {
        alpha[i] = alpha[i + 1];
    }
}
