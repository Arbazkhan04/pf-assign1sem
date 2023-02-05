#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
int deleteIteration = 0;
int globalAddToCartLoop = 0;
void eCommerenceTitle();
void eCommerenceMenu();
void adminAuth();
void adminRegister();
void adminLogin();
void userAuth();
void userRegister();
void userLogin();
void userChangeProfileSetting();
void adminChangeProfileSetting();
void userLogout();
void adminLogout();
void viewProdcut(); // admin-view
// void uerViewProduct();
void adminUpDateProduct();//add this functionality later on ....
void updatedProductArray(int);
void admin();
void user();
void deleteProduct();
void viewAllProduct();
void userViewProduct();
void userbBuyProduct();
void filterProduct();
void addToCart();
void viewCart();
void userPurchasedProductList();
string updatedProductName[100];
int updatedAailabeQuantity[100];
int updatedProductPrice[100];
string userBuyProductName[100];
int userBuySelectedProductQuantity[100];
int userBuyProductProce[100];
string productName[] = {"Shirt", "Pant", "Bat"};
int Availabelquantity[] = {32, 54, 23};
int productPrice[] = {25, 30, 60};
string userAuthArray[1];
string adminAuthArray[1];

int main()
{
    system("cls");
    // eCommerenceTitle();
    eCommerenceMenu();
}

void eCommerenceTitle()
{
    cout << "#################################################################################" << endl;
    cout << "#                         WELCOME TO E-COMMERENCE SHOP                          #" << endl;
    cout << "#################################################################################" << endl
         << endl
         << endl;
}

void eCommerenceMenu()
{
    int number = 0;
    while (number != 3)
    {
        system("cls");
        eCommerenceTitle();
        cout << "#########################################################" << endl;
        cout << "#  Select component you have to see                     #" << endl;
        cout << "#  1 User                                               #" << endl;
        cout << "#  2 Admin                                              #" << endl;
        cout << "#  Select any option 1 OR 2                             #" << endl;
        cout << "#########################################################" << endl;

        cout << "Enter a option.....";
        cin >> number;

        if (number == 1)
        {
            
            userAuth();
            // user();
        }
        else if (number == 2)
        {
            adminAuth();
            // viewProdcut();
        }
        else if (number == 3)
        {
            break;
        }
    }
}

// void authenciation(int adminOrUser)
// {
//     while (adminOrUser != 3)
//     {
//         if (adminOrUser == 1)
//         {
//             user();
//         }
//         else if (adminOrUser == 2)
//         {
//             admin();
//             // viewProdcut();
//         }
//         else if (adminOrUser == 3)
//         {
//             break;
//         }
//     }
// }
// admin-module
void admin()
{
    system("cls");
    int number = 0;
    while (number != 8)
    {

        cout << "#########################################################" << endl;
        cout << "#                WELCOME TO THE ADMIN PANEL             #" << endl;
        cout << "#  1 Create Product                                     #" << endl;
        cout << "#  2 Update Product                                     #" << endl;
        cout << "#  3 Delete Product                                     #" << endl;
        cout << "#  4 View All Product                                   #" << endl;
        cout << "#  5 Total Purchased Product List                       #" << endl;
        cout << "#  6 Change Profile Setting                             #" << endl;
        cout << "#  7 Logout                                             #" << endl;
        cout << "#  8 Exit                                             #" << endl;
        cout << "#########################################################" << endl;

        cout << "Enter the code For the product......";
        cin >> number;

        if (number == 8)
        {
            break;
        }
        else if (number == 3)
        {
            deleteProduct();
        }
        else if (number == 4)
        {
            viewAllProduct();
        }
        else if (number == 1)
        {
            system("cls");
            viewProdcut();
        }
        else if(number==6)
        {
            adminChangeProfileSetting();
        }
        else if(number==7)
        {
            adminLogout();
        }
    }
    // cout << "Enter the code For the product......";
    // cin >> number;

    // if (number == 1)
    // {
    //     system("cls");
    //     viewProdcut();
    // }
    // else if (number == 2)
    // {
    //     deleteProduct();
    // }
    // else if (number == 3)
    // {
    //     viewAllProduct();
    // }
}
// admin-module

