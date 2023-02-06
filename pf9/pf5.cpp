#include<iostream>
using namespace std;
int multilple(int ,int ,int);
int main()
{
    int sum=0;
    int sizeOfBoxes;
    cout<<":Enter no of boxes..";
    cin>>sizeOfBoxes;
    int totalSize=sizeOfBoxes*3;
    int arr[sizeOfBoxes];
    int id=0;
    for(int i=1;i<=sizeOfBoxes;i++)
    {

       for(int j=0;j<3;j++)
       {
         cout<<"Enter a number";
         cin >>arr[id];

         id++;
       }
       
    }
    int index=0;
    for(int i=0;i<sizeOfBoxes;i++)
    {
      int sum=sum+multilple(arr[index],arr[index+1],arr[index+2]);
    }
    cout<<sum;


}
int multilple(int pre ,int curr ,int next)
{
    return pre*curr*next;
}