#include <iostream>
#include <conio.h>
#include <string>
#include <windows.h>
using namespace std;
string buyProductStatus = "UnPaid";
int defaultItemsSize = 3;
int globalAddToCartLoop = 0;
int totalNumberOfUser = 0;
void clearScreen();
int loginAndSingUpMenu();
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
void CreateProduct(); // admin-view
void listOfLoginUsers();
void adminUpDateProduct(); // add this functionality later on ....
void updatedProductArray(int);
void admin(string);
void user(string);
void deleteProduct();
void viewAllProduct();
void userViewProduct();
void userbBuyProduct();
void filterProduct();
void addToCart();
void viewCart();
void userPurchasedProductList();

// string updatedProductName[100];
// int updatedAailabeQuantity[100];
// int updatedProductPrice[100];

int userBuyProductquantity = 0;
const int userBuyProductArrSize = 100;
string userBuyProductName[userBuyProductArrSize];
int userBuySelectedProductQuantity[userBuyProductArrSize];
int userBuyProductProce[userBuyProductArrSize];

const int totalSizeOfitems = 100;
string productName[totalSizeOfitems] = {"Shirt", "Pant", "Bat"};
int Availabelquantity[totalSizeOfitems] = {32, 54, 23};
int productPrice[totalSizeOfitems] = {25, 30, 60};
string userAuthArrayName[100];
string userAuthArrayPassWord[100];
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

// admin-module
void admin(string name)
{
    system("cls");
    int number = 0;
    while (number != 8)
    {

        cout << "#########################################################" << endl;
        cout << "#        Welcome To The Admin Panel " << name << "      #" << endl;
        cout << "#  1 Create Product                                     #" << endl;
        cout << "#  2 Update Product                                     #" << endl;
        cout << "#  3 Delete Product                                     #" << endl;
        cout << "#  4 View All Product                                   #" << endl;
        cout << "#  5 Total Sold Product                                 #" << endl;
        cout << "#  6 Total User List                                    #" << endl;
        cout << "#  7 Change Profile Setting                             #" << endl;
        cout << "#  8 Logout                                             #" << endl;
        cout << "#  9 Exit                                               #" << endl;
        cout << "#########################################################" << endl;

        cout << "Enter the code For the product......";
        cin >> number;

        if (number == 9)
        {
            break;
        }
        else if (number == 2)
        {
            adminUpDateProduct();
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
            CreateProduct();
        }
        else if (number == 6)
        {
            listOfLoginUsers();
        }
        else if (number == 7)
        {
            adminChangeProfileSetting();
        }
        else if (number == 8)
        {
            adminLogout();
        }
    }
}
// admin-module

