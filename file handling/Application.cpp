#include <iostream>

#include <string>

#include <conio.h>

using namespace std;

const int userArrSize = 100; // Maximum number of users that can be stored

const int Max_Books = 100;    // max num of books
const int title_length = 20;  // max length of the title;
const int author_length = 20; // max length of the author;
string titles[Max_Books];     // max length author of the books
string authors[Max_Books];
int pages[Max_Books];
int bookcount = 0;

const int max_Contacts = 100;

int contact = 0;
string names[max_Contacts];
string adresses[max_Contacts];

const int Max_Members = 100;     // Maximum number of members that can be stored
int memberCount = 0;             // Variable to keep track of the number of members
string memberNames[Max_Members]; // Array to store the names of the members

void AdminInterface();
void EmployeeInterface();
void CustomerInterface();
int bookCount = 0;
string bookTitles[Max_Books];
int bookStock[Max_Books];
int bookActual[Max_Books];

const int Max_Requests = 10;
int requestCount = 0;
string requestedBooks[Max_Requests];

int bookDueDates[Max_Books];
float fines[Max_Books];

string users[userArrSize];     // Array to store user names
string passwords[userArrSize]; // Array to store user passwords
string roles[userArrSize];     // Array to store user roles (admin, employee, or user)

int usersCount = 0; // Variable to keep track of the number of books that have been added

string signIn(string name, string password);

bool signUp(string name, string password, string role);

void topHeader();

void subHeader();

int loginMenu();

const int Max_Notices = 20;
int noticeCount = 0;
string notices[Max_Notices];

const int Max_Feedback = 100;
int feedbackCount = 0;
string feedbacks[Max_Feedback];

const int Max_Reviews = 100;
int reviewCount = 0;
string bookNames[Max_Reviews];
int ratings[Max_Reviews];
string comments[Max_Reviews];

int customerMenu();

void clearScreen();

// Admin Funtions



int adminMenu();

void addBook(); // 1

void viewAllBooks(); // 2

void deletBooks(); // 3

void addContactEmployee(); // 4

void addContactsUser(); // 5

void RemoveEmployee(); // 6

void RemoveCustomertUser(); // 7

void EditBooks(); // 8

void viewFeedback(); // 9

void viewReviews(); // 10

// eployee

 // interface

int EmployeeMenu(); // menu;

void searchBook(); // 1

 void deletBooks(); // 2

void approveBookRequest(); // 3

void membersManagement(); // 4
void viewAllMembers();
void addMember();

void viewAllRequests();
void checkInventory();
void addBookInventory();

void finesManagement(); // 6

void calculateFine(int bookIndex); // 7



void addNotice(); // 9



// user Funtion
void addReview();

void ViewRecommendation();

void addRequest();

void viewBills();

void viewNotices();

void addFeedback();
//Main

main()
{    
    int loginOption = 0;
    
    while (loginOption != 4)
    {    
        
        topHeader();
        subHeader();

        loginOption = loginMenu();
        
       
       
        if (loginOption == 1)
        {

            system("cls");

            string name;
            string password;
            
            string role;
            subHeader();
            
                        
               cout<<" Enter your username > ";
               cin>>name;
               cout<<"Enter your password  >";
               cin>>password;
               
                role=signIn(name,password);
            

            if (role == "admin"|| role== "Admin")
            {
                 clearScreen();
                 subHeader();
                AdminInterface();
                
            }
            
            else if (role == "Employee"||role=="employee")
            {
               clearScreen();
               EmployeeInterface();
            }
          else if (role == "customer"||role=="user")
            {
               clearScreen();
               CustomerInterface();
            }

        else if(role=="undefined")
        {
            cout<<"You enter wrond credentials "<<endl;

        }
    }

      else if (loginOption==2)
      {

       system("cls");
       string name;
       string password;
       string role;
        subHeader();

        cout<<"Enter your Username > ";
        cin>>name;
        cout<<"Enter your password >" ;
        cin>>password;
        cout<<"Enter your role > " ;
        cin>>role;

        bool isValid=signUp(name,password,role);
        if(isValid==true)
        {

           cout<<" You Signed up succesfuly"<<endl;
        }

      if (isValid==false)
      {

        cout<<"User exceede in the system "<<endl;

      }

      }
          clearScreen();
    }
}





