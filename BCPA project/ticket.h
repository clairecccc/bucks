#include <iostream>
#include <string>
#include "show.h"

using namespace std;

class ticket
{
public:
    ticket(Show show);
    ~ticket();
    void print();

protected:
    Show *show;
};

ticket :: ticket(Show s)
{
    show = &s;
}

ticket :: ~ticket()
{
}

void ticket :: print()
{
    system ("clear");

    cout << "\n YOUR TICKETS\n" << endl;

    cout << "The Bucks Centre for Performing Arts" <<endl;

    cout << "Show: " << this -> show -> getShowName() << endl;
    cout << "Date: " << this -> show -> getShowDate() << endl;

//    cout << "Number of seats: " <<numSeats <<endl;
//    cout << "Total cost: " << (char)156 << this -> cost() << endl;
//    cout << "Ticket Purchaser: " << fName << " " << sName << endl;
}
