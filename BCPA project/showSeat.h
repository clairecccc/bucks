#include <iostream>
#include <string>

using namespace std;

class showSeat
{
public:
    showSeat();
    ~showSeat();
    void initialiseFloorPlan();
    int getNumSeats();
    double getSeatSelection();

private:
    void displayFloorPlan(int row, int column);
    void calculatePrice(double &price);

protected:
    char floorPlan[7][6];
    int numSeats;
    int rNum;
    double price;

};

showSeat :: showSeat()
{
    for(int row = 0; row <7; row ++)
        for(int column= 0; column < 6; column++)
            floorPlan[row][column] = '0';

        numSeats = 0;
        rNum = 0;
        price = 0;
}

showSeat :: ~showSeat()
{
}

void showSeat :: initialiseFloorPlan()
{
    for(int row= 0; row < 7; row++)
        for(int column = 0; column <6; column++)
            floorPlan[row][column] = 'A';
}

int showSeat :: getNumSeats() {
    system("clear");
    cout << "\n SELECT SEATS INTERACTIVELY\n" << endl;



        while (numSeats !=1 && numSeats !=2)
    {
        cin.clear();
        cin.ignore(100, '\n');
        cout << "How many tickets would you like to purchase (Max. 2)?: ";
        cin >> numSeats;
        cout << endl;
    }

    return numSeats;
}

double showSeat :: getSeatSelection()
{
    int selectedColumn;
    int selectedRow;
    displayFloorPlan(7,6);
    cout << "Please enter a row number (1-7) for seat 1: ";
    cin >> selectedRow;
    cout << "Please enter a column number (1-6) for seat 1: ";
    cin >> selectedColumn;
    floorPlan[selectedRow-1][selectedColumn-1] = 'H';
    displayFloorPlan(7,6);
}

void showSeat :: displayFloorPlan(int r, int c)
{
    cout << "\nNow you can select your seats using the table and key below\n";
    cout << "\nKey\n";
    cout << "A = Available seat, H = Held seat" << endl;
    cout << "-----------------------------------";
    cout << endl;
    cout << endl;
    // write out headers of columns
    cout << "   |";
    for (int column = 0; column < c; column ++) {
        cout << " ";
        cout << column +1;
        cout << " |";
    }
    cout << endl;


    for (int row = 0; row < r; row ++) {
        cout << "--";
        cout << endl;
        cout << row +1;
        cout << "  ";
        for (int column = 0; column < c; column++) {
            cout << "  ";
            cout << floorPlan[row][column];
            cout << " ";
        }
        cout << endl;
    }
    cout << endl;





//    for(int row= 0; row < r; row++) {
//        for (int column = 0; column < c; column++) {
//            cout << " column ";
//            cout << column;
//            cout << " row ";
//            cout << row;
//            cout << " - ";
//            cout << floorPlan[row][column];
//            cout << endl;
//        }
//    }
}


//
//#ifndef BCPA_PROJECT_SHOWSEAT_H
//#define BCPA_PROJECT_SHOWSEAT_H
//
//#endif //BCPA_PROJECT_SHOWSEAT_H
