#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
int deleteIteration = 0;
void eCommerenceTitle();
void eCommerenceMenu();
// void authenciation(int);
void viewProdcut(); // admin-view
// void uerViewProduct();
void updatedProductArray(int);
void admin();
void user();
void deleteProduct();
void viewAllProduct();
void userViewProduct();
void userbBuyProduct();
void addToCart();
void userPurchasedProduct();
string updatedProductName[100];
int updatedAailabeQuantity[100];
int updatedProductPrice[100];
string productName[] = {"Shirt", "Pant", "Bat"};
int Availabelquantity[] = {32, 54, 23};
int productPrice[] = {25, 30, 60};

int main()
{
    system("cls");
    eCommerenceTitle();
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
            user();
        }
        else if (number == 2)
        {
            admin();
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
    while (number != 5)
    {

        cout << "#########################################################" << endl;
        cout << "#                WELCOME TO THE ADMIN PANEL             #" << endl;
        cout << "#  1 Create Product                                     #" << endl;
        cout << "#  2 Delete Product                                     #" << endl;
        cout << "#  3 View All Product                                   #" << endl;
        cout << "#  4 Total Purchased Product List                       #" << endl;
        cout << "#  5 Logout                                             #" << endl;
        cout << "#########################################################" << endl;

        cout << "Enter the code For the product......";
        cin >> number;

        if (number == 5)
        {
            break;
        }
        else if (number == 2)
        {
            deleteProduct();
        }
        else if (number == 3)
        {
            viewAllProduct();
        }
        else if (number == 1)
        {
            system("cls");
            viewProdcut();
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
    while (number != 7)
    {

        cout << "#########################################################" << endl;
        cout << "#                WELCOME TO THE USER PANEL              #" << endl;
        cout << "#  1 View Product                                       #" << endl;
        cout << "#  3 Buy product                                        #" << endl;
        cout << "#  3 filtter  product                                   #" << endl;
        cout << "#  4 Add To Cart                                        #" << endl;
        cout << "#  5 View Cart                                          #" << endl;
        cout << "#  6 Purchased Product List                             #" << endl;
        cout << "#  7 Logout                                             #" << endl;
        cout << "#########################################################" << endl;
        cout << "Enter The code For the commpoonet...";
        cin >> number;
        if (number == 1)
        {
            userViewProduct();
        }
        else if (number == 3)
        {
            userbBuyProduct();
        }
        else if (number == 7)
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
            deleteIteration = deleteIteration + n + 3;
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
                Sleep(5000);
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
        cout << "No."
             << "\t"
             << "Product Name"
             << "\t"
             << "productPrice"
             << "\t"
             << "Availabelquantity" << endl;
        for (int i = 0; i < deleteIteration; i++)
        {
            if (updatedProductPrice[i] != -0)
            {
                int j = 1;
                cout << index << "\t" << updatedProductName[i] << "\t \t" << updatedProductPrice[i] << "\t \t" << updatedAailabeQuantity[i] << endl;
                index++;
            }
        }
        string name;
        cout << "Enter the Product Name you want to delete .... ";
        cin >> name;
        // int sizeOFArray = sizeof(productName) / sizeof(productName[0]);
        for (int i = 0; i < deleteIteration; i++)
        {
            if (name == updatedProductName[i])
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
            if (name == updatedProductName[i] && name==updatedAailabeQuantity[i])
            {
                continue; //add price and quantiy as well so it will easily delete 
            }
            else
            {
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
    viewProdcut();
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
    }
    else if (x == 'n')
    {
        // give a dicoutn special offer;
    }
}
void addToCart()
{
    // add to cart functionality goes here
}

void userPurchasedProduct()
{
    userViewProduct();
}
// user-component