void user()
{
    system("cls");
    int number = 0;
    while (number != 9)
    {

        cout << "#########################################################" << endl;
        cout << "#                WELCOME TO THE USER PANEL              #" << endl;
        cout << "#  1 View Product                                       #" << endl;
        cout << "#  2 Buy product                                        #" << endl;
        cout << "#  3 filtter  product                                   #" << endl;
        cout << "#  4 Add To Cart                                        #" << endl;
        cout << "#  5 View Cart                                          #" << endl;
        cout << "#  6 Purchased Product List                             #" << endl;
        cout << "#  7 Change Profile Setting                             #" << endl;
        cout << "#  8 Logout                                             #" << endl;
        cout << "#  9 Exit                                               #" << endl;
        cout << "#########################################################" << endl;
        cout << "Enter The code For the commpoonet...";
        cin >> number;
        if (number == 1)
        {
            userViewProduct();
        }
        else if (number == 2)
        {
            userbBuyProduct();
        }
        else if (number == 3)
        {
            filterProduct();
        }
        else if (number == 4)
        {
            addToCart();
        }
        else if(number==5)
        {
            viewCart();
        }
        else if(number==6)
        {
            userPurchasedProductList();
        }
        else if(number==7)
        {
            userChangeProfileSetting();
        }
        else if(number==8)
        {
            userLogout();
        }
        else if (number == 9)
        {
            break;
        }
    }
}
// admin-components
void viewProdcut()
{
    system("cls");
    userViewProduct();
    char yesOrNo;
    while (yesOrNo != 'n')
    {

        cout << "Do you want to add more product Yes or No(y/n)...";
        cin >> yesOrNo;
        if (yesOrNo == 'y')
        {
            int n;
            cout << "How much product do you want to add...";
            cin >> n;
            deleteIteration = (deleteIteration + n + 3);
            cout << deleteIteration;

            // string updatedProductName[n];
            // int updatedAailabeQuantity[n];
            // int updatedProductPrice[n];
            // int arrSize = sizeof(productName) / sizeof(productName[0]);
            // int totalUpdatedArraySize=arrSize+n;
            for (int i = 0; i < 3; i++)
            {
                updatedProductName[i] = productName[i];
                updatedProductPrice[i] = productPrice[i];
                updatedAailabeQuantity[i] = Availabelquantity[i];
            }
            int index = 3;
            for (int j = 0; j < n; j++)
            {
                cout << "Enter the name of product...";
                cin >> updatedProductName[index];
                cout << "Enter the price of product...";
                cin >> updatedProductPrice[index];
                cout << "enter the quantity for the product...";
                cin >> updatedAailabeQuantity[index];
                index++;
            }
            // for (int i = 0; i < totalUpdatedArraySize; i++)
            // {

            //     cout << "Enter name of product...";
            //     cin >> productName[3];
            //     cout << "Enter product price...";
            //     cin >> productPrice[arrSize];
            //     cout << "Enter quantity....";
            //     cin >> Availabelquantity[arrSize];
            //     arrSize++;
            // }

            cout << "No."
                 << "\t"
                 << "Product Name"
                 << "\t"
                 << "productPrice"
                 << "\t"
                 << "Availabelquantity" << endl;
            int updatedSizeArr = 3 + n;
            int index2 = 1;
            for (int i = 0; i < updatedSizeArr; i++)
            {

                cout << index2 << "\t" << updatedProductName[i] << "\t \t" << updatedProductPrice[i] << "\t \t" << updatedAailabeQuantity[i] << endl;
                index2++;
                Sleep(1000);
            }
            cout << "added successfully..." << endl;
            Sleep(5000);
            yesOrNo = 'n';
        }
        else if (yesOrNo == 'n')
        {
            break;
        }
    }

    //  char yesOrNo;
    // cout << "Do you want to want more product Yes or No(y/n)...";
    // cin >> yesOrNo;
    // if (yesOrNo == 'y')
    // {
    //   int n;
    //   cout<<"How much product do you want to add...";
    //   cin>>n;
    // string updatedProductName[n];
    // int updatedAailabeQuantity[n];
    // int updatedProductPrice[n];
    // int arrSize = sizeof(productName) / sizeof(productName[0]);
    // int totalUpdatedArraySize=arrSize+n;
    //     for(int i=0;i<3;i++)
    //     {
    //         updatedProductName[i]=productName[i];
    //         updatedProductPrice[i]=productPrice[i];
    //         updatedAailabeQuantity[i]=Availabelquantity[i];
    //     }
    //     int index=3;
    //     for(int j=0;j<n;j++)
    //     {
    //       cout<<"Enter the name of product...";
    //       cin>>updatedProductName[index];
    //       cout<<"Enter the price of product...";
    //       cin>>updatedProductPrice[index];
    //       cout<<"enter the quantity for the product...";
    //       cin>>updatedAailabeQuantity[index];
    //       index++;
    //     }
    //     // for (int i = 0; i < totalUpdatedArraySize; i++)
    //     // {

    //     //     cout << "Enter name of product...";
    //     //     cin >> productName[3];
    //     //     cout << "Enter product price...";
    //     //     cin >> productPrice[arrSize];
    //     //     cout << "Enter quantity....";
    //     //     cin >> Availabelquantity[arrSize];
    //     //     arrSize++;
    //     // }

    //     cout << "No."
    //          << "\t"
    //          << "Product Name"
    //          << "\t"
    //          << "productPrice"
    //          << "\t"
    //          << "Availabelquantity" << endl;
    //        int updatedSizeArr=3+n;
    //        int index2=1;
    //     for (int i = 0; i < updatedSizeArr; i++)
    //     {

    //         cout << index2 << "\t" << updatedProductName[i] << "\t \t" << updatedProductPrice[i] << "\t \t" << updatedAailabeQuantity[i] << endl;
    //         index2++;
    //         Sleep(5000);
    //     }
    //       cout<<"added successfully...";
    //      Sleep(5000);

    // }
}

