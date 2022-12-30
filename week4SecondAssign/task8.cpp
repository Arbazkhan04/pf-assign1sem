#include<iostream>
using namespace std;
void isEqual(int n1,int n2);
int main()
{
    int n1,n2;
    cout<<"Enter Number 1";
    cin>>n1;
    cout<<"Enter Number 2";
    cin>>n2;
  
     isEqual(n1,n2);
   
   
   

}

void isEqual(int n1,int n2)
{
  if (n1==n2){
     cout<<"True";
  }
  else
  {
    cout<<"False";
  }
 
  
}