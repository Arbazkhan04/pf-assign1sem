#include <iostream>
#include <fstream>
#include <conio.h>
#include <string>
#include <windows.h>
using namespace std;
int defaultItemsSize = 0;
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
// file handlling
void storeUserIntoTheFile(string, string);
void populateUserIntoArr();
string commaSeprateUser(string line, int index);
void storeAdminIntoTheFile(string, string);
void populateAdminIntoArr();
void createProductFile();
// file handling
void userChangeProfileSetting();
void adminChangeProfileSetting();
void userLogout();
void adminLogout();
void CreateProduct(); // admin-view
void listOfLoginUsers();
void adminUpDateProduct();
void productAnalystics();
void admin(string);
void user(string);
void deleteProduct();
void userViewProduct();
void userViewRepeateCode();
void userbBuyProduct();
void filterProduct();
void addToCart();
void viewCart();
void viewCartOption();
void userPurchasedProductList();
void totalSoldProduct();
int purchasedProductBill(int, int);
void trendingProducts();
int userBuyProductquantity = 0;
const int userBuyProductArrSize = 100;
string userBuyProductStatus[userBuyProductArrSize];
string userBuyProductName[userBuyProductArrSize];
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
    string number = "0";
    while (number != "3")
    {
        system("cls");
        eCommerenceTitle();
        cout << "#########################################################" << endl;
        cout << "#  Select component you have to see                     #" << endl;
        cout << "#  1 User                                               #" << endl;
        cout << "#  2 Admin                                              #" << endl;
        cout << "#  3 Exit                                               #" << endl;
        cout << "#  Select any option 1 OR 2                             #" << endl;
        cout << "#########################################################" << endl;

        cout << "Enter a option.....";
        cin >> number;

        if (number == "1")
        {

            userAuth();
        }
        else if (number == "2")
        {
            adminAuth();
        }
        else if (number == "3")
        {
            break;
        }
        else
        {
            cout << "Please Enter the relevent Number!Press any Key to continue.. ";
            getch();
        }
    }
}

// admin-module
void admin(string name)
{
    system("cls");
    string number = "0";
    while (number != "10")
    {
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
        cout << "  8 Change Profile Setting                             " << endl;
        cout << "  9 Delete Account                                     " << endl;
        cout << "  10 Exit                                              " << endl;

        cout << "Enter the code For the product......";
        cin >> number;

        if (number == "10")
        {
            break;
        }
        else if (number == "2")
        {
            adminUpDateProduct();
        }
        else if (number == "3")
        {
            deleteProduct();
        }
        else if (number == "4")
        {
            userViewProduct();
        }
        else if (number == "5")
        {
            totalSoldProduct();
        }
        else if (number == "1")
        {
            system("cls");
            CreateProduct();
        }
        else if (number == "6")
        {
            listOfLoginUsers();
        }
        else if (number == "7")
        {
            productAnalystics();
        }
        else if (number == "8")
        {
            adminChangeProfileSetting();
        }
        else if (number == "9")
        {
            adminLogout();
        }
    }
}
// admin-module

void user(string name)
{
    system("cls");
    string number = "0";
    while (number != "10")
    {
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

        cout << "Enter The code For the commpoonet...";
        cin >> number;
        if (number == "1")
        {
            userViewProduct();
        }
        else if (number == "2")
        {
            userbBuyProduct();
        }
        else if (number == "3")
        {
            filterProduct();
        }
        else if (number == "4")
        {
            system("cls");
            viewCart();
        }
        else if (number == "5")
        {
            system("cls");
            addToCart();
        }
        else if (number == "6")
        {
            system("cls");
            userPurchasedProductList();
        }
        else if (number == "7")
        {
            system("cls");
            trendingProducts();
        }
        else if (number == "8")
        {
            system("cls");
            userChangeProfileSetting();
        }
        else if (number == "9")
        {
            system("cls");
            userLogout();
        }
        else if (number == "10")
        {
            break;
        }
    }
}
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
    system("cls");
    cout << "\n \n";
    cout << "**********************************************************************" << endl;
    cout << "*                           UPDATE PRODUCT                           *" << endl;
    cout << "**********************************************************************" << endl;
    userViewRepeateCode();
    int idex, updatedPrice, updatedQuantity;
    char yesOrNo = 'y';
    fstream file;
    string line;
    string namePro;
    int proPri;
    int Quna;
    file.open("createProduct.txt", ios::in);
    while (yesOrNo != 'n')
    {
        cout << "Do you want to update the product(y/n)..";
        cin >> yesOrNo;
        if (yesOrNo == 'y')
        {
            cout << "Enter the index of product you want to update.. ";
            cin >> idex;
            while (getline(file, line))
            {
                namePro = commaSeprateUser(line, 1);
                proPri = stoi(commaSeprateUser(line, 2));
                Quna = stoi(commaSeprateUser(line, 3));
                if (productName[idex] == namePro && productPrice[idex] == proPri && Availabelquantity[idex] == Quna)
                {
                    fstream fild2;
                    fild2.open("createProduct.txt",ios::out);
                    string updatedName;
                    cout << "Enter the name of product.. ";
                    fild2 << updatedName;
                    productName[idex] = updatedName;
                    cout << "updated product price ";
                    fild2<< updatedPrice;
                   
                    cout << "updated product quantity ";
                    fild2 << updatedQuantity;
                   fild2.close();
                }
            }
        }
        else if (yesOrNo == 'n')
        {
            yesOrNo = 'n';
            break;
        }
    }
    file.close();
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
            cin >> idex;
            for (int i = idex; i < defaultItemsSize; i++)
            {
                productName[i] = productName[i + 1];
                productPrice[i] = productPrice[i + 1];
                Availabelquantity[i] = Availabelquantity[i + 1];
            }
            cout << "product deleted ";
            defaultItemsSize--;
            clearScreen();
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

