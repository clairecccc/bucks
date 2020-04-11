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

protected:
    Show *show;
    User *user;
    int numOfSeats;
};

Ticket :: Ticket(Show s, User u, int n)
{
    show = &s;
    user = &u;
    numOfSeats = n;
}

Ticket :: ~Ticket()
{
}

void Ticket :: print() {
    system("clear");

    cout << "\n YOUR TICKETS\n" << endl;

    cout << "The Bucks Centre for Performing Arts" << endl;

    cout << "Show: " << this->show->getShowName() << endl;
    cout << "Date: " << this->show->getShowDate() << endl;
    cout << "Number of seats: " << this->numOfSeats << endl;
//    cout << "Total cost: " << (char)156 << this -> cost() << endl;
    cout << "Ticket Purchaser: " << this->user->getName() << endl;
}
