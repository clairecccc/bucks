#include <iostream>
#include <string>
#include "show.h"
#include "user.h"

using namespace std;

class Ticket
{
public:
    Ticket(Show show, User user, int numOfSeats);
    ~Ticket();
    void print();
    void setPrice(double price);

protected:
    Show show;
    User user;
    int numOfSeats;
    double totalCost;
};

Ticket :: Ticket(Show s, User u, int n)
{
    show = s;
    user = u;
    numOfSeats = n;
}

Ticket :: ~Ticket()
{
}

void Ticket :: print() {
    system("clear");

    cout << "\n YOUR TICKET SUMMARY IS BELOW\n" << endl;

    cout << "The Bucks Centre for Performing Arts" << endl;

    cout << "Show: " << this->show.getShowName() << endl;
    cout << "Date: " << this->show.getShowDate() << endl;
    cout << "Number of seats: " << this->numOfSeats << endl;
    // cout << "Total cost og your tickets: " << (char)156 << this -> cost() << endl;
    cout << "Ticket Purchaser: " << this->user.getName() << endl;
    cout << "Address to invoice: " << this->user.getAddress() << endl;
}