// addmin-components

// user-component
void userViewProduct()
{

    system("cls");
    cout << "\n \n";
    cout << "**********************************************************************" << endl;
    cout << "***************************** VIEW PRODUCT *************************** *" << endl;
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
        cout << i << "\t" << productName[i] << "\t \t" << productPrice[i] << "\t \t" << Availabelquantity[i] << endl;
    }
    // cout<<"Pess any key to exit...";
    // getch();
    clearScreen();
}

void userbBuyProduct()
{
    // userViewProduct();
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
        cout << i << "\t" << productName[i] << "\t \t" << productPrice[i] << "\t \t" << Availabelquantity[i] << endl;
    }
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
                userBuyProductStatus[userBuyProductquantity] = "UnPaid";
                userBuyProductquantity++;
            }
        }
        else if (x == 'n')
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
                     << "\t" << endl;
                for (int i = 0; i < 2; i++)
                {
                    cout << i + 1 << "\t" << userBuyProductName[i] << "\t \t" << userBuyProductProce[i] << "\t \t \t" << userBuySelectedProductQuantity[i] << endl;
                }
                cout << "Demanded Product! Do you want to buy?(y/n) ";
                cin >> x;
                int index, quantity2;
                if (x == 'y')
                {
                    cout << "Enter the index of the product..";
                    cin >> index;
                    userBuyProductName[userBuyProductquantity] = userBuyProductName[index - 1];
                    userBuyProductProce[userBuyProductquantity] = userBuyProductProce[index - 1];
                    cout << "Enter Quantity..";
                    cin >> quantity2;
                    userBuySelectedProductQuantity[index - 1] = quantity2;
                    userBuySelectedProductQuantity[userBuyProductquantity] = userBuySelectedProductQuantity[index - 1];
                    userBuyProductStatus[userBuyProductquantity] = "UnPaid";

                    userBuyProductquantity++;
                }
                else
                {
                    clearScreen();
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
        cout << i << "\t" << userBuyProductName[i] << "\t \t" << userBuyProductProce[i] << "\t \t \t \t" << userBuySelectedProductQuantity[i] << "\t \t" << userBuyProductStatus[i] << endl;
    }
    clearScreen();
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
            }
            else
            {
                cout << "Product Not found.." << endl;
            }
        }
        else if (x == 'n')
        {
            break;
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
    if (userBuyProductquantity > 0)
    {
        for (int i = 0; i < userBuyProductquantity; i++)
        {
            if (userBuyProductStatus[i] == "Paid")
            {
                continue;
            }
            else
            {
                cout << index << "\t" << userBuyProductName[i] << "\t \t" << userBuyProductProce[i] << "\t \t" << userBuySelectedProductQuantity[i] << endl;
                index++;
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
                cout << "Your have the Buy the quantity..." << endl;
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
                    userBuyProductStatus[i] = buyProductStatus;
                    cout << i + 1 << "\t" << userBuyProductName[i] << "\t \t" << userBuyProductProce[i] << "\t \t" << userBuySelectedProductQuantity[i] << "\t \t \t" << userBuyProductStatus[i] << endl;
                }
                cout << "Successfully paid..." << endl;
            }
            // cout << "Successfully add to the cart..." << endl; // later on i will implement the logic
        }
        else if (x == 'n')
        {
            cout << "Pending...." << endl;
        }
    }
    else
    {
        cout << "First Buy Product.." << endl;
    }

    clearScreen();
}
void viewCartOption()
{
    cout << "What Do You Want To Do?" << endl;
    cout << "--> 1 Delete Product" << endl;
    cout << "--> 2 Update Quantity" << endl;
    cout << "--> 3 Exit " << endl;
}
void viewCart()
{

    cout << "***************************************************************************" << endl;
    cout << "***************************** ...Total Product.. **************************" << endl;
    cout << "***************************************************************************" << endl
         << endl;
    if (userBuyProductquantity != 0)
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
                cout << i << "\t" << userBuyProductName[i] << "\t \t" << userBuyProductProce[i] << "\t \t" << userBuySelectedProductQuantity[i] << "\t \t \t" << userBuyProductStatus[i] << endl;
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
            cin >> opt;
            if (opt == 1)
            {
                int index;
                cout << "Enter the index of the product you want to delete ";
                cin >> index;
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
                cin >> index;
                cout << "Enter The Quantity ";
                cin >> updatedquan;
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
    clearScreen();
}

void userAuth()
{
    string n;
    loginAndSingUpMenu();
    cout << "Enter a option...";
    cin >> n;
    if (n == "1")
    {
        userRegister();
    }
    else if (n == "2")
    {
        userLogin();
    }
    else
    {
        cout << "Please Enter a correct number!Press any key to continue..";
        getch();
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
            storeUserIntoTheFile(name, password);
            cout << "Successfully Register..." << endl;
            totalNumberOfUser++;
            // Sleep(700);
            clearScreen();
        }
        else if (isExist == true)
        {
            cout << "Username already Exist..." << endl;
            clearScreen();
        }
    }
    else if (totalNumberOfUser == 0 && isValide == true)
    {
        userAuthArrayName[totalNumberOfUser] = name;
        userAuthArrayPassWord[totalNumberOfUser] = password;
        cout << "Successfully Register...";
        storeUserIntoTheFile(name, password);
        totalNumberOfUser++;
        // Sleep(7000);
        clearScreen();
    }

    else
    {
        cout << "User must contain'@'symbol" << endl;
        clearScreen();
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
        clearScreen();
        user(name);
    }
    else if (isUserExist == false)
    {
        cout << "Plaese Enter corrrect userName Or Password.." << endl;
        clearScreen();
    }
}

