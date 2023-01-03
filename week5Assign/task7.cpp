#include <iostream>
#include <cmath>
using namespace std;
float positiveValueForX(int, int, int);
int main()
{
    //     int a=5,b=6,c=1,powerOfB;

    //     float firstValueForX,secondValueForX,squareRoot;
    //     powerOfB=pow(b,2);
    //     int disc=powerOfB-(4*a*c);

    //    squareRoot=sqrt(disc);
    //    firstValueForX=(-b+squareRoot)/(2*a);
    //    cout<<firstValueForX<<endl;
    //      secondValueForX=(-b-squareRoot)/(2*a);
    //    cout<<secondValueForX<<endl;
    int a, b, c;
    cout << "Enter Value for a ";
    cin >> a;
    cout << "Enter Value for b ";
    cin >> b;
    cout << "Enter Value for c ";
    cin >> c;
    float resultForPositiveX = positiveValueForX(a, b, c);
    cout << resultForPositiveX;
}

float positiveValueForX(int a, int b, int c)
{
    int powerOfB;

    float firstValueForX, secondValueForX, squareRoot;
    powerOfB = pow(b, 2);
    int disc = powerOfB - (4 * a * c);

    squareRoot = sqrt(disc);
    firstValueForX = (-b + squareRoot) / (2 * a);
    //    cout<<firstValueForX<<endl;
    return firstValueForX;
}