void clearScreen()
{
    cout << "Press Any Key to Continue.." << endl;
    getch();
    system("cls");
}

void topHeader()
{

    cout << " \t\t\t\t\t  *****************************************************************"  << endl;
    cout << " \t\t\t\t\t  *                           WELCOME                             *"  << endl;
    cout << " \t\t\t\t\t  *                             TO                                * " << endl;
    cout << " \t\t\t\t\t  *                           LIBRAY                              * " << endl;
    cout << " \t\t\t\t\t  *                          MANAGMENT                            * " << endl;
    cout << " \t\t\t\t\t  *                           SYSTEM                              * " << endl;
    cout << " \t\t\t\t\t  *                                                               * " << endl;
    cout << " \t\t\t\t\t  ***************************************************************** " << endl;

    cout << endl;
    cout << endl;
}
void subHeader()
{

    cout << "\t\t\t ################################################################################################################" << endl;
    cout << "\t\t\t #############                                                                                  #################" << endl;
    cout << "\t\t\t #############                          LIBRARY MANAGMENT SYSTEM                                #################" << endl;
    cout << "\t\t\t #############                                                                                  #################" << endl;
    cout << "\t\t\t ################################################################################################################" << endl;
}

// function to display the login menu and get the user's choice
// returns the selected option number
int loginMenu()
{

    int option;
    cout << "1. SignIn with your Credentials >  "<< endl;
    cout << "2. SignUp to get your Credentials >" << endl;
    cout << "3. Exit the Application >" << endl;
    cout << endl;
    cout << "Enter the Option Number > ";
    cin >> option;
    return option;
}

// function to sign up a new user
// takes the name, password, and role of the user as input
// returns true if the sign-up was successful, otherwise returns false

bool signUp(string name, string password, string role)

{
    // check if the users array has reached its maximum size value
    if (usersCount < userArrSize)
    {
        // if not, store the details of the new user
        users[usersCount] = name;
        passwords[usersCount] = password;
        roles[usersCount] = role;
        // increase the count of registered users
        usersCount++;
        // return true to indicate success
        return true;
    }

    else
    {
        // return false if the users array has reached its maximum size
        return false;
    }
}

// function to sign in a user
// takes the name and password of the user as input
// returns true if the user exists and the entered password is correct, otherwise returns false
string signIn(string name, string password)
{
    // loop through all the registered users
    for (int i = 0; i < usersCount; i++)
    {
        // check if the entered name and password match with a registered user
        if (users[i] == name && passwords[i] == password)
        {
            // return true if the name and password match
            return roles[i];
        }
    }
    // return false if no match is found
    return "undefined";
}

int adminMenu()
{       cout<<endl;
        cout<<endl;
      cout<<"\t ************* Admin Menu ************"<<endl;
      cout<<"\t *************            ************"<<endl;
      cout<<"\t *************************************"<<endl;
    int option;
    cout<<endl;
    cout << "\t1.Add Books                 " << endl;
    cout << "\t2.View All Books            " << endl;
    cout << "\t3.delete books              " << endl;
    cout << "\t4.Add book                 " << endl;
    cout << "\t5.see feedback              " << endl;
    cout << "\t6.Add contacts of customer     " << endl;
    cout << "\t7.Add contacts of employees     " << endl;
    cout << "\t8.Remove customer           " << endl;
    cout << "\t9.Remove employee           " << endl;
    cout << "\t10.Reviews               " << endl;
    cout << "\t11.Back to Login Menu /Exit " << endl;
    cout<<endl;
cout<<"\t Enter your operation  >";
    cin >> option;

    return option;
}






void addBook()