void user(string name)
{
    system("cls");
    int number = 0;
    while (number != 9)
    {

        cout << "#########################################################" << endl;
        cout << "#                Welcome " << name << "                 #" << endl;
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
        else if (number == 5)
        {
            viewCart();
        }
        else if (number == 6)
        {
            userPurchasedProductList();
        }
        else if (number == 7)
        {
            userChangeProfileSetting();
        }
        else if (number == 8)
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
void CreateProduct()
{
    system("cls");
    userViewProduct();
    char yesOrNo = 'y';
    while (yesOrNo != 'n')
    {
        cout << "Do you want to add more product(y/n)..";
        cin >> yesOrNo;
        if (yesOrNo == 'y')
        {
            int totalProductAdminWantToAdd;
            cout << "Enter number of product you want to add..";
            cin >> totalProductAdminWantToAdd;
            for (int i = 0; i < totalProductAdminWantToAdd; i++)
            {

                cout << "Enter name of product ";
                cin >> productName[defaultItemsSize];
                cout << "Enter price for the product ";
                cin >> productPrice[defaultItemsSize];
                cout << "Enter Quantity ";
                cin >> Availabelquantity[defaultItemsSize];
                defaultItemsSize++;
            }
        }

        else if (yesOrNo == 'n')
        {
            yesOrNo = 'n';
            break;
        }
    }
    cout << "No."
         << "\t"
         << "Product Name"
         << "\t"
         << "productPrice"
         << "\t"
         << "Availabelquantity" << endl;
    for (int i = 0; i < defaultItemsSize; i++)
    {

        cout << i << "\t" << productName[i] << "\t \t" << productPrice[i] << "\t \t" << Availabelquantity[i] << endl;
    }
    clearScreen();
}

void adminUpDateProduct()
{
    userViewProduct();
    int idex, updatedPrice, updatedQuantity;
    char yesOrNo = 'y';
    while (yesOrNo != 'n')
    {
        cout << "Do you want to updated the product(y/n)..";
        cin >> yesOrNo;
        if (yesOrNo == 'y')
        {
            cout << "Enter the index of product you want to update.. ";
            cin >> idex;
            string updatedName;
            cout << "Enter the name of product.. ";
            cin >> updatedName;
            productName[idex] = updatedName;
            cout << "updated product price ";
            cin >> updatedPrice;
            productPrice[idex] = updatedPrice;
            cout << "updated product quantity ";
            cin >> updatedQuantity;
            Availabelquantity[idex] = updatedQuantity;
        }
        else if (yesOrNo == 'n')
        {
            yesOrNo = 'n';
            break;
        }
    }
    cout << "No."
         << "\t"
         << "Product Name"
         << "\t"
         << "productPrice"
         << "\t"
         << "Availabelquantity" << endl;
    for (int i = 0; i < defaultItemsSize; i++)
    {
        cout << i << "\t" << productName[i] << "\t \t" << productPrice[i] << "\t \t" << Availabelquantity[i] << endl;
    }
}

void deleteProduct()
{
    userViewProduct();
    int idex;
    char yesOrNo = 'y';
    while (yesOrNo != 'n')
    {
        cout << "Do you want to delete the product(y/n) ";
        cin >> yesOrNo;
        if (yesOrNo == 'y')
        {
            cout << "Enter the index for deletion of product..";
            cin >> idex;
            for (int i = idex; i < defaultItemsSize; i++)
            {
                productName[i] = productName[i + 1];
                productPrice[i] = productPrice[i + 1];
                Availabelquantity[i] = Availabelquantity[i + 1];
            }
            defaultItemsSize--;
        }
        else if (yesOrNo == 'n')
        {
            yesOrNo = 'n';
            break;
        }
    }
    cout << "No."
         << "\t"
         << "Product Name"
         << "\t"
         << "productPrice"
         << "\t"
         << "Availabelquantity" << endl;
    for (int i = 0; i < defaultItemsSize; i++)
    {
        cout << i << "\t" << productName[i] << "\t \t" << productPrice[i] << "\t \t" << Availabelquantity[i] << endl;
    }
}

// void viewAllProduct()
// {
//     // viewProdcut();
//     if (productName[0] == updatedProductName[0] || productName[1] == updatedProductName[1])
//     {

//         int index = 1;
//         int sizeOFArray = sizeof(updatedProductName) / sizeof(updatedProductPrice[0]);
//         // cout<<sizeOFArray;
//         cout << deleteIteration;
//         cout << "No."
//              << "\t"
//              << "Product Name"
//              << "\t"
//              << "productPrice"
//              << "\t"
//              << "Availabelquantity" << endl;
//         for (int i = 0; i < deleteIteration; i++)
//         {
//             if (updatedProductPrice[i] != 0)
//             {
//                 int j = 1;
//                 cout << index << "\t" << updatedProductName[i] << "\t \t" << updatedProductPrice[i] << "\t \t" << updatedAailabeQuantity[i] << endl;
//                 index++;
//             }
//         }
//         int x;
//         cout << "Press any key to exit.....";
//         cin >> x;
//     }
//     else
//     {
//         userViewProduct();
//         string x;
//         cout << "Press any key to exit...";
//         cin >> x;
//         system("cls");
//     }
// }


// addmin-components

// user-component
void userViewProduct()
{

    system("cls");
    cout << "No."
         << "\t"
         << "Product Name"
         << "\t"
         << "productPrice"
         << "\t"
         << "Availabelquantity" << endl;
    for (int i = 0; i < defaultItemsSize; i++)
    {
        cout << i << "\t" << productName[i] << "\t \t" << productPrice[i] << "\t \t" << Availabelquantity[i] << endl;
    }
    // clearScreen();
}

void userbBuyProduct()
{
    userViewProduct();
    char x = 'y';
    while (x != 'n')
    {
        cout << "Do you want to buy product(y/n)..";
        cin >> x;
        if (x == 'y')
        {
            int n;
            cout << "How much product you want to buy.. ";
            cin >> n;
            int idex;
            int selectedQuantity;
            for (int i = 0; i < n; i++)
            {
                cout << "Enter the index of the product ";
                cin >> idex;
                cout << "Enter No. of quantity you want to buy ";
                cin >> selectedQuantity;

                userBuyProductName[userBuyProductquantity] = productName[idex];
                userBuyProductProce[userBuyProductquantity] = productPrice[idex];
                userBuySelectedProductQuantity[userBuyProductquantity] = selectedQuantity;
                userBuyProductquantity++;
            }
        }
        else if (x == 'n')
        {
            break;
        }
    }
    cout << "No."
         << "\t"
         << "Product Name"
         << "\t"
         << "productPrice"
         << "\t \t"
         << "Selected Quantity" << endl;
    for (int i = 0; i < userBuyProductquantity; i++)
    {
        cout << i << "\t" << userBuyProductName[i] << "\t \t" << userBuyProductProce[i] << "\t \t \t \t" << userBuySelectedProductQuantity[i] << endl;
    }
}

void filterProduct()
{
    system("cls");

    userViewProduct();
    string filterProductNameArr[100];
    int filterProductPriceArr[100];
    int filterProductQuantityArr[100];
    int totalFindProduct = 0;
    char x = 'y';
    while (x != 'n')
    {
        cout << "Do you want to search(y/n) ";
        cin >> x;
        if (x == 'y')
        {
            string name;
            cout << "Enter the name of Product you are looking....";
            cin >> name;

            for (int j = 0; j < totalSizeOfitems; j++)
            {
                if (name == productName[j])
                {
                    filterProductNameArr[totalFindProduct] = productName[j];
                    filterProductPriceArr[totalFindProduct] = productPrice[j];
                    filterProductQuantityArr[totalFindProduct] = Availabelquantity[j];
                    totalFindProduct++;
                    break;
                }
            }
        }
        else if (x == 'n')
        {
            break;
        }
    }
    cout << "No."
         << "\t"
         << "Product Name"
         << "\t"
         << "productPrice"
         << "\t"
         << "Availabelquantity" << endl;
    for (int i = 0; i < totalFindProduct; i++)
    {

        cout<< i <<"\t"<< filterProductNameArr[i] << "\t \t" << filterProductPriceArr[i] << "\t \t" << filterProductQuantityArr[i] << endl;
    }
    if (totalFindProduct > 0)
    {
        cout << "Product found.."<<endl;
        clearScreen();
    }
    else
    {
        cout << "Product Not found..";
        clearScreen();
    }
}
//     string name;
//     cout << "Enter the name of Product you are looking....";
//     cin >> name;
//     if (productName[0] == updatedProductName[0] || productName[1] == updatedProductName[1])
//     {

//         int index = 1;
//         int count = 0;
//         int sizeOFArray = sizeof(updatedProductName) / sizeof(updatedProductPrice[0]);
//         // cout<<sizeOFArray;
//         // cout<<deleteIteration;
//         cout << "No."
//              << "\t"
//              << "Product Name"
//              << "\t"
//              << "productPrice"
//              << "\t"
//              << "Availabelquantity" << endl;
//         for (int i = 0; i < deleteIteration; i++)
//         {
//             if (name == updatedProductName[i])
//             {
//                 int j = 1;
//                 cout << index << "\t" << updatedProductName[i] << "\t \t" << updatedProductPrice[i] << "\t \t" << updatedAailabeQuantity[i] << endl;
//                 index++;
//             }
//             else
//             {
//                 count++;
//             }
//         }
//         if (count == deleteIteration)
//         {
//             cout << "No result found...." << endl;
//         }
//         else
//         {
//             cout << "Result found....." << endl;
//         }
//         string x;
//         cout << "Press any key to exist...";
//         cin >> x;
//     }
//     else
//     {
//         int index = 1;
//         string name;
//         int count = 0;
//         cout << "Enter the name of product You want to search....";
//         cin >> name;
//         int size = sizeof(productName) / sizeof(productName[0]);
//         cout << "No."
//              << "\t"
//              << "Product Name"
//              << "\t"
//              << "productPrice"
//              << "\t"
//              << "Availabelquantity" << endl;
//         for (int i = 0; i < size; i++)
//         {
//             if (name == productName[i])
//             {
//                 int j = 1;
//                 cout << index << "\t" << productName[i] << "\t \t" << productPrice[i] << "\t \t" << Availabelquantity[i] << endl;
//                 index++;
//             }
//             else
//             {
//                 count++;
//             }
//         }
//         if (count == size)
//         {
//             cout << "No result found....." << endl;
//         }

//         // userViewProduct();
//         string x;
//         cout << "Press any key to exit...";
//         cin >> x;
//         system("cls");
//     }
// }

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
    if (globalAddToCartLoop > 0)
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
        cout << "First Buy Product.." << endl;
    }

    string s;
    cout << "Press any key to exit....";
    cin >> s;
}

