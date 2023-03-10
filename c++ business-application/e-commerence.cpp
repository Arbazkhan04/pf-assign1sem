#include <iostream>
#include <fstream>
#include <conio.h>
#include <string>
#include <cstring>
#include <windows.h>
using namespace std;
int defaultItemsSize = 0;
int totalNumberOfUser = 0;
int totalTredingProduct=0;
void gotoxy(int x, int y);
void barChar();
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
bool intvalidOption(string value);
int enterOpt(int);
// file handlling
void storeUserIntoTheFile();
void populateUserIntoArr();
string commaSeprateUser(string line, int index);
void storeAdminIntoTheFile();
void populateAdminIntoArr();
void createProductFile();
void storeUpdateProductDataIntoTheFile();
void storeUserBuyProuctIntoTheFile();
void loadUserBuyProductIntoTheArr();
// file handling
void userChangeProfileSetting();
void adminChangeProfileSetting();
void userLogout();
void adminLogout();
void CreateProduct(); // admin-view
void listOfLoginUsers();
void adminUpDateProduct();
void adminViewProduct();
void productAnalystics();
void admin(string);
void user(string);
void deleteProduct();
int checkSizeOfArrayIndex();
void userViewProduct();
void adminProductDetails();

void userViewRepeateCode();
void userbBuyProduct();
void filterProduct();
bool isAnyProductUnpaid();
bool isDuplicateExistInTrendProd(int index);
void plcaeTrendProdcutName(string, int);
void addToCart();
void viewCart();
void viewCartOption();
void userPurchasedProductList();
void totalSoldProduct();
int purchasedProductBill(int, int);
void trendingProducts();
string adminNmae = " ";
string userName = " ";
int userBuyProductquantity = 0;
const int userBuyProductArrSize = 100;
string userBuyProductStatus[userBuyProductArrSize];
string userBuyProductName[userBuyProductArrSize];
string UserNameArr[userBuyProductArrSize];
int userBuySelectedProductQuantity[userBuyProductArrSize];
int userBuyProductProce[userBuyProductArrSize];

const int totalSizeOfitems = 100;
string productName[totalSizeOfitems];
int Availabelquantity[totalSizeOfitems];
int productPrice[totalSizeOfitems];
int userLoignIndex;
string userAuthArrayName[100];
string userAuthArrayPassWord[100];
string adminAuthArray[1];
string adminAuthArryName[10];
string adminAuthArryPass[10];
int totalNumberOfAdmin = 0;

int main()
{
    system("cls");
    createProductFile();
    populateUserIntoArr();
    populateAdminIntoArr();
    loadUserBuyProductIntoTheArr();
    eCommerenceMenu();

    // call lastly
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
    int number;
    system("cls");
    eCommerenceTitle();
    cout << "#########################################################" << endl;
    cout << "#  Select component you have to see                     #" << endl;
    cout << "#  1 User                                               #" << endl;
    cout << "#  2 Admin                                              #" << endl;
    cout << "#  3 Exit                                               #" << endl;
    cout << "#  Select an option                                     #" << endl;
    cout << "#########################################################" << endl;
    cout << "Enter option ";
    number = enterOpt(3);
    if (number == 1)
    {
        userAuth();
    }
    else if (number == 2)
    {
        adminAuth();
    }
    else if (number == 3)
    {
        return;
    }
}

// admin-module
void admin(string name)
{
    system("cls");
    cout << "\n \n";
    cout << "**********************************************************************" << endl;
    cout << "              Welcome To The Admin Panel " << name << "                  " << endl;
    cout << "**********************************************************************" << endl;

    cout << "  1 Create Product                                     " << endl;
    cout << "  2 Update Product                                     " << endl;
    cout << "  3 Delete Product                                     " << endl;
    cout << "  4 View All Product                                   " << endl;
    cout << "  5 Total Sold Product                                 " << endl;
    cout << "  6 Total User List                                    " << endl;
    cout << "  7 Product Analystics                                 " << endl;
    cout << "  8 Product Detail                                     " << endl;
    cout << "  9 Change Profile Setting                             " << endl;
    cout << "  10 Delete Account                                     " << endl;
    cout << "  11 Exit                                              " << endl;
    cout << "Enter option ";
    int number = enterOpt(11);
    if (number == 11)
    {
        eCommerenceMenu();
    }
    else if (number == 8)
    {
        adminProductDetails();
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
        adminViewProduct();
    }
    else if (number == 5)
    {
        totalSoldProduct();
    }
    else if (number == 1)
    {
        system("cls");
        CreateProduct();
    }
    else if (number == 6)
    {
        adminViewProduct();
    }
    else if (number == 7)
    {
        productAnalystics();
    }
    else if (number == 9)
    {
        adminChangeProfileSetting();
    }
    else if (number == 10)
    {
        adminLogout();
    }
}
// }

// admin-module

void user(string name)
{
    system("cls");
    system("cls");
    cout << "\n \n";
    cout << "**********************************************************************" << endl;
    cout << "              Welcome To The User Panel " << name << "                 " << endl;
    cout << "**********************************************************************" << endl;
    cout << "  1 View Product                                       " << endl;
    cout << "  2 Buy product                                        " << endl;
    cout << "  3 filtter  product                                   " << endl;
    cout << "  4 View Cart                                          " << endl;
    cout << "  5 Add to Cart                                        " << endl;
    cout << "  6 Purchased Product List                             " << endl;
    cout << "  7 Treding Product List                               " << endl;
    cout << "  8 Change Profile Setting                             " << endl;
    cout << "  9 Delete Account                                    " << endl;
    cout << "  10 Exit                                              " << endl;
    cout << "Enter option ";
    int number = enterOpt(10);

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
        system("cls");
        viewCart();
    }
    else if (number == 5)
    {
        system("cls");
        addToCart();
    }
    else if (number == 6)
    {
        system("cls");
        userPurchasedProductList();
    }
    else if (number == 7)
    {
        system("cls");
        trendingProducts();
    }
    else if (number == 8)
    {
        system("cls");
        userChangeProfileSetting();
    }
    else if (number == 9)
    {
        system("cls");
        userLogout();
    }
    else if (number == 10)
    {
        eCommerenceMenu();
    }
}
// validation
bool intvalidOption(string value)
{
    for (int i = 0; i < value.length(); i++)
    {
        if (!isdigit(value[i]))
        {
            return false;
        }
    }
    return true;
}

int enterOpt(int limit)
{
    string opt;
    cin >> opt;
    while (!intvalidOption(opt) || stoi(opt) < 0 || stoi(opt) > limit)
    {
        cout << "Invalid input " << endl;
        cout << "Enter your option again ";
        cin >> opt;
    }
    return stoi(opt);
}

