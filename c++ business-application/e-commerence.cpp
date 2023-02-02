#include <iostream>
#include <windows.h>
using namespace std;
void eCommerenceTitle();
void eCommerenceMenu();
void authenciation(int);
void viewProdcut();

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
    int number;
    cout << "#########################################################" << endl;
    cout << "#  Select component you have to see                     #" << endl;
    cout << "#  1 User                                               #" << endl;
    cout << "#  2 Admin                                              #" << endl;
    cout << "#  Select any option 1 OR 2                             #" << endl;
    cout << "#########################################################" << endl;

    cout << "Enter a option.....";
    cin >> number;
    authenciation(number);
}

void authenciation(int adminOrUser)
{
    if (adminOrUser == 1)
    {
        system("cls");
        cout << "#########################################################" << endl;
        cout << "#                WELCOME TO THE USER PANEL              #" << endl;
        cout << "#  1 View Product                                       #" << endl;
        cout << "#  2 Buy product                                        #" << endl;
        cout << "#  3 Purchased Product List                             #" << endl;
        cout << "#  4 Logout                                             #" << endl;
        cout << "#########################################################" << endl;
    }
    else if (adminOrUser == 2)
    {
        system("cls");
        cout << "#########################################################" << endl;
        cout << "#                WELCOME TO THE ADMIN PANEL             #" << endl;
        cout << "#  1 Create Product                                     #" << endl;
        cout << "#  2 Delete Product                                     #" << endl;
        cout << "#  3 View All Product                                   #" << endl;
        cout << "#  4 Total Purchased Product List                       #" << endl;
        cout << "#  5 Logout                                             #" << endl;
        cout << "#########################################################" << endl;
    }
}

void viewProdcut()
{
    string productName[]={"Shirt","Pant","Bat"};
    int productPrice[]={25,30,60};
}