void deleteProduct()
{
    if (productName[0] == updatedProductName[0] || productName[1] == updatedProductName[1])
    {

        int index = 1;
        int sizeOFArray = sizeof(updatedProductName) / sizeof(updatedProductPrice[0]);
        // cout<<sizeOFArray;
        //  cout<<deleteIteration;
        cout << "No."
             << "\t"
             << "Product Name"
             << "\t"
             << "productPrice"
             << "\t"
             << "Availabelquantity" << endl;

        for (int i = 0; i < deleteIteration; i++)
        {
            if (updatedProductPrice[i] != 0)
            {
                int j = 1;
                cout << index << "\t" << updatedProductName[i] << "\t \t" << updatedProductPrice[i] << "\t \t" << updatedAailabeQuantity[i] << endl;
                index++;
            }
        }
        string name;
        int price, quantity;
        cout << "Enter the Product Name you want to delete .... ";
        cin >> name;

        cout << "Enter the price of prodcut...";
        cin >> price;

        cout << "Enter the quantity of product...";
        cin >> quantity;
        // int sizeOFArray = sizeof(productName) / sizeof(productName[0]);
        for (int i = 0; i < deleteIteration; i++)
        {
            if (name == updatedProductName[i] && price == updatedProductPrice[i] && quantity == updatedAailabeQuantity[i])
            {
                updatedProductName[i] = ' ';
                updatedProductPrice[i] = ' ';
                updatedAailabeQuantity[i] = ' ';
            }
        }
        cout << "No."
             << "\t"
             << "Product Name"
             << "\t"
             << "productPrice"
             << "\t"
             << "Availabelquantity" << endl;
        int j = 1;
        for (int i = 0; i < deleteIteration; i++)
        {
            if (name != updatedProductName[i])
            {
                // continue; //add price and quantiy as well so it will easily delete
                cout << j << "\t" << updatedProductName[i] << "\t \t" << updatedProductPrice[i] << "\t \t" << updatedAailabeQuantity[i] << endl;
                j++;
            }
        }
    }
    else
    {
        userViewProduct();
        string name;
        cout << "Enter the Product Name you want to delete .... ";
        cin >> name;
        int sizeOFArray = sizeof(productName) / sizeof(productName[0]);
        for (int i = 0; i < sizeOFArray; i++)
        {
            if (name == productName[i])
            {
                productName[i] = ' ';
                productPrice[i] = ' ';
                Availabelquantity[i] = ' ';
            }
        }
        system("cls");
    }
    // userViewProduct();
    // string name;
    // cout << "Enter the Product Name you want to delete .... ";
    // cin >> name;
    // int sizeOFArray = sizeof(productName) / sizeof(productName[0]);
    // for (int i = 0; i < sizeOFArray; i++)
    // {
    //     if (name == productName[i])
    //     {
    //         productName[i] = ' ';
    //         productPrice[i] = ' ';
    //         Availabelquantity[i] = ' ';
    //     }
    // }
    // system("cls");
    // viewProdcut();
}
void viewAllProduct()
{
    // viewProdcut();
    if (productName[0] == updatedProductName[0] || productName[1] == updatedProductName[1])
    {

        int index = 1;
        int sizeOFArray = sizeof(updatedProductName) / sizeof(updatedProductPrice[0]);
        // cout<<sizeOFArray;
        cout << deleteIteration;
        cout << "No."
             << "\t"
             << "Product Name"
             << "\t"
             << "productPrice"
             << "\t"
             << "Availabelquantity" << endl;
        for (int i = 0; i < deleteIteration; i++)
        {
            if (updatedProductPrice[i] != 0)
            {
                int j = 1;
                cout << index << "\t" << updatedProductName[i] << "\t \t" << updatedProductPrice[i] << "\t \t" << updatedAailabeQuantity[i] << endl;
                index++;
            }
        }
        int x;
        cout << "Press any key to exit.....";
        cin >> x;
        /* string name;
         int price,quantity;
            cout << "Enter the Product Name you want to delete .... ";
         cin >> name;

         cout<<"Enter the price of prodcut...";
         cin>>price;

          cout<<"Enter the quantity of product...";
          cin>>quantity;
         // int sizeOFArray = sizeof(productName) / sizeof(productName[0]);
         for (int i = 0; i < deleteIteration; i++)
         {
             if (name == updatedProductName[i] && price==updatedProductPrice[i] && quantity==updatedAailabeQuantity[i])
             {
                 updatedProductName[i] = ' ';
                 updatedProductPrice[i] = ' ';
                 updatedAailabeQuantity[i] = ' ';
             }
         }
         cout << "No."
              << "\t"
              << "Product Name"
              << "\t"
              << "productPrice"
              << "\t"
              << "Availabelquantity" << endl;
         int j = 1;
         for (int i = 0; i < deleteIteration; i++)
         {
             if (name!= updatedProductName[i])
             {
                 // continue; //add price and quantiy as well so it will easily delete
                 cout << j << "\t" << updatedProductName[i] << "\t \t" << updatedProductPrice[i] << "\t \t" << updatedAailabeQuantity[i] << endl;
                 j++;
             }

         }*/
    }
    else
    {
        userViewProduct();
        string x;
        cout << "Press any key to exit...";
        cin >> x;
        system("cls");
    }
}

