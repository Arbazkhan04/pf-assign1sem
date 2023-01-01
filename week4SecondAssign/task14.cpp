#include <iostream>
#include <string>
using namespace std;
void printMenu();
void calculateAggregrate(string name, int matricMArks, int ecatMarks, int interMarks);
void compareStudent(string nameStd1, int ecatMarkStd1, string nameStd2, int ecatMarkStd2);
int main()
{
    printMenu();
    int givenNumber;
    cout << "Enter above Number ";
    cin >> givenNumber;
    switch (givenNumber)
    {
    case 1:
    {
        string name;
        int matricMArks, interMarks, ecatMarks;
        cout << "Enter Your Name ";
        cin >> name;
        cout << "Enter Your Matic  Marks ";
        cin >> matricMArks;
        cout << "Enter Your Inter Marks ";
        cin >> interMarks;
        cout << "Enter Your Ecat Marks ";
        cin >> ecatMarks;
        calculateAggregrate(name, matricMArks, interMarks, ecatMarks);
    break;
    }
    case 2:
    {
      string nameStd1, nameStd2;
    int ecatMarkStd1, ecatMarkStd2;
    cout << " Enter Your Name : ";
    cin >> nameStd1;
    cout << " Enter Your Name : ";
    cin >> nameStd2;
    cout << "Enter Your Ecat Marks : ";
    cin >> ecatMarkStd1;
    cout << "Enter Your Ecat Marks : ";
    cin >> ecatMarkStd2;
    compareStudent(nameStd1, ecatMarkStd1, nameStd2, ecatMarkStd2);
    break;
    }

    default:
        cout<<"Enter Only given number";
    }

    

    printMenu();
}

void printMenu()
{
    cout << "Select Any value from the below" << endl;
    cout << "Press 1 : For Calculate Your Aggregrate" << endl;
    cout << "Press 2 : To Compare A Marks " << endl;
}

void calculateAggregrate(string name, int matricMArks, int ecatMarks, int interMarks)
{
    int toMatric = 1100, toInter = 550, ecat = 400;
    float MatricPer, interPer, ecatPer;
    MatricPer = (((matricMArks * 100) / toMatric) * 30) / 100.0;
    // cout<<MatricPer;
    interPer = (((interMarks * 100) / toInter) * 30) / 100.0;
    // cout<<interPer;
    ecatPer = ((matricMArks * 100 / toMatric) * 40) / 100.0;
    // cout<<ecatPer;
    float totalAggregrate = MatricPer + interPer + ecatPer;
    cout << name << "Your Aggregrate is :" << totalAggregrate;
}

void compareStudent(string nameStd1, int ecatMarkStd1, string nameStd2, int ecatMarkStd2)
{
    if (ecatMarkStd1 > ecatMarkStd2)
    {
        cout << nameStd1 << "Your is marks is greater than " << nameStd2;
    }
    else
    {
        cout << nameStd2 << "Your is marks is greater than  " << nameStd1;
    }
}