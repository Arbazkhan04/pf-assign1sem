#include<iostream>
#include<string>

using namespace std;
int myFun(string word,char letter);
int main()
{
    int size;
    int count=0;
       cout<<"Enter the words yopu want to enter..";
       cin>>size;
      string arr[size];
      for(int i=0;i<size;i++)
      {
        cout<<"Enter word..";
        cin>>arr[i];
      }
     
      string tem;
      for(int i=0;i<size;i++)
      {
         int index=0;
         tem=arr[i];
//          while(tem[index]!='\0')
//         {
//           if(tem[index]==searchingChar)
//           {
//            count++;
//           }
//           index++;
//         }
      }
//    cout<<count;
 
}

int myFun(string word,char letter)
{

}