// Write a program that takes an array of numbers as input from the user and then prints
// "Boom!" if the digit 7 appears in the array. Otherwise, print "there is no 7 in the array".
#include<iostream>
using namespace std;
int main()
{
    int flag=false;
 int size;
 cout<<"Enter size fo array ";
 cin>>size;
 int arr[size];
 for(int i=0;i<size;i++)   
 {
    cout<<"Enter a number ";
    cin>>arr[i];
    
 }
  for(int i=0;i<size;i++)   
 {
    if(arr[i]==7)
    {
        flag=true;
        break;
    }
    else
    {
        flag=false;
    }
 }
 if(flag==true)
 cout<<"Boom";
 else if(flag==false)
 cout<<"Ther is no number 7 in array";
 
}