void updatedProductArray(int i) // no need
{
    int n = 0;
    n += i;
    // string updatedProductName[n];
    // int updatedAailabeQuantity[n];
    // int updatedProductPrice[n];
    // int arrSize = sizeof(productName) / sizeof(productName[0]);
    // int totalUpdatedArraySize=arrSize+n;
    for (int i = 0; i < 3; i++)
    {
        updatedProductName[i] = productName[i];
        updatedProductPrice[i] = productPrice[i];
        updatedAailabeQuantity[i] = Availabelquantity[i];
    }
    int index = 3;
    for (int j = 0; j < i; j++)
    {
        cout << "Enter the name of product...";
        cin >> updatedProductName[index];
        cout << "Enter the price of product...";
        cin >> updatedProductPrice[index];
        cout << "enter the quantity for the product...";
        cin >> updatedAailabeQuantity[index];
        index++;
    }
    // for (int i = 0; i < totalUpdatedArraySize; i++)
    // {

    //     cout << "Enter name of product...";
    //     cin >> productName[3];
    //     cout << "Enter product price...";
    //     cin >> productPrice[arrSize];
    //     cout << "Enter quantity....";
    //     cin >> Availabelquantity[arrSize];
    //     arrSize++;
    // }
    cout << "No."
         << "\t"
         << "Product Name"
         << "\t"
         << "productPrice"
         << "\t"
         << "Availabelquantity" << endl;
    int updatedSizeArr = 3 + n;
    for (int i = 0; i < updatedSizeArr; i++)
    {

        cout << index << "\t" << updatedProductName[i] << "\t \t" << updatedProductPrice[i] << "\t \t" << updatedAailabeQuantity[i] << endl;
        index++;
    }
}
// addmin-components

