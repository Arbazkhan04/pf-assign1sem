/*Write a C++ program that is Given two strings, find the number of common characters
between them and then prints that count.*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int count=0;
 string s1,s2; 
 cout<<"Enter first string ";
 cin>>s1;
 cout<<"Enter second string ";
 cin>>s2;
 int s1Lenght=s1.length();
 int s2Lengh=s2.length();
 for(int i=0;i<s1Lenght;i++)
 {
    for(int j=0;j<s2Lengh;j++)
    {
        if(s1[i]==s2[j])
        {
            count++;
            s2[j]=' ';
            break;
        }
    }
 }
 cout<<count;
 
}