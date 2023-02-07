#include<iostream>
#include<string>
using namespace std;
int  main()
{
    int pricePerMovie=500;
    float dicount;
    string movie[5]={"glaidator","starWars","terminator","takingLevis","tomRider"};
    string movieforSearc;
    cout<<"Enter fuit name";
    cin>>movieforSearc;
    
    for(int i=0;i<5;i++)
    {
      if(movieforSearc==movie[i])
      {
        if(i%2!=0)
        {
          dicount=pricePerMovie-(pricePerMovie*5/100); 
           cout<<"five percent discoutn"<<dicount;
        }
        else
        {
            dicount=pricePerMovie-(pricePerMovie*10/100);
            cout<<"ten percent discoutn"<<dicount;
        }

      }
    }

}