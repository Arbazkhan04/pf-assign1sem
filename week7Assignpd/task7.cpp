#include<iostream>
using namespace std;
void calculate(int);
int main()
{
int n;
    cout<<"Enter number";
    cin>>n;
    calculate(n);
}
void calculate(int number)
{
    int p1=0,p2=0,p3=0;
    for(int i=number;i>0;i--)
    {
        int isCheck;
        cout<<"Enter a number";
        cin>>isCheck;
        if(isCheck%2==0)
        {
            p1++;
        }
        else if(isCheck%3==0)
        {
            p2++;
        }
        else if(isCheck%4==0)
        {
            p3++;
        }
    }
    float percentageForp1=(p1*100)/10.0;
    cout<<percentageForp1<<endl;
      float percentageForp2=(p2*100)/10.0;
    cout<<percentageForp2<<endl;
      float percentageForp3=(p3*100)/10.0;
    cout<<percentageForp3<<endl;
}