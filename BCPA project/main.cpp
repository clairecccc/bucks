#include <iostream>
#include <string>
//#include "ticket.h"
//#include "show.h"
#include "customer.h"
//#include "showSeat.h"

using namespace std;



int main() {
    string a, b, c, f, g, h;
    int d;
    double e;
    char ch, terminator;

//    showSeat SEAT;
    customer CUST;
//    show SHOW;
//    ticket * TICK;
//
    CUST.getLogin();
//    CUST.getProfileInfo(f, g, h);

    system("clear");

    cout << "\n~~~~~~~~~~~~~~~~~ MAIN MENU ~~~~~~~~~~~~~~~~\n" << endl;
    cout << " 1. Buy tickets for upcoming shows" << endl;
    cout << " 2. Log out\n" << endl;
    cout << "Plese enter a menu choice number: ";
    cin.get(ch);

//    std::cout << "Hello, World!" << std::endl;
    return 0;
}
