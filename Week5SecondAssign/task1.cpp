#include<iostream>
using namespace std;
#include<string>
int pyramidVolume(int lenght,int height,int width);
float finalResult;
int main()
{
  int lenght,height,widht;
  string toConvert;
  cout<<"Enter Converter";
  cin>>toConvert;
  cout<<"Enter lenght";
  cin>>lenght;
    cout<<"Enter height";
  cin>>height;
    cout<<"Enter width";
  cin>>widht;
  int result=pyramidVolume(lenght,height,widht);
  cout<<result;
  if(toConvert=="centimeter")
  {
    finalResult=result/1000000;
    cout<<finalResult;
  }
  
}
int pyramidVolume(int lenght,int height,int width)
{
   return (lenght*width*height )/3;
}