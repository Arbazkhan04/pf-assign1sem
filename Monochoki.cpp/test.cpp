#include <iostream>
using namespace std;
int main()

{ 
    char box = 219;
    char tank1[6]={' ','^',' '};
    char tank2[6]={' ','i',' '};
    char tank3[6] = { box, box, };
    char tank4[6] = { box, box,};
    for(int i=0;i<6;i++)
    {
        cout<<tank1[i];
    }
    cout<<"\n";
    for(int i=0;i<6;i++)
    {
        cout<<tank2[i];
    }
    cout<<"\n";
    for(int i=0;i<6;i++)
    {
        cout<<tank3[i];
    }
    cout<<"\n";
    for(int i=0;i<6;i++)
    {
        cout<<tank4[i];
    }
    cout<<"\n";



    
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
}