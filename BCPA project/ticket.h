#include <iostream>
#include <string>

using namespace std;

class ticket
{
public:
    ticket();
    ~ticket();
    void setPrice(double price);
    void printTicket(string showName, string showDate, string showTime, int numSeats, string fName, string sName, string address);
    virtual double cost() = 0;

protected:
    double totalCost;
    };

ticket :: ticket()
{
    totalCost = 0;
}

ticket :: ~ticket()
{
}

void ticket :: setPrice(double price)
{
    totalCost = price;
    cout << "/nThe total price of your tickets is " << (char)156 << this -> cost() << ".\n" << endl;
 }

 void ticket :: printTicket(string showName, string showDate, string showTime, int numSeats, string fName, string sName, string address)
 {
    system ("clear");

    cout << "\n YOUR TICKETS\n" << endl;

    cout << "The Bucks Centre for Performing Arts" <<endl;

    cout << "Show: " << showName << endl;
    cout << "Date: " << showDate << endl;

    cout << "Number of seats: " <<numSeats <<endl;
    cout << "Total cost: " << (char)156 << this -> cost() << endl;
    cout << "Ticket Purchaser: " << fName << " " << sName << endl;
     }