#ifndef SHOW_H
#define SHOW_H

#include <iostream>
#include <string>

using namespace std;

class Show
{
public:
    Show();
    ~Show();
    void selectShow(string &showName, string &showDate);
    string getShowName();
    string getShowDate();
    int getShowPrice();

protected:
    string showName;
    string showDate;
    int showPrice;
};

Show:: Show()
{
    showName = "";
    showDate = "";
    showPrice = 10; //default price for a ticket
}

Show :: ~Show()
{
}

string Show :: getShowName() {
    return this->showName;
}

string Show :: getShowDate() {
    return this->showDate;
}

int Show :: getShowPrice() {
    return this->showPrice;
}


void Show :: selectShow(string &showName, string &showDate) {
    char ch;
    char terminator;

    system("clear");

    cout << "\n~~~~~~~~~~ SELECT AN UPCOMING SHOW ~~~~~~~~~\n" << endl;
    cout << " 1. The Lion King (21/05/2020)" << endl;
    cout << " 2. Cats (22/05/2020)" << endl;
    cout << " 3. Fame (23/07/2020)\n" << endl;
    cout << "Please select a show number: ";
    cin.clear();
    cin.ignore(100, '\n');
    cin.get(ch);

    while (ch != '1' && ch != '2' && ch != '3') {
        cin.clear();
        cin.ignore(100, '\n');
        cout << "Please select a valid show number: ";
        cin.get(ch);
    }

    switch (ch) {
        case '1' :
            showName = "The Lion King", showDate = "21/05/2020", showPrice = 20;
            break;
        case '2' :
            showName = "Cats", showDate = "22/05/2020", showPrice = 15;
            break;
        case '3' :
            showName = "Fame", showDate = "23/07/2020", showPrice = 30;
            break;
    }

    this->showName = showName;
    this->showDate = showDate;

    cin.get(terminator);
}

#endif