void storeUserIntoTheFile(string name, string pass)
{
    char comma = ',';
    fstream file;
    file.open("userAuth.txt", ios::app);
    file << name;
    file << comma;
    file << pass << endl;

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

void storeAdminIntoTheFile(string name, string pass)
{
    char comma = ',';
    fstream file;
    file.open("adminAuth.txt", ios::app);
    file << name;
    file << comma;
    file << pass << endl;
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
    string n;
    loginAndSingUpMenu();
    cout << "Enter option....";
    cin >> n;
    if (n == "1")
    {
        adminRegister();
    }
    else if (n == "2")
    {
        adminLogin();
    }
    else
    {
        cout << "Enter correct number....";
        clearScreen();
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
        admin(name);
    }
    else if (isSuccessfulLogin == false)
    {
        cout << "Enter your correct Credentials" << endl;
        clearScreen();
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
        }
        else if (totalNumberOfAdmin == 0)
        {
            adminAuthArryName[totalNumberOfAdmin] = name;
            adminAuthArryPass[totalNumberOfAdmin] = password;
            storeAdminIntoTheFile(name, password);
            totalNumberOfAdmin++;
            cout << "Admin Registered Successfully.." << endl;
            clearScreen();
        }
    }
    else if (isValide == false)
    {
        cout << "userName must contain '@ symbol..'" << endl;
        clearScreen();
    }
}

