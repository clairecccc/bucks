#ifndef USER_H
#define USER_H

#include <iostream>
#include <string>

using namespace std;

class User
{
public:
    User();
    ~User();
    void getLogin();
    string getName();

protected:
    string firstName;
    string surName;
    string address;
};

User:: User()
{
    firstName = "Joe";
    surName = "Bloggs";
    address = "";
}

User :: ~User()
{

}

string User :: getName()
{
    return this->firstName + ' ' + this -> surName;
}

void User :: getLogin()
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

#endif