void viewCart()
{
    int lenght = userBuyProductName->length();
    // cout<<lenght;
    if (lenght != 0)
    {
        cout << "Your have the following quantity..." << endl;
        cout << "No."
             << "\t"
             << "Product Name"
             << "\t"
             << "productPrice"
             << "\t"
             << "Availabelquantity"
             << "\t"
             << "Status" << endl;
        int index = 1;
        for (int i = 0; i < globalAddToCartLoop; i++)
        {
            cout << index << "\t" << userBuyProductName[i] << "\t \t" << userBuyProductProce[i] << "\t \t" << userBuySelectedProductQuantity[i] << "\t \t \t" << buyProductStatus << endl;
            index++;
        }
        char x;
        cout << "Do You want to Pay now(y/n)...";
        cin >> x;
        if (x == 'y')
        {
            buyProductStatus = "Paid";
            cout << "Your have the following quantity..." << endl;
            cout << "No."
                 << "\t"
                 << "Product Name"
                 << "\t"
                 << "productPrice"
                 << "\t"
                 << "Availabelquantity"
                 << "\t"
                 << "Status" << endl;
            for (int i = 0; i < globalAddToCartLoop; i++)
            {
                cout << index << "\t" << userBuyProductName[i] << "\t \t" << userBuyProductProce[i] << "\t \t" << userBuySelectedProductQuantity[i] << "\t \t \t" << buyProductStatus << endl;
                index++;
            }
            cout << "Successfully paid..." << endl;
        }
        else
        {
            cout << "Pending....." << endl;
        }
    }
    else
    {
        cout << "Your cart is empty..." << endl;
    }
}

