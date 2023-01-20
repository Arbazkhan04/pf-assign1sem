#include<iostream>
using namespace std;
int gcf(int ,int );
int lcm(int ,int,int);
int main()
{
  int n1,n2;
  cout<<"Enter number 1";
  cin>>n1;
   cout<<"Enter number 2 ";
  cin>>n2;
  int resultForGcf=gcf(n1,n2);
  int resultForLcm=lcm(n1,n2,resultForGcf);
  cout<<"lowest common facotor is "<<resultForLcm<<endl;
  cout<<"highest common facotor is"<<resultForGcf;


}
int gcf(int n1,int n2 )
{
    int largest=0;
  if(n1>n2)
  {
    for(int i=1; i<=n2; i++)
    
    {
       if (n1%i==0 && n2%i==0)
    {
        largest=i;
    }
    }
    
  }
  else if(n1<n2)
  {
    for(int i=1; i<=n1; i++)
    
    {
       if (n1%i==0 && n2%i==0)
    {
        largest=i;
    }
    }
  }
  return largest;
}
int lcm(int n1,int n2,int gcf)
{
   int result=0;
   result=(n1*n2)/gcf;
   return result;

}