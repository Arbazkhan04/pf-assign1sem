#include<iostream>
using namespace std;
int main()
{
int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11,n12,n13,n14,n15,addFirst5Number,mulNext5Num,subNext5Num,addFirstTwoResultAndSubtract3rdResult;
cout<<"Enter Number 1 :";
cin>>n1;
cout<<"Enter Number 2 :";
cin>>n2;
cout<<"Enter Number 3 :";
cin>>n3;
cout<<"Enter Number 4 :";
cin>>n4;
cout<<"Enter Number 5 :";
cin>>n5;
cout<<"Enter Number 6 :";
cin>>n6;
cout<<"Enter Number 7 :";
cin>>n7;
cout<<"Enter Number 8:";
cin>>n8;
cout<<"Enter Number 9 :";
cin>>n9;
cout<<"Enter Number 10 :";
cin>>n10;
cout<<"Enter Number 12 :";
cin>>n12;
cout<<"Enter Number 13 :";
cin>>n13;
cout<<"Enter Number 14 :";
cin>>n14;
cout<<"Enter Number 15 :";
cin>>n15;
addFirst5Number=n1+n2+n3+n4+n5;
mulNext5Num=n6*n7*n8*n9*n10;
subNext5Num=n11-n12-n13-n14-n15;
addFirstTwoResultAndSubtract3rdResult=(addFirst5Number+mulNext5Num)-subNext5Num;
cout<<"Add first 5 Number is "<<addFirst5Number<<endl;
cout<<"mul next 5 Number is "<<mulNext5Num<<endl;
cout<<"sub next 5 Number is "<<subNext5Num<<endl;
cout<<"Result of addFirst5Number+mulNext5Num)-subNext5Num"<<addFirstTwoResultAndSubtract3rdResult;


}
