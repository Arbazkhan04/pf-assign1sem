#include <iostream>
using namespace std;
int main()

{
    char box = 219;
    // char arr1[9] = {box, box,' ', ' ', ' ', ' ', ' ', ' ',' '};
    // char arr3[9] = {box, box,' ', ' ', ' ', ' ', ' ', ' ', ' '};
    // char enmeyTwoRightArr[7] = {box, box, box, box, box,'-','>'}
     char upEnem0Arr[5]={' ',' ','^',' ',' '};
        char upEnem1Arr[5]={' ',' ','|',' ',' '};
     char upEnem2Arr[5]={' ',box,box,box,' '};
     char upEnem3Arr[5]={' ',box,box,box,' '};
     char upEnem4Arr[5]={' ',box,box,box,' '};
     char upEnem5Arr[5]={box,box,' ',box,box};
    cout << "\n";
    for (int i = 0; i <5; i++)
    {
        cout << upEnem0Arr[i];
    }
    
    cout << "\n";
    for (int i = 0; i < 5; i++)
    {
        cout << upEnem1Arr[i];
    }

    cout <<endl;
    for (int i = 0; i <5; i++)
    {
        cout << upEnem2Arr[i];
    }
    cout <<endl;
    for (int i = 0; i <5; i++)
    {
        cout << upEnem3Arr[i];
    }
    cout <<endl;
    for (int i = 0; i <5; i++)
    {
        cout << upEnem4Arr[i];
    }
    cout <<endl;
    for (int i = 0; i <5; i++)
    {
        cout << upEnem5Arr[i];
    }
   

}
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
