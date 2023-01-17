#include<iostream>
using namespace std;
int checker(int number,int digit);
int main()
{
    int n1;
    int digit;
    cout<<"Enter nyumber";
    cin>>n1;
    cout<<"Enter digit";
    cin>>digit;
    int result=checker(n1,digit);
    cout<<result;

}
int checker(int number,int digit)
{
    int count=0;
    while(number>0)
    {
        
        int rem=number%10;
         number=number/10;
       
        if(rem==digit){
            count++;
          
        }
        
            
        
       

    }
    return count;
}