// user-component
void userViewProduct()
{

    system("cls");

    int index = 1;
    int sizeOFArray = sizeof(productName) / sizeof(productName[0]);
    // cout<<sizeOFArray;
    cout << "No."
         << "\t"
         << "Product Name"
         << "\t"
         << "productPrice"
         << "\t"
         << "Availabelquantity" << endl;
    for (int i = 0; i < sizeOFArray; i++)
    {
        int j = 1;
        cout << index << "\t" << productName[i] << "\t \t" << productPrice[i] << "\t \t" << Availabelquantity[i] << endl;
        index++;
    }
    string s;
    cout<<"Press any key to conntinue....";
    cin>>s;
}

void userbBuyProduct()
{

    int userProductArrayIndex = 0;
    int viewIndex = 1;
    // viewProdcut();
    userViewProduct();
    char x;
    cout << "Do you want to buy any product Yes or No (y/n) ";
    cin >> x;
    if (x == 'y')
    {
        int productUserWantToBuy;
        cout << "Enter no. of product you want to buy...";
        cin >> productUserWantToBuy;
        globalAddToCartLoop = productUserWantToBuy;

        string userProductName[productUserWantToBuy];
        int userProductPrice[productUserWantToBuy];
        int userQuantity[productUserWantToBuy];
        int userSelectedQuantity2[productUserWantToBuy];
        for (int j = 0; j < productUserWantToBuy; j++)
        {
            int userSelectedQuantity;
            string name;
            cout << "Enter the name of product.....";
            cin >> name;
            cout << "Enter No of quantity You want to buy ";
            cin >> userSelectedQuantity;
            int sizeOFArray = sizeof(productName) / sizeof(productName[0]);
            for (int i = 0; i < sizeOFArray; i++)
            {
                if (userSelectedQuantity > Availabelquantity[i])
                {
                    cout << userSelectedQuantity << " Selected Quantity more than the available quantity please select less quantity " << Availabelquantity[i] << endl;
                    return;
                }
                else if (name == productName[i] && userSelectedQuantity < userQuantity[i])
                {
                    userProductName[userProductArrayIndex] = productName[i];
                    userProductPrice[userProductArrayIndex] = productPrice[i];
                    userQuantity[userProductArrayIndex] = Availabelquantity[i];
                    userSelectedQuantity2[userProductArrayIndex] = userSelectedQuantity;
                    userProductArrayIndex++;
                    break;
                }
            }
        }
        cout << "No."
             << "\t"
             << "Product Name"
             << "\t"
             << "productPrice"
             << "\t"
             << "Availabelquantity"
             << "\t \t"
             << "Selected Quantity" << endl;
        for (int i = 0; i < productUserWantToBuy; i++)
        {
            cout << viewIndex << "\t" << userProductName[i] << "\t \t" << userProductPrice[i] << "\t \t" << userQuantity[i] << "\t \t \t \t" << userSelectedQuantity2[i] << endl;
            viewIndex++;
        }
        // push these code into the userbuyProductarray
        for (int i = 0; i < productUserWantToBuy; i++)
        {
            userBuyProductName[i] = userProductName[i];
            userBuyProductProce[i] = userProductPrice[i];
            userBuySelectedProductQuantity[i] = userQuantity[i];
        }
    }
    else if (x == 'n')
    {
        // give a dicoutn special offer;
    }
}

