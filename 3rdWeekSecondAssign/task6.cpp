#include<iostream>
using namespace std;
int main()
{
int sizeFertilizer,bagCost,areaSquareFeet,costOfTheFertilizerPerPound,fertilizerAreaPerPound;
cout<<"Enter size in pounds";
cin>>sizeFertilizer;
cout<<"Enter cost of the bag";
cin>>bagCost;
cout<<"Enter area covered by the each abg in square feet";
cin>>areaSquareFeet;

costOfTheFertilizerPerPound=bagCost/areaSquareFeet;

fertilizerAreaPerPound=sizeFertilizer*areaSquareFeet*2;
cout<<"The cost fo the fertilizer per pound :"<<fertilizerAreaPerPound;
cout<<"The cost of the fertilizing the are per square feet : "<<costOfTheFertilizerPerPound;

}
