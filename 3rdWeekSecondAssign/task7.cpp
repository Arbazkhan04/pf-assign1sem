#include<iostream>
#include<string>
using namespace std;
int main()
{
string movieName;
int adultTicketPrice,childTicketPrice,adultSoldTicket,childSoldTicket,percentageDenote,totalAmount,amountAfterDenotion;
cout<<"Enter movie Name :";
cin>>movieName;
cout<<"Enter adult ticket price ";
cin>>adultTicketPrice;
cout<<"Enter child ticket price ";
cin>>childTicketPrice;
cout<<"Enter number of adult ticket sold";
cin>>adultSoldTicket;
cout<<"Enter number of child ticket sold";
cin>>childSoldTicket;
cout<<"enter percentage to denote ";
cin>>percentageDenote;
totalAmount=(adultTicketPrice*adultSoldTicket)+(childTicketPrice*childSoldTicket);
amountAfterDenotion=totalAmount-(totalAmount*0.1);

cout<<"Total amount generated"<<totalAmount<<endl;
cout<<"Amount denotion"<<amountAfterDenotion;
}
