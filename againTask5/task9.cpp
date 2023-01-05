#include<iostream>
using namespace std;
int main()
{
    int a=12;
//    int b = a%10;
//    cout<<b;

    if(a%10==a)
    {
     if(a==1)
        cout<<"one";
     if(a==2)
        cout<<"two";
        if(a==3)
        cout<<"three";
        if(a==4)
        cout<<"four";
        if(a==5)
        cout<<"five";
        if(a==6)
        cout<<"six";
         if(a==7)
        cout<<"seven";
         if(a==8)
        cout<<"eight";
        if(a==9)
            cout<<"nine";  
    }

    if(a<=99)
    {
      int dev1=a/10;
      int rem1=a%10;
      cout<<dev1;
      cout<<rem1<<endl;
      if(dev1)
      {
        // cout<<dev1;
        if(dev1==1)
        cout<<"one";
        if(dev1==2)
        cout<<"two";
      }
      if(rem1)
      {
        if(rem1==2)
        cout<<"Two";
      }
      
    }
}