void filterProduct()
{
    system("cls");

    //   userViewProduct();
    string name;
    cout << "Enter the name of Product you are looking....";
    cin >> name;
    if (productName[0] == updatedProductName[0] || productName[1] == updatedProductName[1])
    {

        int index = 1;
        int count = 0;
        int sizeOFArray = sizeof(updatedProductName) / sizeof(updatedProductPrice[0]);
        // cout<<sizeOFArray;
        // cout<<deleteIteration;
        cout << "No."
             << "\t"
             << "Product Name"
             << "\t"
             << "productPrice"
             << "\t"
             << "Availabelquantity" << endl;
        for (int i = 0; i < deleteIteration; i++)
        {
            if (name == updatedProductName[i])
            {
                int j = 1;
                cout << index << "\t" << updatedProductName[i] << "\t \t" << updatedProductPrice[i] << "\t \t" << updatedAailabeQuantity[i] << endl;
                index++;
            }
            else
            {
                count++;
            }
        }
        if (count == deleteIteration)
        {
            cout << "No result found...." << endl;
        }
        else
        {
            cout << "Result found....." << endl;
        }
        string x;
        cout << "Press any key to exist...";
        cin >> x;
    }
    else
    {
        int index = 1;
        // int sizeOFArray = sizeof(productName) / sizeof(productName[0]);
        // // cout<<sizeOFArray;
        // cout << "No."
        //      << "\t"
        //      << "Product Name"
        //      << "\t"
        //      << "productPrice"
        //      << "\t"
        //      << "Availabelquantity" << endl;
        // for (int i = 0; i < sizeOFArray; i++)
        // {
        //     int j = 1;
        //     cout << index << "\t" << productName[i] << "\t \t" << productPrice[i] << "\t \t" << Availabelquantity[i] << endl;
        //     index++;
        // }
        string name;
        int count = 0;
        cout << "Enter the name of product You want to search....";
        cin >> name;
        int size = sizeof(productName) / sizeof(productName[0]);
        cout << "No."
             << "\t"
             << "Product Name"
             << "\t"
             << "productPrice"
             << "\t"
             << "Availabelquantity" << endl;
        for (int i = 0; i < size; i++)
        {
            if (name == productName[i])
            {
                int j = 1;
                cout << index << "\t" << productName[i] << "\t \t" << productPrice[i] << "\t \t" << Availabelquantity[i] << endl;
                index++;
            }
            else
            {
                count++;
            }
        }
        if (count == size)
        {
            cout << "No result found....." << endl;
        }

        // userViewProduct();
        string x;
        cout << "Press any key to exit...";
        cin >> x;
        system("cls");
    }
}

void addToCart()
{
  
     cout << "No."
         << "\t"
         << "Product Name"
         << "\t"
         << "productPrice"
         << "\t"
         << "Availabelquantity" << endl;
    int index = 1;
    if(globalAddToCartLoop>0)
    {
      for (int i = 0; i < globalAddToCartLoop; i++)
    {

        cout << index << "\t" << userBuyProductName[i] << "\t \t" << userBuyProductProce[i] << "\t \t" << userBuySelectedProductQuantity[i] << endl;
        index++;
    }
    char x;
    cout << "You have buy " << globalAddToCartLoop << " product do you want to add these product into the cart(y/n)..." << endl;
    cin >> x;
    if (x == 'y')
    {
        cout << "Successfully add to the cart..."; // later on i will implement the logic
    }
    else if (x == 'n')
    {
        cout << "Successfully remove from your card...." << endl;
    }
    }
    else
    {
        cout<<"First Buy Product.."<<endl;
    }
   
   
    string s;
    cout << "Press any key to exit....";
    cin >> s;
}

void viewCart()
{
    int lenght=userBuyProductName->length();
    // cout<<lenght;
    if(lenght!=0)
    {
      cout<<"Your have the following quantity..."<<endl;
          cout << "No."
         << "\t"
         << "Product Name"
         << "\t"
         << "productPrice"
         << "\t"
         << "Availabelquantity" << endl;
         int index=1;
      for(int i=0;i<globalAddToCartLoop;i++)
      {
          cout << index << "\t" << userBuyProductName[i] << "\t \t" << userBuyProductProce[i] << "\t \t" << userBuySelectedProductQuantity[i] << endl;
          index++;
      }
      char x;
      cout<<"Do You want to Pay now...";
      cin>>x;
      if(x=='y')
      {
        cout<<"Successfully paid..."<<endl;
      }
      else
      {
         cout<<"Pending....."<<endl;
      }
     
    }
    else 
    {
        cout<<"Your cart is empty..."<<endl;
    }
}

void userAuth()
{
  int size=userAuthArray->length();
  if(size!=0)
  {
    // user();
    userLogin();
  }
  else{

    userRegister();

  }
//   else{
//     cout<<"Pleasse Register first...."<<endl;
//     string name;
//     cout<<"Enter your name....";
//     getline(cin,name);
//      string password;
//      cout<<"Enter password in lower case only...";
//      cin>>password;
//      userAuthArray[0]=name;
//      userAuthArray[1]=password;
//      cout<<"Successfully Register...";
//      if(size!=0)
//      {
//         user();
//      }
//   }
}

