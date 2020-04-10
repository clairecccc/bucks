#include <iostream>
#include <string>

using namespace std;

class customer
{
public:
    customer();
    ~customer();
    void getLogin();

protected:
    string fName;
    string sName;
    string address;
};

customer:: customer()
{
    fName = "";
    sName = "";
    address = "";
}

customer :: ~customer()
{

}

void customer :: getLogin()
{
    string username;
    string password;

    cout << "\n~~~~~~~~~~ LOG IN ~~~~~~~~~\n" << endl;
    cout << "\n Welcome to the Bucks Centre for the Performing Arts ticket purchasing system!" << endl;

    cout << "Enter username: ";
    getline(cin, username);

    while(username.length() > 10)
    {
        cout << "Your username should be no more than 10 characters long." << endl;
        cout << "Please re-enter your username: ";
        getline(cin, username);
    }

    cout << "Enter password: ";
    getline(cin, password);

    while(password.length() > 10)
    {
        cout << "Your password should be no more than 10 characters long." << endl;
        cout << "Please re-enter your password: ";
        getline(cin, password);
    }
}

//#ifndef BCPA_PROJECT_CUSTOMER_H
//#define BCPA_PROJECT_CUSTOMER_H
//
//#endif //BCPA_PROJECT_CUSTOMER_H