{     system("cls");
      topHeader();
      subHeader();
    string title;
    string author;

    int bookoption;

    while (bookcount < Max_Books)
    {
        cout << "Enter the title of the book:"<<endl ;
        cin >> title;

        cout << "Enter the author of the book:"<<endl ;
        cin >> author;

        titles[bookcount] = title;
        authors[bookcount] = author;
        // Increment the bookCount variable to keep track of the number of books
        cout << "Book added successfully!"<<endl;
        bookcount++;

        cout << "Enter 1 to add another book or 2 to admin menu"<<endl;
        cin >> bookoption;

        if (bookcount >= Max_Books)
        {
            cout << "Error!cannot add more books"<<endl;
            break;
        }

        if (bookoption == 1)
        {
            continue;
        }
        else if (bookoption == 2)
        {   
            break;
                    }
    }
}


void viewAllBooks()

{   
    system("cls");


subHeader();
    if (bookcount == 0)

    {

        cout << "No books have been added yet:"<<endl;
    }
    else
    {   
        cout<<endl;
        cout << "\t................list of the books........."<<endl;
        cout << "\t................                 ........."<<endl;

        for (int i = 0; i < bookcount; i++)
        {

            cout << "title:"<<endl << titles[i] << "by" << authors[i] << endl;
            cout << endl;
        }
    }

  

}

void deletBooks()
{
    system("cls");

topHeader();
subHeader();

int deleteoption;
    string title;
    string author;

    cout << "Enter the title of the book :"<<endl;

    cin>> title;
    cout << "Enter the author  of the book :"<<endl;

    cin>> author;

    bool bookfound = false;

    for (int i = 0; i < bookcount; i++)
    {

        if (titles[i] == title&& authors[i]==author)
        {

            for (int j = i; j < bookcount - 1; j++)
            {
                titles[j] = titles[j + 1];
                authors[j] = authors[j + 1];
            }
            bookcount--;

            cout << "Book deleted successfully." << endl;
            bookfound = true;

            break;
        }

        cout<<"press 1 to delete more Or 2 to exit!!"<<endl;
        cin>>deleteoption;
             if (deleteoption == 1)
        {
            continue;
        }
        else if (deleteoption == 2)
        {   
            break;
                    }
        if (!bookfound)
        {

            cout << "there is no book of that name";
        }
    }

}

void addContactsUser()
{
system("cls");


topHeader();
subHeader();
    int addUser;
    string address;
    string name;

    while (contact < max_Contacts)
    {
        cout << "\tEnter the name of the customer>";
        cin>> name;
        cout << "\tEnter the address of the customer>";
        cin>> address;
        cout << "\tcontact added succesfuly>"; 
        cout<<endl;
        contact++;

        cout<<"\t  press 1 to add more contacts Or 2 to exit >   ";
        cin>>addUser;
        if(addUser==1)
            {  
               continue;
            }

         if(addUser==2)
            {
               break;
            }

        if (contact >= max_Contacts)
        {
            cout << "contact list is full"<<endl;
            break;
            loginMenu();
        }
    }
}

void RemoveCustomertUser()
{
    system("cls");

topHeader();
subHeader();
    string name;
    string address;
int remove;
    cout << "Enter the name of the customer to remove:"<<endl;
    cin>> name;
    cout << "Enter the address:"<<endl;
    cin>> address;

    int idx = -1;

    for (int i = 0; i < contact; i++)
    {

        if (names[i] == name && adresses[i] == address)

        {
            idx = i;
            break;
        }

        if (idx != -1)
        {

            for (int i = idx; i < contact - 1; i++)

            {

                name[i] = name[i + 1];
                adresses[i] = address[i + 1];
            }

            contact--;

            cout << "Contact removes successfully!"<<endl;
        }
        cout<<"press 1 to remove more contacts  and 2 to exit!!"<<endl;
        cin>>remove;
             if (remove == 1)
        {
            continue;
        }
        else if (remove == 2)
        {   
            break;
                    }
        else
        {

            cout << "contact not found!"<<endl;
        }
    }
}

void addContactEmployee()
{
    system("cls");
int con;
topHeader();
subHeader();
    string name;
    string address;

    while (contact < max_Contacts)
    {
        cout << "Enter the name of the employee:"<<endl;

        cin>> name;
        cout << "Enter the contact/address of the employee"<<endl;
        cin>> address;

        names[contact] = name;
        adresses[contact] = address;
        contact++;

        cout << "Employee contact added succesfuly."<<endl;

       cout<<"press 1 to add  more contats Or 2 to exit!!"<<endl;
        cin>>con;
             if (con == 1)
        {
            continue;
        }
        else if (con == 2)
        {   
            break;
                    }


        if (contact >= max_Contacts)
        {

            cout << "contact list is full!"<<endl;
        }
    }
}