void userAuth()
{
    int n;
    loginAndSingUpMenu();
    cout << "Enter a option...";
    cin >> n;
    if (n == 1)
    {
        userRegister();
    }
    else if (n == 2)
    {
        userLogin();
    }
    else
    {
        cout << "Please Enter a correct number";
    }
}

int loginAndSingUpMenu()
{
    cout << "************************************************************************" << endl;
    cout << "****************************** WELCOME *********************************" << endl;
    cout << "************************************************************************" << endl;
    cout << "1 SingUp" << endl;
    cout << "2 SingIn" << endl;
}

void userRegister()
{
    cout << "Pleasse Register" << endl;
    string name;
    cout << "Enter your name....";
    cin >> name;
    string password;
    cout << "Enter password ...";
    cin >> password;
    userAuthArrayName[totalNumberOfUser] = name;
    userAuthArrayPassWord[totalNumberOfUser] = password;
    cout << "Successfully Register...";
    totalNumberOfUser++;
    Sleep(700);
    clearScreen();
}

void userLogin()
{
    for (int i = 0; i < totalNumberOfUser; i++)
    {
        cout << userAuthArrayName[i] << "\t";
        cout << userAuthArrayPassWord[i];
    }

    cout << "Please login first..." << endl;
    string name;
    cout << "Enter Your Name...";
    cin >> name;
    string password;
    cout << "Enter your password...";
    cin >> password;
    cout << totalNumberOfUser << endl;
    bool isUserExist = false;
    for (int i = 0; i < totalNumberOfUser; i++)
    {
        if (userAuthArrayName[i] == name && userAuthArrayPassWord[i] == password)
        {
            isUserExist = true;
        }
    }
    if (isUserExist == true)
    {
        clearScreen();
        user(name);
    }
    else if (isUserExist == false)
    {
        cout << "Plaese Enter corrrect userName Or Password.." << endl;
        clearScreen();
    }
}

void adminAuth()
{
    int n;
    loginAndSingUpMenu();
    cout << "Enter option....";
    cin >> n;
    if (n == 1)
    {
        adminRegister();
    }
    else if (n == 2)
    {
        adminLogin();
    }
    else
    {
        cout << "Enter correct number....";
    }
}

