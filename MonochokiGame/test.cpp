#include <iostream>
#include <string>
#include <string.h>
#include <windows.h> // for sleep() function
void printTime(int, int, int);
int hour = 0;
int minute = 0;
int second = 0;
void gotoxy(int x, int y)
{
    COORD coordinate;
    coordinate.X = x;
    coordinate.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinate);
}
int main()

{
    // Check if the Ctrl key is currently being pressed
    bool a=true;
    while(a)
    {
        bool ctrlPressed = GetAsyncKeyState(VK_CONTROL) & 0x8000;

    if (ctrlPressed&&c)
    {
        std::cout << "Ctrl key is currently being pressed.\n";
    }
    else
    {
        std::cout << "Ctrl key is not currently being pressed.\n";
    }
    }

    return 0;
}


    // while (true)
    // {
    //     // Increment the second counter

    //     second++;

    //     // Update minute and hour as needed
    //     if (second == 60)
    //     {
    //         second = 0;

    //         minute++;
    //     }
    //     if (minute == 60)
    //     {
    //         minute = 0;

    //         hour++;
    //     }
    //     if (hour == 24)
    //     {
    //         hour = 0;
    //     }

    //     // Print the time
    //     gotoxy(5, 5);

    //     printTime(hour, minute, second);
    //     // Wait for 1 second
    //     Sleep(1000);
    // }

void printTime(int h, int m, int s)
{
    std::cout << h << ":" << m << ":" << s;
}

// cout<< "\033[31m" <<"    (@@)    "<<endl;
// cout<< "\033[31m" <<"   g_) (_e  "<<endl;
// cout<< "\033[31m" <<"   (=--=)   "<<endl;
// cout<< "\033[31m" <<"   _|  |_     "<<endl;
// cout << "\033[31m" << "This text is red" << endl;
// cout << "\033[33m" << "Your text in yellow color" << "\033[0m";
// cout << "\033[31m" << "Your text in red color" << "\033[0m";

// int x1=2,x2=3,y1=2,y2=3;
// int xDis=(x1-x2);
// int AxSquare=pow(xDis,2);
// int yDis=y1-y2;
// int AySquare=pow(yDis,2);
// int sum=AxSquare+AySquare;
// float sqare=sqrt(sum);
// cout<<sqare;

//     (@@)
//  g/\_)(_/\e
// g/\(=--=)/\e
//     //\\
//    _|  |_
//    _            _    _    _
// __( )__        ( )__( )__( )__( )__
// --. .--       .--. .--. .--. .--'
//  / _ \        / _ \/ _ \/ _ \/ _ \
    //  (/ \)        (/ \)(/ \)(/ \)(/ \)

// for(int i=0;i<=120;i++)
// {
//     cout<<"*";
// }
// cout<<endl;
// for(int i=0;i<6;i++)
// {
//     cout<<"*";
//     for(int j=0;j<119;j++)
//     {
//         cout<<" ";
//     }
//     cout<<"*"<<endl;
// }
// for(int i=0;i<=120;i++)
// {
//     cout<<"*";
// }

// char box = 219;
// char arr1[9] = {box, box,' ', ' ', ' ', ' ', ' ', ' ',' '};
// char arr3[9] = {box, box,' ', ' ', ' ', ' ', ' ', ' ', ' '};
// char enmeyTwoRightArr[7] = {box, box, box, box, box,'-','>'}
//      char upEnem0Arr[5]={' ',' ','^',' ',' '};
//         char upEnem1Arr[5]={' ',' ','|',' ',' '};
//      char upEnem2Arr[5]={' ',box,box,box,' '};
//      char upEnem3Arr[5]={' ',box,box,box,' '};
//      char upEnem4Arr[5]={' ',box,box,box,' '};
//      char upEnem5Arr[5]={box,box,' ',box,box};
//     cout << "\n";
//     for (int i = 0; i <5; i++)
//     {
//         cout << upEnem0Arr[i];
//     }

