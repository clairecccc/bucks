#include <iostream>
#include <string>
#include "ticket.h"
#include "show.h"
#include "user.h"
#include "showSeat.h"

using namespace std;

int main() {
    string a, b, c, f, g, h;
    int numOfSeats;
    double e;
    char ch, terminator;

    ShowSeat showSeat;
    User user;
    Show show;

    user.getLogin();

    system("clear");

    cout << "\n~~~~~~~~~~~~~~~~~ MAIN MENU ~~~~~~~~~~~~~~~~\n" << endl;
    cout << " 1. Buy tickets for upcoming shows" << endl;
    cout << " 2. Log out\n" << endl;
    cout << "Please enter a menu choice number: ";
    cin.get(ch);

    while (ch != '1' && ch != '2') {
        cin.clear();
        cin.ignore(100, '\n');
        cout << "Please select a valid menu choice number: ";
        cin.get(ch);
    }

    if (ch == '2') {
        return EXIT_SUCCESS;
    }

    do {
        show.selectShow(a, b);
        do {
            cout << "\nAre you happy with your choice (Y = Yes, N = No)?: ";
            cin.get(ch);
        } while (ch != 'Y' && ch != 'y' && ch != 'N' && ch != 'n');
        cin.get(terminator);

    } while (ch == 'N' || ch == 'n');


    showSeat.initialiseFloorPlan();
    numOfSeats = showSeat.getNumSeats();

    for (int seat = 0; seat < numOfSeats; seat++) {
        e = showSeat.getSeatSelection(); // [rowNumber, columnNumber]
    }

    Ticket ticket(show, user, numOfSeats);
    ticket.print();

    cout << "Thank you for your booking. An invoice is on it's way to you." << endl;
    return EXIT_SUCCESS;
}