void adminLogin()
{

    cout << "Please login " << endl;
    string name;
    cout << "Enter Your Name...";
    cin >> name;
    string password;
    cout << "Enter your password...";
    cin >> password;
    if (adminAuthArray[0] == name && adminAuthArray[1] == password)
    {
        cout << "Loign successfully...";
        Sleep(700);
        clearScreen();
        admin(name);
    }
    else
    {
        cout << "Enter correct username of Passowrd..." << endl;
        clearScreen();
    }
}
void adminRegister()
{
    cout << "Pleasse Register...." << endl;
    string name;
    cout << "Enter your name....";
    cin >> name;
    string password;
    cout << "Enter password ...";
    cin >> password;
    // totalNumberOfAdmin++;
    // if (totalNumberOfAdmin == 1)
    // {
    adminAuthArray[0] = name;
    adminAuthArray[1] = password;

    cout << "Successfully Register..." << endl;
    Sleep(700);
    clearScreen();
    // }
    // else if (totalNumberOfAdmin > 1)
    // {
    //     cout << "Admin is already registered..." << endl;
    //     clearScreen();
    // }
}

void listOfLoginUsers()
{
    system("cls");
    cout << "      *********************************************************" << endl;
    cout << "      *     Total Numnber Of User : " << totalNumberOfUser << "   *" << endl;
    cout << "      *********************************************************" << endl;
    if (totalNumberOfUser > 0)
    {
        cout << "No."
             << "\t"
             << "UserName Name"
             << "\t"
             << "User Password" << endl;
        for (int i = 0; i < totalNumberOfUser; i++)
        {
            cout << i + 1
                 << "\t"
                 << userAuthArrayName[i]
                 << "\t"
                 << userAuthArrayPassWord[i] << endl;
        }
        clearScreen();
    }
    else
    {
        cout << "You don't have any user right now..." << endl;
        clearScreen();
    }
}

void userChangeProfileSetting()
{
    bool isUSerAuthenciate = false;
    int userIndex;
    cout << "Enter Your Credentials...";
    string name;
    cout << "Enter your name....";
    cin >> name;
    string password;
    cout << "Enter your Password...";
    cin >> password;
    for (int i = 0; i < totalNumberOfUser; i++)
    {
        if (userAuthArrayName[i] == name && userAuthArrayPassWord[i] == password)
        {
            userIndex = i;
            isUSerAuthenciate = true;
        }
        // else
        // {
        //     cout << "Please Enter correct password Or name...";
        //     Sleep(700);
        //     clearScreen();
        // }
    }
    if (isUSerAuthenciate == true)
    {
        cout << "Please updated your credentials.." << endl;
        string name2, password2;
        cout << "Enter your name...";
        cin >> name2;
        cout << "Enter your password...";
        cin >> password2;
        userAuthArrayName[userIndex] = name2;
        userAuthArrayPassWord[userIndex] = password2;
        cout << "Your Credentials updated successfully...";
        Sleep(700);
        clearScreen();
    }
    else if (isUSerAuthenciate == false)
    {
        cout << "Please Enter correct password Or name...";
        Sleep(700);
        clearScreen();
    }
}

void adminChangeProfileSetting()
{
    cout << "Enter Your Credentials...";
    string name;
    cout << "Enter your name....";
    cin >> name;
    string password;
    cout << "Enter your Password...";
    cin >> password;
    if (adminAuthArray[0] == name && adminAuthArray[1] == password)
    {
        cout << "Please updated your credentials.." << endl;
        string name2, password2;
        cout << "Enter your name...";
        cin >> name2;
        cout << "Enter your password...";
        cin >> password2;
        adminAuthArray[0] = name2;
        adminAuthArray[1] = password2;
        cout << "Your Credentials updated successfully...";
        Sleep(700);
    }
    else
    {
        cout << "Please Enter correct password Or name...";
        Sleep(700);
    }
}

void userLogout()
{
    userAuthArrayName[0] = " ";
    userAuthArrayPassWord[1] = " ";
    cout << "Account logout successfully..." << endl;
    Sleep(700);
}
void adminLogout()
{
    adminAuthArray[0] = " ";
    adminAuthArray[1] = " ";
    cout << "Account logout successfully..." << endl;
    Sleep(700);
    clearScreen();
}

void userPurchasedProductList()
{
    viewCart();
}

// clear screen
void clearScreen()
{
    cout << "Press any key to continue...";
    getch();
    system("cls");
}
// clear screen
// user-component