//     cout << "\n";
//     for (int i = 0; i < 5; i++)
//     {
//         cout << upEnem1Arr[i];
//     }

//     cout <<endl;
//     for (int i = 0; i <5; i++)
//     {
//         cout << upEnem2Arr[i];
//     }
//     cout <<endl;
//     for (int i = 0; i <5; i++)
//     {
//         cout << upEnem3Arr[i];
//     }
//     cout <<endl;
//     for (int i = 0; i <5; i++)
//     {
//         cout << upEnem4Arr[i];
//     }
//     cout <<endl;
//     for (int i = 0; i <5; i++)
//     {
//         cout << upEnem5Arr[i];
//     }

// }
// char arr[5]={'.','.'};
// for(int i=0;i<2;i++)
// {
//     cout<<arr[i]<<" ";
// }
// cout<<"\n";
// for(int i=0;i<2;i++)
// {
//     arr[i]=arr[i+1];
// }
// cout<<"\n";
// for(int i=0;i<2;i++)
// {
//   cout<<arr[i];
// }

// char box = 219;
// char arr1[9]={' ',' ',' ',' ',' ',' ',' ',box,box};
// char arr2[7]={'<','-',box,box,box,box,box};
//  char arr3[9]={' ',' ',' ',' ',' ',' ',' ',box,box};
//  for(int i=0;i<9;i++)
// {
//     cout<<arr1[i];
// }
// cout<<"\n";
// for(int i=0;i<7;i++)
// {
//     cout<<arr2[i];
// }
// cout<<"\n";
// for(int i=0;i<9;i++)
// {
//     cout<<arr3[i];
// }
// cout<<"\n";
// for(int i=0;i<6;i++)
// {
//     cout<<tank4[i];
// }
// cout<<"\n";
// char tank1[6]={' ','^',' '};
// char tank2[6]={' ','i',' '};
// char tank3[6] = { box, box, };
// char tank4[6] = { box, box,};
// for(int i=0;i<6;i++)
// {
//     cout<<tank1[i];
// }
// cout<<"\n";
// for(int i=0;i<6;i++)
// {
//     cout<<tank2[i];
// }
// cout<<"\n";
// for(int i=0;i<6;i++)
// {
//     cout<<tank3[i];
// }
// cout<<"\n";
// for(int i=0;i<6;i++)
// {
//     cout<<tank4[i];
// }
// cout<<"\n";

// string hel6[5] = {" ", " ", "↑" , " " , " "};

// char hel5[5] = {' ', ' ', '^' , ' ' , ' '};
// char hel5[5] = {' ', ' ', '^' , ' ' , ' '};
// char hel1[5] = {' ', '_', '_', '_', ' '};
// char hel2[5] = {'|', ' ', ' ', ' ', '|'};
// char hel3[5] = {'|', ' ', ' ', ' ', '|'};
// char hel4[5] = {' ', '-', '-', '-', ' '};

// cout << endl;
// // for (int i = 0; i < 5; i++)
// // {
// //     cout << hel6[i];
// // }
// // cout<<endl;
// for (int i = 0; i < 5; i++)
// {
//     cout << hel5[i];
// }
// cout<<endl;
// for (int i = 0; i < 5; i++)
// {
//     cout << hel1[i];
// }
// cout << endl;
// for (int i = 0; i < 5; i++)
// {
//     cout << hel2[i];
// }
// cout << endl;
// for (int i = 0; i < 5; i++)
// {
//     cout << hel3[i];
// }
// cout << endl;
// for (int i = 0; i < 5; i++)
// {
//     cout << hel4[i];
// }
// cout << endl;

// sorting algorithm
// int arr[5]={3,45,64,232,2};
// for(int i=0;i<5;i++)
// {
//     int tem;
//     for(int j=i;j<5;j++)
//     {
//         if(arr[i]>arr[j])
//         {
//           tem=arr[i];
//           arr[i]=arr[j];
//           arr[j]=tem;
//         }
//     }

// }
// for(int i=0;i<5;i++)
// {
//     cout<<arr[i]<<" ";
// }