void RemoveEmployee()
{   system("cls");

    topHeader();
subHeader();
    string name;
    string address;
    int rem;

    cout << "Enter the name of the EMPLOYEE > ";
    cin>> name;
   cout << "Enter the address of the employee > ";
    cin>> address;

    int idx = -1;

    for (int i = 0; i < contact; i++)
    {
        if (names[i] == name && adresses[i] == address)
        {
            idx = i;
            break;
        }


    }

    if (idx != -1)
    {
        for (int i = idx; i < contact - 1; i++)
        {
            name[i] = name[i + 1];
            address[i] = address[i + 1];
             contact--;
        cout << "Contact removed successfully!";
        cout<<"press 1 to remove more contats Or 2 to exit!!"<<endl;
        cin>>rem;
             if (rem == 1)
        {
            continue;
        }
        else if (rem== 2)
        {   
            break;
                    }
        }

       

    }

      
       
    else
    {
        cout << "Contact not found!";
    }
}

void viewReviews()
{   system("cls");

    topHeader();
    subHeader();
    if (reviewCount == 0)
    {
        cout << "No reviews have been added yet." << endl;
    }
    else
    {
        cout << "List of book reviews: " << endl;
        for (int i = 0; i < reviewCount; i++)
        {
            cout << (i + 1) << ". Book: " << bookNames[i] << endl;
            cout << " Rating: " << ratings[i] << endl;
            cout << " Comments: " << comments[i] << endl;
        }
    }
}

void viewFeedback()
{   system("cls");
    topHeader();
    subHeader();
    if (feedbackCount == 0)
    {
        cout << "No feedback has been added yet." << endl;
    }
    else
    {
        cout << "List of feedbacks: " << endl;
        for (int i = 0; i < feedbackCount; i++)
        {
            cout << (i + 1) << ". " << feedbacks[i] << endl;
        }
    }
}

/*Employee*/

int EmployeeMenu()
{     cout<<endl;
      cout<<endl;
     cout<<"\t*************** Employee menu **************"<<endl;
     cout<<"\t***************               **************"<<endl;
    int option;
    cout << "Select one of the following option:"<<endl << endl;

    cout << "\t 1.Book Search" << endl;
    cout << "\t 2.see Book request" << endl;
    cout << "\t 3.Add memeber" << endl;
    cout << "\t 4.view all member" << endl;
    cout << "\t 5.Members Managment" << endl;
    cout << "\t 6.Add book inventory" << endl;
    cout << "\t 7.Inventory management" << endl;
    cout << "\t 8.Delete books" << endl;
    cout << "\t 9.Fine managment" << endl;
    cout << "\t 10.Check bills" << endl;
    cout << "\t 11.add notices " << endl;
    cout << "\t 12. Exit" << endl;

    cout << endl;

    cout << "Enter your option" << endl;
    cin >> option;

    return option;
}

