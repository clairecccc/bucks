#include <iostream>
#include <string>

using namespace std;

class show
{
public:
    show();
    ~show();
    void selectShow(string &showName, string &showDate);
    string selectTime();

protected:
    string showName;
    string showDate;
    string showTime;
};

show:: show()
{
    showName = "";
    showDate = "";
    showTime = "";
}

show :: ~show()
{

}

void show :: selectShow(string &showName, string &showDate)
{
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

    while(ch!='1' && ch!='2' && ch!='3') {
                cin.clear();
                cin.ignore(100, '\n');
                cout << "Please select a valid show number: ";
                cin.get(ch);
        }

    switch(ch)
    {
        case '1' : showName = "The Lion King", showDate = "21/05/2020";
        break;
        case '2' : showName = "Cats", showDate = "22/05/2020";
            break;
        case '3' : showName = "Fame", showDate = "23/07/2020";
            break;
    }

    this -> showName = showName;
    this -> showDate = showDate;

    cin.get(terminator);



}

//#ifndef BCPA_PROJECT_CUSTOMER_H
//#define BCPA_PROJECT_CUSTOMER_H
//
//#endif //BCPA_PROJECT_CUSTOMER_H
