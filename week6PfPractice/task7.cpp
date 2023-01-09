#include<iostream>
using namespace std;
string myFun(int age,char gender );
int main()
{
   int age;
   char gender;
   cout<<"Enterr age";
   cin>>age;
   cout<<"Enter gender";
   cin>>gender;
   string result=myFun(age,gender);
   cout<<result;
}
string myFun(int age,char gender )
{
     string gender2;
    if(age>=16 && gender=='m')
    { 
     gender2="Mr";
    }
    else if(age<16 && gender=='m')
    { 
     gender2="Master";
    }
      else if(age>=16 && gender=='f')
    { 
     gender2="Ms";
    }
     else if(age<16 && gender=='f')
    { 
     gender2="Miss";
    }
   return gender2;

}
