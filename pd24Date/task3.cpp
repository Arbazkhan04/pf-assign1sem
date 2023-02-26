#include <iostream>
#include <fstream>
void getBithdayCake(string name2, int no1, char symbol);
using namespace std;
int main()
{
  fstream file;
  file.open("tast3.txt", ios::in);
  string line;
  getline(file, line);
  file.close();
  int commmaCount = 1;
  string no;
  string name;
  for (int i = 0; i < line.length(); i++)
  {
    if (line[i] == ',')
    {
      commmaCount++;
    }
    else if (commmaCount == 1)
    {
      name = name + line[i];
    }
    else if (commmaCount == 2)
    {
      no = no + line[i];
    }
  }

  int newNum = stoi(no);
  if (newNum % 2 == 0)
  {
    char newSy = '#';
    getBithdayCake(name, newNum, newSy);
  }
  else if (newNum % 2 != 0)
  {
    char newSy = '*';
    getBithdayCake(name, newNum, newSy);
  }
}
void getBithdayCake(string name2, int no1, char symbol)
{

  for (int i = 0; i < 15; i++)
  {
    cout << symbol;
  }
  for (int i = 0; i < 1; i++)
  {
    cout << symbol;
    cout << no1;
    cout << "HB";
    cout << name2;
    cout << "!";
    cout << no1;
  }
  for (int i = 0; i < 15; i++)
  {
    cout << symbol;
  }
}