#include <iostream>
#include <string>
#include "show.h"
#include "user.h"

using namespace std;

class Ticket
{
public:
    Ticket(Show show, User user);
    ~Ticket();
    void print();

protected:
    Show *show;
    User *user;
};

Ticket :: Ticket(Show s, User u)
{
    show = &s;
    user = &u;
}

Ticket :: ~Ticket()
{
}

void Ticket :: print()
{
    system ("clear");

    cout << "\n YOUR TICKETS\n" << endl;

    cout << "The Bucks Centre for Performing Arts" <<endl;

    cout << "Show: " << this -> show -> getShowName() << endl;
    cout << "Date: " << this -> show -> getShowDate() << endl;

//    cout << "Number of seats: " <<numSeats <<endl;
//    cout << "Total cost: " << (char)156 << this -> cost() << endl;
    cout << "Ticket Purchaser: " << this->user->getName() << endl;
}
