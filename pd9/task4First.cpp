// Write a program that takes an array of numbers as input from the user and then prints
// "Boom!" if the digit 7 appears in the array. Otherwise, print "there is no 7 in the array".
#include<iostream>
#include<iostream>
using namespace std;
int main()
{
    bool flag=false;
 int size;
 cout<<"Enter size fo array ";
 cin>>size;
 string arr[size];
 for(int i=0;i<size;i++)   
 {
    cout<<"Enter a number ";
    cin>>arr[i];
    
 }
 string tem;
 for(int i=0;i<size;i++)
 {
    // int j=0;
     tem=arr[i];
     for(int j=0;tem[j]!='\0';j++)
     {
       if(tem[j]=='7')
       {
        flag=true;
       }
     }
    
 }
 if(flag==true)
 {
    cout<<"Boom";
 }
 else 
 {
    cout<<"Not Bomm";
 }
}
 