void listOfLoginUsers()
{
    system("cls");
    cout << "\n \n";
    cout << "************************************************************************" << endl;
    cout << "                               USER LIST     " << endl;
    cout << "**************************************************************************" << endl;
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
                 << "\t \t"
                 << userAuthArrayPassWord[i] << endl;
        }
        cout << "\n \n";
        cout << "************************************************************************" << endl;
        cout << "             Total Numnber Of User : " << totalNumberOfUser << "   " << endl;
        cout << "**************************************************************************" << endl;
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
            if (isVilade == true && userAuthArrayName[i] != name2)
            {
                userAuthArrayName[userIndex] = name2;
                userAuthArrayPassWord[userIndex] = password2;
                cout << "Your Credentials updated successfully..." << endl;
                Sleep(700);
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
        Sleep(700);
        clearScreen();
    }
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
            cout << "Your Credentials updated successfully...";
            // Sleep(700);

            clearScreen();
            eCommerenceMenu();
        }
        else if (isVilade == false)
        {
            cout << "Must include the '@' " << endl;
            clearScreen();
        }
    }
    else
    {
        cout << "Please Enter correct password Or name...";
        Sleep(700);
        clearScreen();
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
            clearScreen();
            eCommerenceMenu();
            // Sleep(700);
        }
    }
    else if (x == 'n')
    {
        cout << "Your Account is not deleted";
        clearScreen();
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
        eCommerenceMenu();
    }
    else if (x == 'n')
    {
        cout << "You account is not Deleted..." << endl;
        clearScreen();
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
            totalPaid = totalPaid + purchasedProductBill(userBuyProductProce[i], userBuySelectedProductQuantity[i]);

            int singleProductPrice = purchasedProductBill(userBuyProductProce[i], userBuySelectedProductQuantity[i]);
            cout << idnex << "\t" << userBuyProductName[i] << "\t \t" << userBuyProductProce[i] << "\t \t \t" << userBuySelectedProductQuantity[i] << " \t \t" << singleProductPrice << endl;
            idnex++;
        }
    }
    cout << "\n";
    cout << " ******************************************************************************" << endl;
    cout << "                Total Product Price: " << totalPaid << endl;
    cout << " ******************************************************************************" << endl;

    clearScreen();
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
    cout << "Choose Catagory " << endl;
    cout << " --> 1 The Product that has been Sold " << endl;
    cout << " --> 2 The Product that is not UnPaid " << endl;
    cout << "Enter your option ";
    cin >> opt;
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
             << "Total Price " << endl;
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
                cout << idnex << "\t" << userBuyProductName[i] << "\t \t" << userBuyProductProce[i] << "\t \t \t" << userBuySelectedProductQuantity[i] << " \t \t" << singleProductPrice << endl;
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
             << "Total Price " << endl;
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
                cout << idnex << "\t" << userBuyProductName[i] << "\t \t" << userBuyProductProce[i] << "\t \t \t" << userBuySelectedProductQuantity[i] << " \t \t" << singleProductPrice << endl;
                idnex++;
            }
        }

        cout << " *******************************************************" << endl;
        cout << " *          Total Revenue : " << totalUnPaid << "      *" << endl;
        cout << " *******************************************************" << endl;
    }

    clearScreen();
}

void productAnalystics()
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
            cout << "To Sold Products..." << endl;
            cout << "No."
                 << "\t"
                 << "Product Name"
                 << "\t"
                 << "productPrice"
                 << "\t"
                 << "Sold Quantity"
                 << "\t" << endl;
            for (int i = 0; i < 2; i++)
            {
                cout << i + 1 << "\t" << userBuyProductName[i] << "\t \t" << userBuyProductProce[i] << "\t \t \t" << userBuySelectedProductQuantity[i] << endl;
            }
        }
        clearScreen();
    }
    else
    {
        cout << "Nothing is sold..";
        clearScreen();
    }
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
            if (userBuyProductquantity == 1)
            {
                cout << "No thing in trends...";
            }
            cout << "Trending Products..." << endl;
            cout << "No."
                 << "\t"
                 << "Product Name"
                 << "\t"
                 << "productPrice"
                 << "\t"
                 << "Sold Quantity"
                 << "\t" << endl;
            for (int i = 0; i < 2; i++)
            {
                cout << i + 1 << "\t" << userBuyProductName[i] << "\t \t" << userBuyProductProce[i] << "\t \t \t" << userBuySelectedProductQuantity[i] << endl;
            }
            char x;
            cout << "Demanded Product! Do you want to buy?(y/n) ";
            cin >> x;
            int index, quantity2;
            if (x == 'y')
            {
                cout << "Enter the index of the product..";
                cin >> index;
                userBuyProductName[userBuyProductquantity] = userBuyProductName[index - 1];
                userBuyProductProce[userBuyProductquantity] = userBuyProductProce[index - 1];
                cout << "Enter Quantity..";
                cin >> quantity2;
                userBuySelectedProductQuantity[index - 1] = quantity2;
                userBuySelectedProductQuantity[userBuyProductquantity] = userBuySelectedProductQuantity[index - 1];
                userBuyProductStatus[userBuyProductquantity] = "UnPaid";

                userBuyProductquantity++;
                clearScreen();
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
        cout << i << "\t" << productName[i] << "\t \t" << productPrice[i] << "\t \t" << Availabelquantity[i] << endl;
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

// clear screen
void clearScreen()
{
    cout << "Press any key to continue...";
    getch();
    system("cls");
}
// clear screen
// user-component