void userRegister()
{
    cout<<"Pleasse Register first...."<<endl;
    string name;
    cout<<"Enter your name....";
    cin>>name;
     string password;
     cout<<"Enter password in lower case only...";
     cin>>password;
     userAuthArray[0]=name;
     userAuthArray[1]=password;
     cout<<"Successfully Register...";
     Sleep(700);
     string x;
     cout<<"Press any key to continue..";
     cin>>x;
}

void userLogin()
{

    cout<<"Please login first..."<<endl;
    string name;
    cout<<"Enter Your Name...";
    cin>>name;
    string password;
    cout<<"Enter your password...";
    cin>>password;
   if(userAuthArray[0]==name && userAuthArray[1]==password)
   {
     cout<<"Loign successfully...";
     Sleep(700);
     user();
   }
   else{
     cout<<"Enter correct username of Passowrd..."<<endl;
     string x;
     cout<<"Press any key to try again..";
     cin>>x;
   }
}

void adminAuth()
{
    int size=adminAuthArray->length();
  if(size!=0)
  {
    // user();
    adminLogin();
  }
  else{

    adminRegister();

  } 
}

void adminLogin()
{
     cout<<"Please login first..."<<endl;
    string name;
    cout<<"Enter Your Name...";
    cin>>name;
    string password;
    cout<<"Enter your password...";
    cin>>password;
   if(adminAuthArray[0]==name && adminAuthArray[1]==password)
   {
     cout<<"Loign successfully...";
     Sleep(700);
     admin();
   }
    else{
     cout<<"Enter correct username of Passowrd..."<<endl;
     string x;
     cout<<"Press any key to try again..";
     cin>>x;
   }
}
void adminRegister()
{
     cout<<"Pleasse Register first...."<<endl;
     string name;
    cout<<"Enter your name....";
    cin>>name;
     string password;
     cout<<"Enter password in lower case only...";
     cin>>password;
     adminAuthArray[0]=name;
     adminAuthArray[1]=password;
     cout<<"Successfully Register...";
     Sleep(700);
}

void userChangeProfileSetting()
{
    cout<<"Enter Your Credentials...";
    string name;
    cout<<"Enter your name....";
    cin>>name;
    string password;
    cout<<"Enter your Password...";
    cin>>password;
    if(userAuthArray[0]==name &&  userAuthArray[1]==password)
    {
      cout<<"Please updated your credentials.."<<endl;
      string name2,password2;
      cout<<"Enter your name...";
      cin>>name2;
      cout<<"Enter your password...";
      cin>>password2;
      userAuthArray[0]=name2;
      userAuthArray[1]=password2;
      cout<<"Your Credentials updated successfully...";
      Sleep(700);


    }
    else 
    {
        cout<<"Please Enter correct password Or name...";
        Sleep(700);
    }

}

void adminChangeProfileSetting()
{
     cout<<"Enter Your Credentials...";
    string name;
    cout<<"Enter your name....";
    cin>>name;
    string password;
    cout<<"Enter your Password...";
    cin>>password;
    if(adminAuthArray[0]==name &&  adminAuthArray[1]==password)
    {
      cout<<"Please updated your credentials.."<<endl;
      string name2,password2;
      cout<<"Enter your name...";
      cin>>name2;
      cout<<"Enter your password...";
      cin>>password2;
      adminAuthArray[0]=name2;
      adminAuthArray[1]=password2;
      cout<<"Your Credentials updated successfully...";
      Sleep(700);


    }
    else 
    {
        cout<<"Please Enter correct password Or name...";
        Sleep(700);
    }
}

void userLogout()
{
    userAuthArray[0]=" ";
    userAuthArray[1]=" ";
    cout<<"Account logout successfully...";
    Sleep(700);

}
void adminLogout()
{
   adminAuthArray[0]=" ";
    adminAuthArray[1]=" ";
    cout<<"Account logout successfully...";
    Sleep(700); 
}

void userPurchasedProductList()
{
    viewCart();
}
// user-component