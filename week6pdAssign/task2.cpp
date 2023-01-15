#include<iostream>
using namespace std;
int grade(int number);
int main()
{
  int number;
  cin>>number;
  int result=grade(number);
  cout<<result;
}
int grade(int number)
{
    char grade;
    char result=grade;
    if(number>50 && number<60)
        grade='F';
    else if(number<50)
       grade='E';
    else if(number>=61 && number<=70)
        grade='D';
    else if(number>=71 && number<=80)
         grade='C';
    else if(number>=81 && number<=85)
       grade='B';
    else if(number>85)
      grade='A';
    else
    grade='F';

    return result;
}
