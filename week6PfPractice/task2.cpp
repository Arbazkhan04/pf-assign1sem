#include<iostream>
using namespace std;
int myFum(int,int,int);
int main()
{
    int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    int result=myFum(a,b,c);
    cout<<result;

}


int myFum(int a,int b,int c)
{
    int greates;
   if(a>b && a>c)
   {
    greates=a;
   }
   else if(b>a && b>c)
   {
    greates=b;
   }
   else
   {
     greates=c;
   }
   return greates;
}