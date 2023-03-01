#include <iostream>
using namespace std;

string arr[5] = {"pant", "shirt", "blue", "pant", "blue"};

bool isDuplicate(int index) {
  for (int i = 0; i < index; i++) {
    if (arr[i] == arr[index]) {
      return true;
    }
  }
  return false;
}

int main() {
  for (int i = 0; i < 5; i++) {
    if (i == 0 || !isDuplicate(i)) {
      cout << arr[i] << " ";
    }
  }
  return 0;
}


// //     // int jn;
// //     // cout<<"Enter a number";
// //     // cin>>jn;
// //     // for(int i=0;i<jn;i++ )
// //     // {
// //     //     cout<<"Enter a number ";
// //     //     cin>>arr[i];
// //     // }
// //     // for(int i=0;i<99;i++)
// //     // {
// //     //     if(arr[i]!=0)
// //     //     {
// //     //         cout<<arr[i];
// //     //     }
// //     // }
// //     int n;
// //     while(n!=2)
// //     {
// //         cout<<"Enter a number...";
// //         cin>>n;
// //         if(n==2)
// //         {
// //             break;
// //         }
// //         cout<<n;
// //     }
// // }

// #include <iostream>
// using namespace std;

// int main()
// {
//     cout << "\n\nWelcome to Studytonight :-)\n\n\n";
//     cout << " =====  Program to demonstrate Deletion of an element from an Array ===== \n\n";

//     int n;

//     cout << " Enter the size of the array: ";
//     cin >> n;

//     int arr[n], i, pos;

//     cout << "\n\n Enter the " << n << " elements of the array: \n\n";
//     for(i=0; i<n; i++)
//     {
//         cin >> arr[i];
//     }

//     //Printing the original array before deletion
//     cout << "\n\n The " << n << " elements of the array, before deletion are : \n\n";
//     for(i=0; i<n; i++)
//     {
//         cout << arr[i] << "  ";
//     }

//     cout << "\n\n Enter the position, between 1 and " << n << " , of the element to be deleted : ";
//     cin >> pos;

//     //Performing the deletion logic
//     --pos;//as index of the element to be deleted is 1 less than it's position
//     for (i = pos; i <= 9; i++)
//     {
//         arr[i] = arr[i + 1];
//     }

//     cout << " \n\nThe " << n-1 << " elements of the array, after deletion are : \n\n";
//     for(i=0; i<n-1; i++)
//     {
//         cout << arr[i] << "  ";
//     }

//     cout << "\n\n";

//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main()
// {
//   string proName[3] = {"abc", "adc", "amc"};
//   int proQuantity[3] = {1, 2, 3};
//   int price[3] = {23, 43, 53};
//   int rapperQ;
//   int rapperP;
//   string Name = " ";

//   for (int i = 0; i < 3; i++)
//   {

//     for (int j = i + 1; j < 3; j++)
//     {
//       if (proQuantity[i] < proQuantity[j])
//       {
//         rapperQ = proQuantity[i];
//         proQuantity[i] = proQuantity[j];
//         proQuantity[j] = rapperQ;
//         cout << "yes";

//         Name = proName[i];
//         proName[i] = proName[j];
//         proName[j] = Name;
//         rapperP = price[i];
//         price[i] = price[j];
//         price[j] = rapperP;
//       }
//     }
//   }
//   for (int i = 0; i < 3; i++)
//   {
//     cout << proQuantity[i] << " " << proName[i] << " " << price[i];
//   }

  // int del=1;
  // for(int i=del;i<3;i++)
  // {
  //    arr[i]=arr[i+1];
  //    arr2[i]=arr2[i+1];
  // }
  // for(int i=0;i<2;i++)
  // {
  //   cout<<arr[i]<<" "<<endl;
  //   cout<<arr2[i]<<" "<<endl;

  // }
// }