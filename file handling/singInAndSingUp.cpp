#include <iostream>
#include <fstream>
using namespace std;
string userName[100];
string userPass[100];
int count = 0;
void menu();
void userReg();
void userAuth(int);
void login();
void storeUser(string name, string userPass);
void ViewAllUser();
void pupolateUser();
bool userAlreadyExit(string name,string pass);
int main()
{
     pupolateUser();
    menu();
     
  
    
}
void menu()
{
    cout << "1-Register " << endl;
    cout << "2-Login" << endl;
    cout <<" 3-View All User" << endl;
    int n;
    cout << "Enter  option ";
    cin >> n;
    userAuth(n);
}
void userReg()
{
    string name, pass;
    cout << "Enter Your name ";
    cin >> name;
    cout << "enter your pass ";
    cin >> pass;
    bool reust=userAlreadyExit(name,pass);
    if(reust==true)
    {
        cout<<"User Already Exit ";
    }
    else if(reust==false)
    {
        userName[count] = name;
    userPass[count] = pass;
    storeUser(name, pass);
    count++;

    cout << "Register Successfully ";
    }

}

void login()
{
    string name, pass;
    cout << "Enter Your name ";
    cin >> name;
    cout << "enter your pass ";
    cin >> pass;
    for (int i = 0; i < count; i++)
    {
        if (userName[i] == name && userPass[i] == pass)
        {
            cout << "Loign Successfully ";
        }
    }
}
void userAuth(int n)
{
    if (n == 1)
    {
        userReg();
    }
    else if (n == 2)
    {
        login();
    }
    else if(n==3)
    {
          ViewAllUser();
    }
}

void storeUser(string name, string userPass)
{
    fstream store;
    store.open("example.txt", ios::app);
    store << name << endl;
    store << userPass << endl;
    store.close();
}
void ViewAllUser()
{

    for (int i = 0; i < count; i++)
    {
      cout<<userName[i]<<" "<<userPass[i]<<endl;

    }
}
void pupolateUser()
{
    fstream file;
    string name,pass;
    file.open("example.txt", ios::in);
    while (getline(file,name) && getline(file,pass))
    {
        userName[count]=name;
        userPass[count]=pass;
        count++;
    }
    file.close();
}

bool userAlreadyExit(string name,string pass)
{
    bool isExist=false;
    for(int i=0;i<count;i++)
    {
        if(name==userName[i])
        {
          isExist=true;
        }
    }
return isExist;
}