#include <iostream>
#include <string>
using namespace std;

class TicketBooking
{
private:
    string name;
    int tickets;
    const int ticketPrice = 200;
    int totalAmount;

public:
    void bookTicket()
    {
        cout << "Enter Passenger Name: ";
        cin.ignore();
        getline(cin, name);

        cout << "Enter Number of Tickets: ";
        cin >> tickets;

        totalAmount = tickets * ticketPrice;

        cout << "\nTicket Booked Successfully!\n";
    }

    void cancelTicket()
    {
        tickets = 0;
        totalAmount = 0;
        cout << "Ticket Cancelled Successfully.\n";
    }

    void display()
    {
        cout << "\n----- Ticket Details -----\n";
        cout << "Passenger Name : " << name << endl;
        cout << "Tickets Booked : " << tickets << endl;
        cout << "Ticket Price   : Rs. " << ticketPrice << endl;
        cout << "Total Amount   : Rs. " << totalAmount << endl;
    }
};

int main()
{
    TicketBooking t;
    int choice;

    do
    {
        cout << "\n===== Ticket Booking System =====\n";
        cout << "1. Book Ticket\n";
        cout << "2. Cancel Ticket\n";
        cout << "3. Display Ticket Details\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            t.bookTicket();
            break;
        case 2:
            t.cancelTicket();
            break;
        case 3:
            t.display();
            break;
        case 4:
            cout << "Thank You!\n";
            break;
        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 4);

    return 0;
}