void searchBook()
{
    string searchTitle;
    string searchAuthor;
    cout << "Enter the title of the book you want to search: ";
    cin >> searchTitle;
    cout << "Enter the author of the book:"<<endl;
    cin >> searchAuthor;
    int flag = 0;
    for (int i = 0; i < bookcount; i++)
    {
        if (titles[i] == searchTitle && authors[i] == searchAuthor)
        {
            cout << "Book found!" << endl;
            cout << "Title: " << titles[i] << endl;
            cout << "Author: " << authors[i] << endl;
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "Book not found." << endl;
    }
}

void addMember()
{
    if (memberCount < Max_Members)
    {
        string name;
        cout << "Enter the name of the member: ";
        cin >> name;
        memberNames[memberCount] = name;
        memberCount++;
        cout << "Member added successfully!" << endl;
    }
    else
    {
        cout << "Error: Cannot add more members." << endl;
    }
}

void viewAllMembers()
{
    if (memberCount == 0)
    {
        cout << "No members have been added yet." << endl;
    }
    else
    {
        cout << "List of members: " << endl;
        for (int i = 0; i < memberCount; i++)
        {
            cout << (i + 1) << ". " << memberNames[i] << endl;
        }
    }
}

void membersManagement()
{
    int option;
    while (true)
    {
        cout << "Members Management Menu:"<<endl << endl;
        cout << "1. Add member" << endl;
        cout << "2. View all members" << endl;
        cout << "3. Back to main menu" << endl;
        cout << "Enter an option: ";
        cin >> option;

        if (option == 1)
        {
            addMember();
        }
        else if (option == 2)
        {
            viewAllMembers();
        }
        else if (option == 3)
        {
            break;
           EmployeeMenu();
        }
        else
        {
            cout << "Invalid option. Try again." << endl;
        }
    }
}

void addBookInventory()
{
    if (bookCount < Max_Books)
    {
        string title;
        int stock, actual;
        cout << "Enter the title of the book: ";
        cin >> title;
        cout << "Enter the stock of the book: ";
        cin >> stock;
        cout << "Enter the actual amount of the book: ";
        cin >> actual;
        bookTitles[bookCount] = title;
        bookStock[bookCount] = stock;
        bookActual[bookCount] = actual;
        bookCount++;
        cout << "Book added successfully!" <<  endl;
    }
    else
    {
        cout << "Error: Cannot add more books." <<  endl;
    }
}

void checkInventory()
{
    if (bookCount == 0)
    {
        cout << "No books have been added yet." << endl;
    }
    else
    {
        cout << "Checking the inventory...\n"
             << endl;
        for (int i = 0; i < bookCount; i++)
        {
            if (bookStock[i] < bookActual[i])
            {
                cout << "Book title " << bookTitles[i] << endl;
                cout << "Stock " << bookStock[i] << endl;
                cout << "Actual amount " << bookActual[i] << endl;
                cout << "Stock not complete!\n"
                     << endl;
            }

            else if (bookStock[i] = bookActual[i])
            {
                cout << "Book title " << bookTitles[i] << endl;
                cout << "Stock " << bookStock[i] << endl;
                cout << "Actual amount " << bookActual[i] << endl;
                cout << "Stock  complete!\n"
                     << endl;
            }
        }
    }
}


  

void calculateFine(int bookIndex)
{
    int currentDate;
    cout << "Enter the current date (in number of days): ";
    cin >> currentDate;
    int daysOverdue = currentDate - bookDueDates[bookIndex];
    if (daysOverdue > 0)
    {
        fines[bookIndex] = daysOverdue * 10;
        cout << "Fine for the book '" << bookTitles[bookIndex] << "' is Rupees" << fines[bookIndex] << endl;
    }
    else
    {
        cout << "No fine for the book '" << bookTitles[bookIndex] << "'." << endl;
    }
}

void finesManagement()
{
    int bookIndex;
    cout << "Enter the index of the book: ";
    cin >> bookIndex;
    if (bookIndex >= 0 && bookIndex < Max_Books)

    {
        calculateFine(bookIndex);
    }
    else
    {
        cout << "Error: Invalid book index." << endl;
    }
}

void addNotice()
{
    if (noticeCount < Max_Notices)
    {
        string notice;
        cout << "Enter the notice: ";
        cin>>notice;
        notices[noticeCount] = notice;
        noticeCount++;
        cout << "Notice added successfully!" << endl;
    }
    else
    {
        cout << "Error: Cannot add more notices." << endl;
    }
}

void viewAllRequests()
{
    if (requestCount == 0)
    {
        cout << "No requests have been made yet." << endl;
    }
    else
    {
        cout << "List of requested books: " << endl;
        for (int i = 0; i < requestCount; i++)
        {
            cout << (i + 1) << ". " << requestedBooks[i] << endl;
        }
    }
}
    

// User Funtions




int customerMenu()
{
          cout<<" ######### Customer Menu########"<<endl;
           cout<<"###############################"<<endl;
    int option;
    cout << "Select one of the following option:"<<endl << endl;

    cout << "\t 1.View all books " << endl;
    cout << "\t 2.Search books" << endl;
    cout << "\t 3.Request a book" << endl;
    cout << "\t 4.view recommendation" << endl;
    cout << "\t 5.Share your experience " << endl;
    cout << "\t 6.See notice bord" << endl;
    cout << "\t 7.Add feedback about library" << endl;
    cout << "\t 8.view your bill " << endl;
    cout << "\t 9 Exit" << endl;

    cout << endl;

    cout << "Enter your option" << endl;
    cin >> option;

    return option;
}

void addFeedback()
{
    if (feedbackCount < Max_Feedback)
    {
        string feedback;
        cout << "Enter your feedback: ";
        cin>>feedback;
        feedbacks[feedbackCount] = feedback;
        feedbackCount++;
        cout << "Feedback added successfully!" << endl;
    }
    else
    {
        cout << "Error: Cannot add more feedback." << endl;
    }
}

void viewNotices()
{
    if (noticeCount == 0)
    {
        cout << "No notices have been added yet." << endl;
    }
    else
    {
        cout << "List of notices: " << endl;
        for (int i = 0; i < noticeCount; i++)
        {
            cout << (i + 1) << ". " << notices[i] << endl;
        }
    }
}

void viewBills()
{
    if (memberCount == 0)
    {
        cout << "No members have been added yet." << endl;
    }
    else
    {
        cout << "List of bills: " << endl;
        for (int i = 0; i < memberCount; i++)
        {
            cout << (i + 1) << ". " << memberNames[i] << ": $" << fines[i] << endl;
        }
    }
}

void addRequest()
{
    if (requestCount < Max_Requests)
    {
        string title;
        cout << "Enter the title of the book: ";
        cin.ignore();
        getline(cin, title);
        requestedBooks[requestCount] = title;
        requestCount++;
        cout << "Request added successfully!" << endl;
    }
    else
    {
        cout << "Error: Cannot add more requests." << endl;
    }
}

void ViewRecommendation()

{

    cout << "\t\t\t Harry potter ";
    cout << "\t\t\t jin man ";
    cout << "\t\t\t dark night ";
}

void addReview()
{
    if (reviewCount < Max_Reviews)
    {
        string bookName;
        int rating;
        string comment;

        cout << "Enter the name of the book: ";
        cin.ignore();
        getline(cin, bookName);

        cout << "Enter the rating (1-10): ";
        cin >> rating;

        cout << "Enter your comments: ";
        cin.ignore();
        getline(cin, comment);

        bookNames[reviewCount] = bookName;
        ratings[reviewCount] = rating;
        comments[reviewCount] = comment;

        reviewCount++;

        cout << "Review added successfully!" << endl;
    }
    else
    {
        cout << "Error: Cannot add more reviews." << endl;
    }
}


//admin
void AdminInterface()
        {

            int adminOption=0;
            

         

                while(adminOption!=12){
                system("cls");
                topHeader();
                subHeader();
                adminOption = adminMenu();

                if (adminOption==1){
                    system("cls");
                    topHeader();
                    
                    subHeader();
                    cout<<endl;
                    addBook();
                    clearScreen();
                     
                }

                else if (adminOption==2){
                    system("cls");
                    
                    topHeader();
                    cout<<endl;
                    subHeader();
                    viewAllBooks();
                       clearScreen();


                }

                else if(adminOption==3){
                    system("cls");
                    topHeader();
                    subHeader();
                    cout<<endl;
                    deletBooks();
                         clearScreen();
                    

                }

                else if(adminOption==4){
                    system("cls");
                    topHeader();
                    subHeader();
                    addBook();
                        clearScreen();
                    

                }
                else if(adminOption==5){
                    system("cls");
                    topHeader();
                    subHeader();
                   viewFeedback(); 
                        clearScreen();

                }
                else if(adminOption==6){
                    system("cls");
                    topHeader();
                    subHeader();
                    addContactsUser();
                         clearScreen();
                    

                }
                else if(adminOption==7){
                    system("cls");
                    topHeader();
                    subHeader();
                    addContactEmployee();
                         clearScreen();
                    

                }
                else if(adminOption==8){
                    system("cls");
                    topHeader();
                    subHeader();
                    RemoveCustomertUser();
                         clearScreen();
                    

                }
                else if(adminOption==9){
                    system("cls");
                    topHeader();
                    subHeader();
                    RemoveEmployee();
                         clearScreen();
                    

                }
                else if(adminOption==10){
                    system("cls");
                    topHeader();
                    subHeader();
                    viewReviews();
                         clearScreen();
                    
                    

                }
                else if(adminOption==11)
                {
                    break;
                    EmployeeMenu();

                }

                }
                    
                    
                }
            
   //employee     
    void EmployeeInterface()
    {

      int EmployeeOption=0;

      
                   


                while(EmployeeOption!=13)
               {
                     system("cls");
                     topHeader();
                     subHeader();
                    EmployeeOption=EmployeeMenu();

                   
                if (EmployeeOption==1){
                    
                     system("cls");
                     subHeader();
                     searchBook();
                    cout<<endl;
                     getch();
                }

                else if (EmployeeOption==2){
                    system("cls");
                    topHeader();
                    subHeader();
                    viewAllRequests();
                     getch();


                }

                else if(EmployeeOption==3){
                    system("cls");
                    topHeader();
                    subHeader();
                    addMember();
                     getch();
                    

                }

                else if(EmployeeOption==4){
                    system("cls");
                    topHeader();
                 viewAllMembers();
                    getch();
                                        

                }
                else if(EmployeeOption==5){
                    system("cls");
                    topHeader();
                    subHeader();
                membersManagement();
                   getch();

                }
                else if(EmployeeOption==6){
                    system("cls");
                    topHeader();
                    subHeader();
                    addBookInventory();
                     getch();
                    

                }
                else if(EmployeeOption==7){
                    system("cls");
                    
                    subHeader();
                    checkInventory();
                     getch();
                   
                    

                }
                else if(EmployeeOption==8){
                    system("cls");
                    topHeader();
                    subHeader();
                   deletBooks();
                     getch();
                    

                }
                else if(EmployeeOption==9){
                    system("cls");
                    topHeader();
                    subHeader();
                    finesManagement();
                     getch();
                    

                }
                else if(EmployeeOption==10){
                    system("cls");
                    topHeader();
                    subHeader();
                    viewBills();
                     getch();
                    

                }
                else if(EmployeeOption==11)
                {
                  
                     system("cls");
                    topHeader();
                    subHeader();
                    addNotice();
                     getch();
                    
                }
                 else if(EmployeeOption==12)
                {
                  
                    break;
                    EmployeeMenu();

                  }

            }
                    
                    
         }
     
             

             void CustomerInterface()
            {

            int customerOption=0;
            

                while(customerOption!=10){
                system("cls");
                topHeader();
                subHeader();
                customerOption= customerMenu();

                if (customerOption==1){
                    system("cls");
                    topHeader();
                    
                    subHeader();
                    cout<<endl;
                    viewAllBooks();
                    clearScreen();
                     
                }

                else if (customerOption==2){
                    system("cls");
                    
                    topHeader();
                    cout<<endl;
                    subHeader();
                    searchBook();
                       clearScreen();


                }

                else if(customerOption==3){
                    system("cls");
                    topHeader();
                    subHeader();
                    addRequest();
                         clearScreen();
                    

                }

                else if(customerOption==4){
                    system("cls");
                    topHeader();
                    subHeader();
                    ViewRecommendation();
                        clearScreen();
                    

                }
                else if(customerOption==5){
                    system("cls");
                    topHeader();
                    subHeader();
                  addReview(); 
                        clearScreen();

                }
                else if(customerOption==6){
                    system("cls");
                    topHeader();
                    subHeader();
                    viewNotices();
                         clearScreen();
                    

                }
                else if(customerOption==7){
                    system("cls");
                    topHeader();
                    subHeader();
                    addFeedback();
                         clearScreen();
                    

                }
                else if(customerOption==8){
                    system("cls");
                    topHeader();
                    subHeader();
                   viewBills();
                         clearScreen();
                    

                }
                
                    
                    
                else if(customerOption==9)
                {
                    break;
                   

                }

                }
                    
                    
                }
            
