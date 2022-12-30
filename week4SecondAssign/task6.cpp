#include <iostream>
using namespace std;
void functionA();
void functionW();
void functionS();
void functionI();
int main()
{
    functionA();
    functionW();
    functionA();
    functionI();
    functionS();
}
void functionA()
{
    cout << "A"<<endl;
}
void functionW()
{
    cout << "W"<<endl;
}
void functionS()
{
    cout << "S"<<endl;
}
void functionI()
{
    cout << "I"<<endl;
}
