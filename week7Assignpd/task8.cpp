#include <iostream>
using namespace std;
void cargo(int);
int main()
{
    int n;
    cout << "Enter a number";
    cin >> n;
    cargo(n);
}
void cargo(int n)
{
      int bus = 0;
        int truck = 0;
        int train = 0;
        int sum = 0;
        float busPer;
        float truckPer;
        float trainPer;
        float averagePrice;
    while (n > 0)
    {
        int num2;
        cout << "Enter a number";
        cin >> num2;
        if (num2 > 0 && num2 <= 3)
        {
            bus = bus + num2;
        }
        else if (num2 > 3 && num2 < 11)
        {
            truck = truck + num2;
        }
        else if (num2 > 11)
        {
            train = train + num2;
        }
        n--;
     }
        sum = sum + bus + truck + train;
        cout << "Sum" << sum << endl;
        busPer = (bus * 100) / 25;
        cout << "bas per" << busPer << endl;
        truckPer = (truck * 100) / 25;
        cout << "truck per" << truckPer << endl;
        trainPer = (train * 100) / 25;
        cout << "Train per" << trainPer << endl;
        averagePrice = ((bus * 200) + (truck * 175) + (train * 120)) / sum;
        cout << "Average peirce" << averagePrice;
    
}