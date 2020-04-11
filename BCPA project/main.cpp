#include <iostream>
#include <string>
#include "ticket.h"
#include "show.h"
#include "customer.h"
#include "showSeat.h"

using namespace std;



int main() {
    string a, b, c, f, g, h;
    int numOfSeats;
    double e;
    char ch, terminator;

    showSeat SEAT;
    customer CUST;
    Show SHOW;
//     ticket * TICK;

    CUST.getLogin();
    //CUST.getProfileInfo(f, g, h);

    system("clear");

    cout << "\n~~~~~~~~~~~~~~~~~ MAIN MENU ~~~~~~~~~~~~~~~~\n" << endl;
    cout << " 1. Buy tickets for upcoming shows" << endl;
    cout << " 2. Log out\n" << endl;
    cout << "Please enter a menu choice number: ";
    cin.get(ch);

    while(ch!='1' && ch!='2') {
        cin.clear();
        cin.ignore(100, '\n');
        cout << "Please select a valid menu choice number: ";
        cin.get(ch);
    }

    if (ch == '2') {
        return EXIT_SUCCESS;
    }

    do {
        SHOW.selectShow(a, b);
        // c = SHOW.selectTime();

        do
            {
            cout << "\nAre you happy with your choice (Y = Yes, N = No)?: ";
            cin.get(ch);
                    }
        while (ch != 'Y' && ch != 'y' && ch != 'N' && ch != 'n');
        cin.get(terminator);

    }
    while (ch == 'N' || ch == 'n');


    SEAT.initialiseFloorPlan();
    numOfSeats = SEAT.getNumSeats();
    // for 1 to numOfSeats do {

    for (int seat = 0; seat < numOfSeats; seat ++) {
        e = SEAT.getSeatSelection();

        ticket TICK(SHOW);
        TICK.print();
    }



        // create ticket using SHOW.name, customer.name, e.row and e.column

    //}



    cout << "All done. Goodbye!" << endl;
    return EXIT_SUCCESS;
}