// validation
// admin-components
void CreateProduct()
{
    system("cls");
    cout << "\n \n";
    cout << "**********************************************************************" << endl;
    cout << "*                                 Create Prodcut                     *" << endl;
    cout << "**********************************************************************" << endl;
    userViewRepeateCode();
    char yesOrNo = 'y';
    while (yesOrNo != 'n')
    {
        cout << "Do you want to add more product(y/n)..";
        cin >> yesOrNo;
        if (yesOrNo == 'y')
        {
            int totalProductAdminWantToAdd;
            cout << "Enter number of product you want to add..";
            totalProductAdminWantToAdd = enterOpt(20);
            for (int i = 0; i < totalProductAdminWantToAdd; i++)
            {

                cout << "Enter name of product ";
                cin >> productName[defaultItemsSize];
                cout << "Enter price for the product ";
                productPrice[defaultItemsSize] = enterOpt(2000);
                cout << "Enter Quantity ";
                Availabelquantity[defaultItemsSize] = enterOpt(1000);
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
    storeUpdateProductDataIntoTheFile();
    clearScreen();
    admin(adminNmae);
}

void adminUpDateProduct()
{
    system("cls");
    cout << "\n \n";
    cout << "**********************************************************************" << endl;
    cout << "*                           UPDATE PRODUCT                           *" << endl;
    cout << "**********************************************************************" << endl;
    userViewRepeateCode();
    int idex, updatedPrice, updatedQuantity;
    char yesOrNo = 'y';
    while (yesOrNo != 'n')
    {
        cout << "Do you want to update the product(y/n)..";
        cin >> yesOrNo;
        if (yesOrNo == 'y')
        {
            cout << "Enter the index of product you want to update.. ";
            idex = enterOpt(50);

            string updatedName;
            cout << "Enter the name of product.. ";
            cin >> updatedName;
            productName[idex] = updatedName;
            cout << "updated product price ";
            updatedPrice = enterOpt(1000);
            productPrice[idex] = updatedPrice;

            cout << "updated product quantity ";
            updatedQuantity = enterOpt(500);
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
    clearScreen();
    storeUpdateProductDataIntoTheFile();
    admin(adminNmae);
}

void deleteProduct()
{
    clearScreen();
    cout << "\n \n";
    cout << "**********************************************************************" << endl;
    cout << "*                        DELETE PRODUCT                              *" << endl;
    cout << "**********************************************************************" << endl;
    userViewRepeateCode();
    int idex;
    char yesOrNo = 'y';
    while (yesOrNo != 'n')
    {
        cout << "Do you want to delete the product(y/n) ";
        cin >> yesOrNo;
        if (yesOrNo == 'y')
        {
            cout << "Enter the index for deletion of product..";
            idex = enterOpt(50);
            for (int i = idex; i < defaultItemsSize; i++)
            {
                productName[i] = productName[i + 1];
                productPrice[i] = productPrice[i + 1];
                Availabelquantity[i] = Availabelquantity[i + 1];
            }
            
            cout << "product deleted " << endl;
            defaultItemsSize--;
            // clearScreen();
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
       if(Availabelquantity[i]!=0)
       {
         cout << i << "\t" << productName[i] << "\t \t" << productPrice[i] << "\t \t" << Availabelquantity[i] << endl;
       }
    }
    clearScreen();
     storeUpdateProductDataIntoTheFile();
    admin(adminNmae);
}

// addmin-components

// user-component
void userViewProduct()
{

    system("cls");
    cout << "\n \n";
    cout << "**********************************************************************" << endl;
    cout << "***************************** VIEW PRODUCT *************************** " << endl;
    cout << "**********************************************************************" << endl;
    cout << "No."
         << "\t"
         << "Product Name"
         << "\t"
         << "productPrice"
         << "\t"
         << "Availabelquantity" << endl;
    for (int i = 0; i < defaultItemsSize; i++)
    {
        if (Availabelquantity[i] != 0)
        {
            cout << i << "\t" << productName[i] << "\t \t" << productPrice[i] << "\t \t" << Availabelquantity[i] << endl;
        }
    }
    clearScreen();
    user(userName);
}

void adminViewProduct()
{
    system("cls");
    cout << "\n \n";
    cout << "**********************************************************************" << endl;
    cout << "***************************** VIEW PRODUCT *************************** " << endl;
    cout << "**********************************************************************" << endl;
    cout << "No."
         << "\t"
         << "Product Name"
         << "\t"
         << "productPrice"
         << "\t"
         << "Availabelquantity" << endl;
    for (int i = 0; i < defaultItemsSize; i++)
    {
        if (Availabelquantity[i] != 0)
        {
            cout << i << "\t" << productName[i] << "\t \t" << productPrice[i] << "\t \t" << Availabelquantity[i] << endl;
        }
    }
    clearScreen();
    admin(adminNmae);
}

void userbBuyProduct()
{

    system("cls");
    cout << "\n \n";
    cout << "**********************************************************************" << endl;
    cout << "******************************* USER BUY PRODUCT **********************" << endl;
    cout << "**********************************************************************" << endl;
    cout << "No."
         << "\t"
         << "Product Name"
         << "\t"
         << "productPrice"
         << "\t"
         << "Availabelquantity" << endl;
    for (int i = 0; i < defaultItemsSize; i++)
    {
        if (Availabelquantity[i] != 0)
        {
            cout << i << "\t" << productName[i] << "\t \t" << productPrice[i] << "\t \t" << Availabelquantity[i] << endl;
        }
    }
    string x = "y";
    while (x != "n")
    {
        cout << "Do you want to buy product(y/n)..";
        cin >> x;
        if (x == "y")
        {

            cout << "How much product you want to buy.. ";
            int n = enterOpt(50);
            int idex;
            int selectedQuantity;
            for (int i = 0; i < n; i++)
            {
                cout << "Enter the index of the product ";
                idex = enterOpt(checkSizeOfArrayIndex());
                cout << "Enter No. of quantity you want to buy ";
                selectedQuantity = enterOpt(1000);
                if (selectedQuantity > Availabelquantity[idex])
                {
                    cout << "Selected Quantiy " << selectedQuantity << " is greater than availabe quantiy " << Availabelquantity[idex] << endl;
                }
                else
                {

                    userBuyProductName[userBuyProductquantity] = productName[idex];
                    userBuyProductProce[userBuyProductquantity] = productPrice[idex];
                    userBuySelectedProductQuantity[userBuyProductquantity] = selectedQuantity;
                    Availabelquantity[idex] = Availabelquantity[idex] - selectedQuantity; // update availabel quantity
                    userBuyProductStatus[userBuyProductquantity] = "UnPaid";
                    UserNameArr[userBuyProductquantity] = userName;
                    userBuyProductquantity++;
                }
            }
        }
        else if (x == "n")
        {
            // Trending Algorithm
            if (userBuyProductquantity > 4)
            {
                cout << "You might be interested in these products..";
                int prodQuantity, proPrice;
                string prName;
                for (int i = 0; i < userBuyProductquantity; i++)
                {
                    for (int j = i + 1; j < userBuyProductquantity; j++)
                    {
                        if (userBuySelectedProductQuantity[i] < userBuySelectedProductQuantity[j])
                        {
                            prName = userBuyProductName[i];
                            userBuyProductName[i] = userBuyProductName[j];
                            userBuyProductName[j] = prName;

              
                            proPrice = userBuyProductProce[i];
                            userBuyProductProce[i] = userBuyProductProce[j];
                            userBuyProductProce[j] = proPrice;

                            prodQuantity = userBuySelectedProductQuantity[i];
                            userBuySelectedProductQuantity[i] = userBuySelectedProductQuantity[j];
                            userBuySelectedProductQuantity[j] = prodQuantity;
                        }
                    }
                }
                cout << "Trending Products..." << endl;
                cout << "No."
                     << "\t"
                     << "Product Name"
                     << "\t"
                     << "productPrice"
                     << "\t"
                     << "Sold Quantity"
                     << "\t"
                     << "Available quantity"
                     << "\t" << endl;
                int isMatch = 0;

                for (int i = 0; i < userBuyProductquantity; i++)
                {

                    if (i == 0 || !isDuplicateExistInTrendProd(i))
                    {

                        if (Availabelquantity[i] == 0)
                        {
                            continue;
                        }
                        else
                        {
                            for (int j = 0; j < defaultItemsSize; j++)
                            {
                                if (productName[j] == userBuyProductName[i])
                                {
                                    cout << isMatch << "\t" << userBuyProductName[i] << "\t \t" << userBuyProductProce[i] << "\t \t \t" << userBuySelectedProductQuantity[i] << "\t \t" << Availabelquantity[j] << endl;
                                    isMatch++;
                                    if (isMatch == 2)
                                    {
                                        break;
                                    }
                                }
                            }
                        }

                        // }
                    }
                }
                cout << "Demanded Product! Do you want to buy?(y/n) ";
                cin >> x;
                int index, quantity2;
                if (x == "y")
                {
                    cout << "Enter the index of the product..";
                    index = enterOpt(3);
                    cout << "Enter Quantity..";
                    quantity2 = enterOpt(50);
                    for (int i = 0; i < defaultItemsSize; i++)
                    {
                        if (userBuyProductName[index] == productName[i])
                        {
                            if (quantity2 > Availabelquantity[i])
                            {
                                cout << "Selected Quantiy " << quantity2 << " is greater than availabe quantiy " << Availabelquantity[i] << endl;
                            }
                            else if (quantity2 <= Availabelquantity[i])
                            {
                                Availabelquantity[i] = Availabelquantity[i] - quantity2; // update availabel quantiy
                                userBuySelectedProductQuantity[index - 1] = quantity2;
                                userBuySelectedProductQuantity[userBuyProductquantity] = userBuySelectedProductQuantity[index - 1];
                                userBuyProductName[userBuyProductquantity] = productName[i];
                                userBuyProductProce[userBuyProductquantity] = productPrice[i];
                                userBuyProductStatus[userBuyProductquantity] = "UnPaid";
                                UserNameArr[userBuyProductquantity] = userName;

                                userBuyProductquantity++;
                            }
                        }
                    }
                }
                else
                {
                    // clearScreen();
                    break;
                }
            }
        }
    }
    cout << "No."
         << "\t"
         << "Product Name"
         << "\t"
         << "productPrice"
         << "\t \t"
         << "Selected Quantity"
         << "\t"
         << "Status" << endl;
    for (int i = 0; i < userBuyProductquantity; i++)
    {
        if (userName == UserNameArr[i] && userBuyProductStatus[i] == "UnPaid")
        {

            cout << i << "\t" << userBuyProductName[i] << "\t \t" << userBuyProductProce[i] << "\t \t \t \t" << userBuySelectedProductQuantity[i] << "\t \t" << userBuyProductStatus[i] << endl;
        }
    }
    storeUserBuyProuctIntoTheFile();
    storeUpdateProductDataIntoTheFile();
    clearScreen();
    user(userName);
}

void filterProduct()
{
    system("cls");
    cout << "\n \n";
    cout << "**********************************************************************" << endl;
    cout << "**************************** USER FILTER PRODUCT *********************" << endl;
    cout << "**********************************************************************" << endl;
    // userViewProduct();
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
            cout << "No."
                 << "\t"
                 << "Product Name"
                 << "\t"
                 << "productPrice"
                 << "\t"
                 << "Availabelquantity" << endl;
            for (int i = 0; i < totalFindProduct; i++)
            {

                cout << i << "\t" << filterProductNameArr[i] << "\t \t" << filterProductPriceArr[i] << "\t \t" << filterProductQuantityArr[i] << endl;
            }

            if (totalFindProduct > 0)
            {
                cout << "Product found.." << endl;
                string x = "y";
                cout << "Do you want to buy product(y/n)..";
                cin >> x;
                if (x == "y")
                {
                    int n;
                    cout << "How many products you want to buy.. ";
                    n = enterOpt(50);
                    int idex;
                    int selectedQuantity;
                    for (int i = 0; i < n; i++)
                    {
                        cout << "Enter the index of the product ";
                        int sizeOfFilterProductPrice = sizeof(filterProductPriceArr) / sizeof(int);
                        idex = enterOpt(sizeOfFilterProductPrice);
                        cout << "Enter No. of quantity you want to buy ";
                        selectedQuantity = enterOpt(1000);
                        for (int j = 0; j < defaultItemsSize; j++)
                        {
                            if (filterProductNameArr[idex] == productName[j])
                            {
                                if (selectedQuantity > Availabelquantity[j])
                                {
                                    cout << "Selected Quantiy " << selectedQuantity << " is greater than availabe quantiy " << Availabelquantity[j] << endl;
                                }
                                else
                                {
                                    userBuyProductName[userBuyProductquantity] = filterProductNameArr[idex];
                                    userBuyProductProce[userBuyProductquantity] = filterProductPriceArr[idex];
                                    userBuySelectedProductQuantity[userBuyProductquantity] = selectedQuantity;
                                    Availabelquantity[j] = Availabelquantity[i] - selectedQuantity; // update availabel quantity
                                    userBuyProductStatus[userBuyProductquantity] = "UnPaid";
                                    UserNameArr[userBuyProductquantity] = userName;
                                    userBuyProductquantity++;
                                }
                            }
                        }
                    }
                    storeUserBuyProuctIntoTheFile();
                    storeUpdateProductDataIntoTheFile();
                }
                else
                {
                    user(userName);
                    clearScreen();
                }
            }
            else
            {
                cout << "Product Not found.." << endl;
            }
        }
        else if (x == 'n')
        {
            user(userName);
            clearScreen();
        }
    }
}

void addToCart()
{
    cout << "\n \n";
    cout << "**********************************************************************" << endl;
    cout << "***************************** ADD TO CART PRODUCT ********************" << endl;
    cout << "**********************************************************************" << endl;
    cout << "No."
         << "\t"
         << "Product Name"
         << "\t"
         << "productPrice"
         << "\t"
         << "Selected Quantity" << endl;
    int index = 1;
    bool result = isAnyProductUnpaid();
    if (userBuyProductquantity > 0 && result == true)
    {
        for (int i = 0; i < userBuyProductquantity; i++)
        {
            if (userBuyProductStatus[i] == "Paid")
            {
                continue;
            }
            else
            {
                if (userName == UserNameArr[i])
                {
                    cout << index << "\t" << userBuyProductName[i] << "\t \t" << userBuyProductProce[i] << "\t \t" << userBuySelectedProductQuantity[i] << endl;
                    index++;
                }
            }
        }

        char x;
        cout << "You have Buy  these product do you want to Buy these product(y/n) " << endl;
        cin >> x;
        if (x == 'y')
        {
            char y;
            cout << "Do You want to Pay now(y/n)...";
            cin >> y;
            if (y == 'y')
            {
                string buyProductStatus = "Paid";
                // cout<<"Enter the index of the product you want to pay..";
                cout << "Great! till now you have the Buy the quantity..." << endl;
                cout << "No."
                     << "\t"
                     << "Product Name"
                     << "\t"
                     << "productPrice"
                     << "\t"
                     << "Selected Quantity"
                     << "\t"
                     << "Status" << endl;
                for (int i = 0; i < userBuyProductquantity; i++)
                {
                    if (userName == UserNameArr[i])
                    {
                        userBuyProductStatus[i] = buyProductStatus;
                        cout << i + 1 << "\t" << userBuyProductName[i] << "\t \t" << userBuyProductProce[i] << "\t \t" << userBuySelectedProductQuantity[i] << "\t \t \t" << userBuyProductStatus[i] << endl;
                    }
                }
                cout << "Successfully paid..." << endl;
                storeUserBuyProuctIntoTheFile();
            }
        }
        else if (x == 'n')
        {
            cout << "Pending...." << endl;
            clearScreen();
            user(userName);
        }
    }
    else
    {
        cout << "First Buy Product.." << endl;
        clearScreen();
        user(userName);
    }
    clearScreen();
    user(userName);
}
void viewCartOption()
{
    cout << "What Do You Want To Do?" << endl;
    cout << "--> 1 Delete Product" << endl;
    cout << "--> 2 Update Quantity" << endl;
    cout << "--> 3 Exit " << endl;
}
bool isAnyProductUnpaid()
{
    bool yesOrNo = false;
    for (int i = 0; i < userBuyProductquantity; i++)
    {
        if (userName == UserNameArr[i] && userBuyProductStatus[i] == "UnPaid")
        {
            yesOrNo = true;
        }
    }
    return yesOrNo;
}
void viewCart()
{

    cout << "***************************************************************************" << endl;
    cout << "***************************** ...Total Product.. **************************" << endl;
    cout << "***************************************************************************" << endl
         << endl;
    bool result = isAnyProductUnpaid();

    if (userBuyProductquantity != 0 && result == true)
    {
        cout << "****************************************************************************************" << endl;
        cout << " Your have the following quantity..." << endl;
        cout << "No."
             << "\t"
             << "Product Name"
             << "\t"
             << "productPrice"
             << "\t"
             << "Selected Quanntity"
             << "\t"
             << "Status " << endl;

        for (int i = 0; i < userBuyProductquantity; i++)
        {
            if (userBuyProductStatus[i] == "Paid")
            {
                continue;
            }
            else
            {
                if (userName == UserNameArr[i])
                {
                    cout << i << "\t" << userBuyProductName[i] << "\t \t" << userBuyProductProce[i] << "\t \t" << userBuySelectedProductQuantity[i] << "\t \t \t" << userBuyProductStatus[i] << endl;
                }
            }
        }
        cout << "****************************************************************************************" << endl;
        // update product quantityes
        int opt;
        bool y = true;
        while (y != false)
        {
            viewCartOption();
            cout << "enter option ";
            opt = enterOpt(3);
            if (opt == 1)
            {
                int index;
                cout << "Enter the index of the product you want to delete ";
                index = enterOpt(20);
                // update quantity of original array
                for (int i = 0; i < defaultItemsSize; i++)
                {
                    if (productName[i] == userBuyProductName[index])
                    {
                        Availabelquantity[i] = Availabelquantity[i] + userBuySelectedProductQuantity[index];
                    }
                }
                // update quantity of original array
                for (int i = index; i < userBuyProductquantity; i++)
                {
                    userBuyProductName[i] = userBuyProductName[i + 1];
                    userBuyProductProce[i] = userBuyProductProce[i + 1];
                    userBuySelectedProductQuantity[i] = userBuySelectedProductQuantity[i + 1];
                    userBuyProductStatus[i] = userBuyProductStatus[i + 1];
                }
                userBuyProductquantity--;
            }
            else if (opt == 2)
            {
                int index, updatedquan;
                cout << "Enter the index of the quantity you want to update ";
                index = enterOpt(50);
                cout << "Enter The Quantity ";
                updatedquan = enterOpt(1000);
                for (int i = 0; i < defaultItemsSize; i++)
                {
                    if (productName[i] == userBuyProductName[index])
                    {
                        if (userBuySelectedProductQuantity[index] < updatedquan)
                        {
                            int increaseUpdate = updatedquan - userBuySelectedProductQuantity[index];
                            Availabelquantity[i] = Availabelquantity[i] - increaseUpdate;
                        }
                        if (userBuySelectedProductQuantity[index] > updatedquan)
                        {
                            int decreseUpdate = userBuySelectedProductQuantity[index] - updatedquan;
                            Availabelquantity[i] = decreseUpdate + Availabelquantity[i];
                        }
                    }
                }
                userBuySelectedProductQuantity[index] = updatedquan;
            }
            else if (opt == 3)
            {
                y = false;
                break;
            }
        }
    }
    else
    {
        cout << "Your cart is empty..." << endl;
    }
    storeUserBuyProuctIntoTheFile();
    clearScreen();
    user(userName);
}

void userAuth()
{
    loginAndSingUpMenu();
    cout << "Enter your option ";
    int n = enterOpt(3);

    if (n == 1)
    {
        userRegister();
    }
    else if (n == 2)
    {
        userLogin();
    }
    if (n == 3)
    {
        eCommerenceMenu();
    }
}

int loginAndSingUpMenu()
{
    system("cls");
    cout << "\n \n";
    cout << "************************************************************************" << endl;
    cout << "****************************** WELCOME *********************************" << endl;
    cout << "************************************************************************" << endl;
    cout << "1 SingUp" << endl;
    cout << "2 SingIn" << endl;
    cout << "3 Exit " << endl;
}

void userRegister()
{

    bool isValide = false;
    cout << "Pleasse Register" << endl;
    string name;
    cout << "Enter  Username....";
    cin >> name;
    string password;
    cout << "Enter Password ...";
    cin >> password;
    int idx = 0;
    while (name[idx] != '\0')
    {
        if (name[idx] == '@')
        {
            isValide = true;
            break;
        }
        idx++;
    }
    if (totalNumberOfUser > 0)
    {

        bool isExist = true;
        for (int i = 0; i < totalNumberOfUser; i++)
        {
            if (isValide == true && userAuthArrayName[i] != name)
            {
                isExist = false;
            }
        }
        if (isExist == false)
        {
            userAuthArrayName[totalNumberOfUser] = name;
            userAuthArrayPassWord[totalNumberOfUser] = password;
            userName = name; // global
            cout << "Successfully Register..." << endl;
            totalNumberOfUser++;

            clearScreen();
            storeUserIntoTheFile();
            userAuth();
        }
        else if (isExist == true)
        {
            cout << "Username already Exist..." << endl;
            clearScreen();
            userAuth();
        }
    }
    else if (totalNumberOfUser == 0 && isValide == true)
    {
        userAuthArrayName[totalNumberOfUser] = name;
        userAuthArrayPassWord[totalNumberOfUser] = password;
        cout << "Successfully Register...";
        userName = name; // global
        totalNumberOfUser++;
        clearScreen();
        storeUserIntoTheFile();
        userAuth();
    }

    else
    {
        cout << "User must contain'@'symbol" << endl;
        clearScreen();
        userAuth();
    }
}

void userLogin()
{

    cout << "Please login first..." << endl;
    string name;
    cout << "Enter Your UserName...";
    cin >> name;
    string password;
    cout << "Enter your password...";
    cin >> password;
    // cout << totalNumberOfUser << endl;
    bool isUserExist = false;
    for (int i = 0; i < totalNumberOfUser; i++)
    {
        if (userAuthArrayName[i] == name && userAuthArrayPassWord[i] == password)
        {
            isUserExist = true;
            userLoignIndex = i; // get user index
        }
    }
    if (isUserExist == true)
    {

        userName = name;
        clearScreen();
        user(name);
    }
    else if (isUserExist == false)
    {
        cout << "Plaese Enter corrrect userName Or Password.." << endl;
        clearScreen();
        userAuth();
    }
}

void storeUserIntoTheFile()
{
    //     string userAuthArrayName[100];
    // string userAuthArrayPassWord[100];
    char comma = ',';
    fstream file;
    file.open("userAuth.txt", ios::out);
    for (int i = 0; i < totalNumberOfUser; i++)
    {
        file << userAuthArrayName[i] << comma;
        file << userAuthArrayPassWord[i] << endl;
    }

    file.close();
}

void populateUserIntoArr()
{

    fstream file;
    string line;
    file.open("userAuth.txt", ios::in);
    while (getline(file, line))
    {
        userAuthArrayName[totalNumberOfUser] = commaSeprateUser(line, 1);
        userAuthArrayPassWord[totalNumberOfUser] = commaSeprateUser(line, 2);
        totalNumberOfUser++;
    }
    file.close();
}
string commaSeprateUser(string line, int index)
{
    int commaCount = 1;
    string nameOrPass;
    for (int i = 0; i < line.length(); i++)
    {
        if (line[i] == ',')
        {
            commaCount++;
        }
        else if (commaCount == index)
        {
            nameOrPass = nameOrPass + line[i];
        }
    }
    return nameOrPass;
}

void storeAdminIntoTheFile()
{
    char comma = ',';
    fstream file;
    file.open("adminAuth.txt", ios::out);
    for (int i = 0; i < totalNumberOfAdmin; i++)
    {
        file << adminAuthArryName[i] << comma;
        file << adminAuthArryPass[i] << endl;
    }

    file.close();
}
void populateAdminIntoArr()
{
    fstream file;
    string line;
    file.open("adminAuth.txt", ios::in);
    while (getline(file, line))
    {
        adminAuthArryName[totalNumberOfAdmin] = commaSeprateUser(line, 1);
        adminAuthArryPass[totalNumberOfAdmin] = commaSeprateUser(line, 2);
        totalNumberOfAdmin++;
    }
}

void adminAuth()
{
    loginAndSingUpMenu();
    cout << "Enter option ";
    int n = enterOpt(3);
    if (n == 1)
    {
        adminRegister();
    }
    else if (n == 2)
    {
        adminLogin();
    }
    else if (n == 3)
    {
        eCommerenceMenu();
    }
}

void adminLogin()
{
    bool isSuccessfulLogin = false;

    cout << "Please login " << endl;
    string name;
    cout << "Enter your UserName...";
    cin >> name;
    string password;
    cout << "Enter your password...";
    cin >> password;
    for (int i = 0; i < totalNumberOfAdmin; i++)
    {

        if (adminAuthArryName[i] == name && adminAuthArryPass[i] == password)
        {
            isSuccessfulLogin = true;
        }
    }
    if (isSuccessfulLogin == true)
    {
        cout << "Loign successfully..." << endl;
        clearScreen();
        adminNmae = name;
        admin(name);
    }
    else if (isSuccessfulLogin == false)
    {
        cout << "Enter your correct Credentials" << endl;
        clearScreen();
        adminAuth();
    }
}
void adminRegister()
{
    bool isValide = false;
    // bool adminAlreadyExist = false;
    cout << "Pleasse Register...." << endl;
    string name;
    cout << "Enter Username....";
    cin >> name;
    string password;
    cout << "Enter Password ...";
    cin >> password;
    int idx = 0;
    while (name[idx] != '\0')
    {
        if (name[idx] == '@')
        {
            isValide = true;
        }
        idx++;
    }
    if (isValide == true) // authenciation successful
    {
        if (totalNumberOfAdmin > 0)
        {
            cout << "Admin Alreay Exist" << endl;
            clearScreen();
            adminAuth();
        }
        else if (totalNumberOfAdmin == 0)
        {
            adminAuthArryName[totalNumberOfAdmin] = name;
            adminAuthArryPass[totalNumberOfAdmin] = password;
            totalNumberOfAdmin++;
            cout << "Admin Registered Successfully.." << endl;
            clearScreen();
            storeAdminIntoTheFile();
            adminAuth();
        }
    }
    else if (isValide == false)
    {
        cout << "userName must contain '@ symbol..'" << endl;
        clearScreen();
        adminAuth();
    }
}

void listOfLoginUsers()
{
    system("cls");
    cout << "\n \n";
    cout << "************************************************************************" << endl;
    cout << "                               USER LIST     " << endl;
    cout << "************************************************************************" << endl;
    if (totalNumberOfUser > 0)
    {
        cout << "No."
             << "\t \t"
             << "UserName Name"
             << "\t \t"
             << "User Password" << endl;
        for (int i = 0; i < totalNumberOfUser; i++)
        {
            cout << i + 1
                 << "\t \t"
                 << userAuthArrayName[i]
                 << "\t \t \t"
                 << userAuthArrayPassWord[i] << endl;
        }
        cout << "\n \n";
        cout << "************************************************************************" << endl;
        cout << "             Total Numnber Of User : " << totalNumberOfUser << "   " << endl;
        cout << "************************************************************************" << endl;
        clearScreen();
        admin(adminNmae);
    }
    else
    {
        cout << "You don't have any user right now..." << endl;
        clearScreen();
        admin(adminNmae);
    }
}

void userChangeProfileSetting()
{
    cout << "\n \n";
    cout << "**********************************************************************" << endl;
    cout << "***************************** USER PROFILE SETTING *******************" << endl;
    cout << "**********************************************************************" << endl;
    bool isUSerAuthenciate = false;
    int userIndex;
    cout << "Enter Your Credentials..." << endl;
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
    }
    if (isUSerAuthenciate == true)
    {
        cout << "Please updated your credentials.." << endl;
        string name2, password2;
        cout << "Enter your name...";
        cin >> name2;
        cout << "Enter your password...";
        cin >> password2;
        int idx = 0;
        bool isVilade = false;
        while (name2[idx] != '\0')
        {
            if (name2[idx] == '@')
            {
                isVilade = true;
                break;
            }
            idx++;
        }
        for (int i = 0; i < totalNumberOfUser; i++)
        {
            if (userAuthArrayName[i] == name2)
            {
                break;
            }
            else if (isVilade == true && userAuthArrayName[i] != name2)
            {
                userAuthArrayName[userIndex] = name2;
                userAuthArrayPassWord[userIndex] = password2;
                userName = name2;
                cout << "Your Credentials updated successfully..." << endl;
                clearScreen();
            }
        }
        if (isVilade == false)
        {
            cout << "Must include the '@' " << endl;
            clearScreen();
        }
    }
    else if (isUSerAuthenciate == false)
    {
        cout << "Please Enter correct password Or name..." << endl;
        clearScreen();
    }
    storeUserIntoTheFile();
    user(userName);
}

void adminChangeProfileSetting()
{
    system("cls");
    cout << "\n \n";
    cout << "**********************************************************************" << endl;
    cout << "*************************** ADMIN PROFILE SETTING ********************" << endl;
    cout << "**********************************************************************" << endl;
    cout << "Enter Your Credentials..." << endl;
    string name;
    cout << "Enter your name....";
    cin >> name;
    string password;
    cout << "Enter your Password...";
    cin >> password;
    if (adminAuthArryName[0] == name && adminAuthArryPass[0] == password)
    {
        cout << "Please updated your credentials.." << endl;
        string name2, password2;
        cout << "Enter your name...";
        cin >> name2;
        cout << "Enter your password...";
        cin >> password2;
        int idx = 0;
        bool isVilade = false;
        while (name2[idx] != '\0')
        {
            if (name2[idx] == '@')
            {
                isVilade = true;
                break;
            }
            idx++;
        }
        if (isVilade == true)
        {

            adminAuthArryName[0] = name2;
            adminAuthArryPass[0] = password2;
            cout << "Your Credentials updated successfully..." << endl;
            adminNmae = name2;
            clearScreen();
            storeAdminIntoTheFile();
            admin(adminNmae);
        }
        else if (isVilade == false)
        {
            cout << "Must include the '@' " << endl;
            clearScreen();
            admin(adminNmae);
        }
    }
    else
    {
        cout << "Please Enter correct password Or name..." << endl;
        Sleep(700);
        clearScreen();
        admin(adminNmae);
    }
}

void userLogout()
{
    char x;
    cout << "Do you want to delete your account(y/n) ";
    cin >> x;
    if (x == 'y')
    {
        for (int i = userLoignIndex; i < totalNumberOfUser; i++)
        {
            userAuthArrayName[i] = userAuthArrayName[i + 1];
            userAuthArrayPassWord[i] = userAuthArrayPassWord[i + 1];
            totalNumberOfUser--;
            cout << "Account Deleted successfully..." << endl;
            storeUserIntoTheFile();
             clearScreen();
            eCommerenceMenu();
            // Sleep(700);
        }
    }
    else if (x == 'n')
    {
        cout << "Your Account is not deleted";

        clearScreen();
        user(userName);
    }
}
void adminLogout()
{
    string tem;
    string pass;
    char x;
    cout << "Do you want to delete you account(y/n)";
    cin >> x;
    if (x == 'y')
    {
        tem = adminAuthArryName[0];
        adminAuthArryName[0] = adminAuthArryName[1];
        adminAuthArryName[1] = tem;
        adminAuthArryName[1] = adminAuthArryName[0];
        pass = adminAuthArryPass[0];
        adminAuthArryPass[0] = adminAuthArryPass[1];
        adminAuthArryPass[1] = pass;

        totalNumberOfAdmin--;
        cout << "Account is Deleted .." << endl;
        clearScreen();
        storeAdminIntoTheFile();
        eCommerenceMenu();
    }
    else if (x == 'n')
    {
        cout << "You account is not Deleted..." << endl;
        clearScreen();
        admin(adminNmae);
    }
}

void userPurchasedProductList()
{
    int totalPaid = 0;
    int idnex = 1;

    cout << "\n \n";
    cout << "******************************************************************************" << endl;
    cout << "****************************List of the Purchased Product*********************" << endl;
    cout << "******************************************************************************" << endl
         << endl;
    cout << " Your have the following quantity..." << endl;
    cout << "No."
         << "\t"
         << "Product Name"
         << "\t"
         << "productPrice"
         << "\t"
         << "Selected Quantity"
         << "\t"
         << "Total Price " << endl;
    for (int i = 0; i < userBuyProductquantity; i++)
    {
        if (userBuyProductStatus[i] == "UnPaid")
        {
            continue;
        }
        else
        {
            if (userName == UserNameArr[i])
            {
                totalPaid = totalPaid + purchasedProductBill(userBuyProductProce[i], userBuySelectedProductQuantity[i]);

                int singleProductPrice = purchasedProductBill(userBuyProductProce[i], userBuySelectedProductQuantity[i]);
                cout << idnex << "\t" << userBuyProductName[i] << "\t \t" << userBuyProductProce[i] << "\t \t \t" << userBuySelectedProductQuantity[i] << " \t \t" << singleProductPrice << endl;
                idnex++;
            }
        }
    }
    cout << "\n";
    cout << " ******************************************************************************" << endl;
    cout << "                Total Product Price: " << totalPaid << endl;
    cout << " ******************************************************************************" << endl;

    clearScreen();
    user(userName);
}

int purchasedProductBill(int quantity, int price)
{
    return quantity * price;
}

void totalSoldProduct()
{
    system("cls");
    cout << "\n \n";
    cout << "**********************************************************************************" << endl;
    cout << "******************************  Sold Product List  *******************************" << endl;
    cout << "**********************************************************************************" << endl;
    int opt;
    cout << "     Choose Catagory " << endl;
    cout << " --> 1 The Product that has been Sold " << endl;
    cout << " --> 2 The Product that is not UnPaid " << endl;
    cout << " --> 3 Exit " << endl;
    cout << "Enter your option ";
    opt = enterOpt(3);
    if (opt == 1)
    {
        int totalPaid = 0;
        int idnex = 1;
        system("cls");
        cout << "*****************************************************************************************************" << endl;
        cout << "***********************************     Total Sold Product      *************************************" << endl;
        cout << "*****************************************************************************************************" << endl
             << endl;
        cout << "Your have the following quantity..." << endl;
        cout << "No."
             << "\t"
             << "Product Name"
             << "\t"
             << "productPrice"
             << "\t"
             << "Selected Quantity"
             << "\t"
             << "Total Price "
             << "\t"
             << " User Name " << endl;
        for (int i = 0; i < userBuyProductquantity; i++)
        {
            if (userBuyProductStatus[i] == "UnPaid")
            {
                continue;
            }
            else
            {
                totalPaid = totalPaid + purchasedProductBill(userBuyProductProce[i], userBuySelectedProductQuantity[i]);

                int singleProductPrice = purchasedProductBill(userBuyProductProce[i], userBuySelectedProductQuantity[i]);
                cout << idnex << "\t" << userBuyProductName[i] << "\t \t" << userBuyProductProce[i] << "\t \t \t" << userBuySelectedProductQuantity[i] << " \t \t" << singleProductPrice << "\t \t" << UserNameArr[i] << endl;
                idnex++;
            }
        }

        cout << " *******************************************************" << endl;
        cout << " *          Total Revenue : " << totalPaid << "         *" << endl;
        cout << " *******************************************************" << endl;
        cout << "press any key to exist..";
        getch();
    }
    else if (opt == 2)
    {
        int totalUnPaid = 0;
        int idnex = 1;
        system("cls");
        cout << "****************************************************************************************************" << endl;
        cout << "***********************************     Total Unpaid Product      **********************************" << endl;
        cout << "****************************************************************************************************" << endl
             << endl;
        cout << " Your have the following quantity..." << endl;
        cout << "No."
             << "\t"
             << "Product Name"
             << "\t"
             << "productPrice"
             << "\t"
             << "Selected Quantity"
             << "\t"
             << "Total Price "
             << "\t"
             << "userName" << endl;
        for (int i = 0; i < userBuyProductquantity; i++)
        {
            if (userBuyProductStatus[i] == "Paid")
            {
                continue;
            }
            else
            {
                totalUnPaid = totalUnPaid + purchasedProductBill(userBuyProductProce[i], userBuySelectedProductQuantity[i]);

                int singleProductPrice = purchasedProductBill(userBuyProductProce[i], userBuySelectedProductQuantity[i]);
                cout << idnex << "\t" << userBuyProductName[i] << "\t \t" << userBuyProductProce[i] << "\t \t \t" << userBuySelectedProductQuantity[i] << " \t \t" << singleProductPrice << "\t \t" << UserNameArr[i] << endl;
                idnex++;
            }
        }

        cout << " *******************************************************" << endl;
        cout << " *          Total Revenue : " << totalUnPaid << "      *" << endl;
        cout << " *******************************************************" << endl;
    }
    else if (opt == 3)
    {
        admin(adminNmae);
        clearScreen();
    }

    clearScreen();
    admin(adminNmae);
}

void 
productAnalystics()
{
    system("cls");
    cout << "\n \n";
    cout << "**********************************************************************************" << endl;
    cout << "******************************  Welcome to the Product Anaystics  ****************" << endl;
    cout << "**********************************************************************************" << endl;

    int prodQuantity, proPrice;
    string prName;
    if (userBuyProductquantity > 0)
    {
        for (int i = 0; i < userBuyProductquantity; i++)
        {
            for (int j = i + 1; j < userBuyProductquantity; j++)
            {
                if (userBuySelectedProductQuantity[i] < userBuySelectedProductQuantity[j])
                {
                    prName = userBuyProductName[i];
                    userBuyProductName[i] = userBuyProductName[j];
                    userBuyProductName[j] = prName;

                    proPrice = userBuyProductProce[i];
                    userBuyProductProce[i] = userBuyProductProce[j];
                    userBuyProductProce[j] = proPrice;

                    prodQuantity = userBuySelectedProductQuantity[i];
                    userBuySelectedProductQuantity[i] = userBuySelectedProductQuantity[j];
                    userBuySelectedProductQuantity[j] = prodQuantity;
                }
            }
        }
        if (userBuyProductquantity > 0)
        {
            barChar();

            gotoxy(1, 15);
            cout << "Top Sold Products!..." << endl;
            gotoxy(1, 16);
            cout << "No."
                 << "\t"
                 << "Product Name"
                 << "\t"
                 << "productPrice"
                 << "\t"
                 << "Sold Quantity"
                 << "\t" << endl;
            int isNotMatch = 0;
            for (int i = 0; i < userBuyProductquantity; i++)
            {
                if (i == 0 || !isDuplicateExistInTrendProd(i))
                {
                    isNotMatch++;
                    plcaeTrendProdcutName(userBuyProductName[i], isNotMatch);
                    gotoxy(1, 16 + isNotMatch);
                    cout << isNotMatch << "\t" << userBuyProductName[i] << "\t \t" << userBuyProductProce[i] << "\t \t \t" << userBuySelectedProductQuantity[i] << endl;

                    if (isNotMatch == 3)
                    {
                        break;
                    }
                }
            }
        }
        clearScreen();
        admin(adminNmae);
    }
    else
    {
        cout << "Nothing is sold..";
        clearScreen();
        admin(adminNmae);
    }
}
bool isDuplicateExistInTrendProd(int index)
{
    for (int i = 0; i < index; i++)
    {
        if (userBuyProductName[i] == userBuyProductName[index])
        {
            return true;
        }
    }
    return false;
}
void trendingProducts()
{
    cout << "\n \n";
    cout << "**********************************************************************************" << endl;
    cout << "**********************************  Trending  Product   **************************" << endl;
    cout << "**********************************************************************************" << endl;
    int prodQuantity, proPrice;
    string prName;
    if (userBuyProductquantity > 0)
    {
        for (int i = 0; i < userBuyProductquantity; i++)
        {
            for (int j = i + 1; j < userBuyProductquantity; j++)
            {
                if (userBuySelectedProductQuantity[i] < userBuySelectedProductQuantity[j])
                {
                    prName = userBuyProductName[i];
                    userBuyProductName[i] = userBuyProductName[j];
                    userBuyProductName[j] = prName;

                    proPrice = userBuyProductProce[i];
                    userBuyProductProce[i] = userBuyProductProce[j];
                    userBuyProductProce[j] = proPrice;

                    prodQuantity = userBuySelectedProductQuantity[i];
                    userBuySelectedProductQuantity[i] = userBuySelectedProductQuantity[j];
                    userBuySelectedProductQuantity[j] = prodQuantity;
                }
            }
        }
        if (userBuyProductquantity > 0)
        {

            cout << "Trending Products..." << endl;
            cout << "No."
                 << "\t"
                 << "Product Name"
                 << "\t"
                 << "productPrice"
                 << "\t"
                 << "Sold Quantity"
                 << "\t"
                 << "Available quantity"
                 << "\t" << endl;

            int isMatch = 0;
            int newAvailaleQuanityAccToProName;
            for (int i = 0; i < userBuyProductquantity; i++)
            {
                if (i == 0 || !isDuplicateExistInTrendProd(i))
                {
                    if (Availabelquantity[i] == 0)
                    {
                        continue;
                    }
                    else
                    {
                        // check the availbe quantiy by their name
                        for (int j = 0; j < defaultItemsSize; j++)
                        {
                            if (userBuyProductName[i] == productName[j])
                            {

                                cout << isMatch << "\t" << userBuyProductName[i] << "\t \t" << userBuyProductProce[i] << "\t \t \t" << userBuySelectedProductQuantity[i] << "\t \t \t" << Availabelquantity[j] << endl;
                                isMatch++;
                                if (isMatch == 2)
                                {
                                    break;
                                }
                            }
                        }
                        // check the availbe quantiy by their name
                    }
                }
            }
            char x;
            cout << "Demanded Product! Do you want to buy?(y/n) ";
            cin >> x;
            int index, quantity2;
            if (x == 'y')
            {
                cout << "Enter the index of the product..";
                index = enterOpt(3);
                cout << "Enter Quantity..";
                quantity2 = enterOpt(100);
                for (int i = 0; i < totalSizeOfitems; i++)
                {
                    if (userBuyProductName[index] == productName[i])
                    {
                        if (quantity2 > Availabelquantity[i])
                        {
                            cout << "Selected Quantiy " << quantity2 << " is greater than availabe quantiy " << Availabelquantity[i] << endl;
                            cout << "press any key to contiue..";
                            getch();
                        }
                        else if (quantity2 <= Availabelquantity[i])
                        {
                            Availabelquantity[i] = Availabelquantity[i] - quantity2; // update availabel quantiy
                            userBuySelectedProductQuantity[index] = quantity2;
                            userBuySelectedProductQuantity[userBuyProductquantity] = userBuySelectedProductQuantity[index];
                            userBuyProductName[userBuyProductquantity] = userBuyProductName[index];
                            userBuyProductProce[userBuyProductquantity] = userBuyProductProce[index];
                            // userBuyProductName[userBuyProductquantity] = productName[i];
                            // userBuyProductProce[userBuyProductquantity] = productPrice[i];
                            userBuyProductStatus[userBuyProductquantity] = "UnPaid";
                            UserNameArr[userBuyProductquantity] = userName;

                            userBuyProductquantity++;
                            clearScreen();
                        }
                    }
                }
            }
            else if (x == 'n')
            {
                return;
            }
        }
        else
        {
            cout << "No Product in trend...." << endl;
            clearScreen();
        }
    }
    else
    {
        cout << "No product in trend.." << endl;
        clearScreen();
    }
    storeUserBuyProuctIntoTheFile();
    storeUpdateProductDataIntoTheFile();
    user(userName);
    clearScreen();
}

void userViewRepeateCode()
{
    cout << "No."
         << "\t"
         << "Product Name"
         << "\t"
         << "productPrice"
         << "\t"
         << "Availabelquantity" << endl;
    for (int i = 0; i < defaultItemsSize; i++)
    {
        if (Availabelquantity[i] != 0)
        {

            cout << i << "\t" << productName[i] << "\t \t" << productPrice[i] << "\t \t" << Availabelquantity[i] << endl;
        }
    }
}
void createProductFile()
{
    fstream file;
    string line;
    file.open("createProduct.txt", ios::in);
    while (getline(file, line))
    {
        productName[defaultItemsSize] = commaSeprateUser(line, 1);
        productPrice[defaultItemsSize] = stoi(commaSeprateUser(line, 2));
        Availabelquantity[defaultItemsSize] = stoi(commaSeprateUser(line, 3));
        defaultItemsSize++;
    }
}
void storeUpdateProductDataIntoTheFile()
{
    fstream file;
    char comma = ',';
    file.open("createProduct.txt", ios::out);
    for (int i = 0; i < defaultItemsSize; i++)
    {
        file << productName[i] << comma;
        file << productPrice[i] << comma;
        file << Availabelquantity[i] << endl;
    }
    file.close();
}

void storeUserBuyProuctIntoTheFile()
{

    fstream file;
    char comma = ',';
    file.open("storeBuyProduct.txt", ios::out);
    for (int i = 0; i < userBuyProductquantity; i++)
    {
        file << userBuyProductName[i] << comma;
        file << userBuyProductProce[i] << comma;
        file << userBuySelectedProductQuantity[i] << comma;
        file << userBuyProductStatus[i] << comma;
        file << UserNameArr[i] << endl;
    }
    file.close();
}

void loadUserBuyProductIntoTheArr()
{

    fstream file;
    string line;
    file.open("storeBuyProduct.txt", ios::in);

    while (getline(file, line))
    {

        userBuyProductName[userBuyProductquantity] = commaSeprateUser(line, 1);
        userBuyProductProce[userBuyProductquantity] = stoi(commaSeprateUser(line, 2));
        userBuySelectedProductQuantity[userBuyProductquantity] = stoi(commaSeprateUser(line, 3));
        userBuyProductStatus[userBuyProductquantity] = commaSeprateUser(line, 4);
        UserNameArr[userBuyProductquantity] = commaSeprateUser(line, 5);
        userBuyProductquantity++;
    }
    file.close();
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

void gotoxy(int x, int y)
{
    COORD coordinate;
    coordinate.X = x;
    coordinate.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinate);
}
void barChar()
{
    // system("cls");
    char box = 219;
    for (int i = 0; i < 7; i++)
    {
        cout << "|";
        for (int j = 0; j < 10; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < 10; i++)
    {
        cout << "---";
    }
    for (int i = 0; i < 5; i++)
    {
        gotoxy(5, 11 - i);
        cout << box << endl;
    }

    for (int i = 0; i < 3; i++)
    {
        gotoxy(15, 11 - i);
        cout << box << endl;
    }
    for (int i = 0; i < 1; i++)
    {
        gotoxy(25, 11 - i);
        cout << box << endl;
    }
}
void plcaeTrendProdcutName(string name, int matchIndex)
{
    if (matchIndex == 1)
    {
        gotoxy(2, 13);
        cout << name;
    }
    else if (matchIndex == 2)
    {
        gotoxy(13, 13);
        cout << name;
    }
    else if (matchIndex == 3)
    {
        gotoxy(23, 13);
        cout << name << endl;
    }
}

void adminProductDetails()
{
    system("cls");
    cout << "************************************************************************" << endl;
    cout << "*                              Product Detail                          * " << endl;
    cout << "************************************************************************" << endl;
    cout << "No."
         << "\t"
         << "Product Name"
         << "\t"
         << "productPrice"
         << "\t"
         << "Availabelquantity"
         << "\t"
         << "Product Stock" << endl;

    for (int i = 0; i < defaultItemsSize; i++)
    {
        string stock = (Availabelquantity[i] == 0) ? "\033[31mOut of Stock\033[0m" : "\033[33mIn Stock\033[0m";
        cout << i << "\t" << productName[i] << "\t \t" << productPrice[i] << "\t \t" << Availabelquantity[i] << "\t \t \t " << stock << endl;
    }
    string y;
    cout << "Do you want to  increase the product quantity(y/n)";
    cin >> y;
    int index, quantity;
    if (y == "y")
    {
        int howMany;
        cout << "How many product you want update ";
        howMany = enterOpt(30);
        for (int i = 0; i < howMany; i++)
        {
            cout << "Enter the index of the product";
            index = enterOpt(100);
            cout << "Enter qunatity";
            quantity = enterOpt(500);
            Availabelquantity[index] = quantity;
        }
    }
    storeUpdateProductDataIntoTheFile();
    clearScreen();
    admin(adminNmae);
}

int checkSizeOfArrayIndex()
{
    int size = 0;
    for (int i = 0; i < totalSizeOfitems; i++)
    {
        if (Availabelquantity[i] != 0)
        {
            size++;
        }
    }
    return size;
}
