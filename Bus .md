# bus-ticket
#include <iostream>
using namespace std;

class Bus {
private:
    string destination;
    string departure_time;
    int num_seats;
    int reserved_seats;
    int seat_cost;

public:
    Bus(string dest, string dep_time) {
        destination = dest;
        departure_time = dep_time;
        num_seats = 50;
        reserved_seats = 0;
        seat_cost = 1250;
    }

    void check_seat_availability() {
    int available_seats = num_seats - reserved_seats;
    cout << "\tAvailable seats:\n" <<"\tያልተያዘ ወንበር : " <<  available_seats << endl;

    cout << "\n\tReserved seats:\n "<<"\tየተያዘ ወንበር :\n";
    for (int i = 1; i <= num_seats; i++) {
        if (i <= reserved_seats) {
            cout << i << " ";
        } else {
            cout << " - ";
        }
    }
    cout << endl;
    }

    void reserve_seat() {
        int seat_num;
        cout << "\n\tEnter seat number:\n"<<"\t የወንበር  ቁጥር  ያስገቡ :";
        cin >> seat_num;

        if (seat_num > num_seats || seat_num <= 0) {
            cout << "\n\tInvalid seat number! \n"<<" \t የተሳሳተ የወንበር ቁጥር :"<< endl;
        }
        else {
            if (reserved_seats < num_seats) {
                reserved_seats++;
                cout << "\n\tSeat - "<< seat_num << "reserved successfully !\n"<<"\t ወንበር ቁጥር - " << seat_num <<" በተሳካ ሁኔታ ተይዟል !\n"<< endl;
            }
            else {
                cout << "Seat " << seat_num << " is already reserved!" << endl;
           cout <<"\t ወንበር ቁጥር - "<< seat_num << "ተይዟል !\n"<<endl;
            }
        }
    }

    int num_available_seats() {
        return num_seats - reserved_seats;
    }

    int calculate_cost(int num_seats) {
        return num_seats * seat_cost;
    }

    void change_bus_details(string dest, string dep_time) {
        destination = dest;
        departure_time = dep_time;
        cout << "\n\t Bus details updated ! \n"<<"\tየተሻሻለ አሁናዊ የባስ ዝርዝር መረጃ ! \n" << endl;
    }
};

int main() {
    Bus my_bus("Bahirdar", " 04:00 AM ");
    int choice;
    bool change_details = false; 
    do {
        cout << "\t Welcome to Biruk's Bus Reservation System ! \n" <<"\t እንኳን ወደ ብሩክ የጉዞ ወንበር ማዘዣ በደህና መጡ !\n";
        cout << "\n\t 1.Check available seats \n"<<" \t አሁናዊ የወንበር ሁኔታ\n "<< endl;
        cout << "\t 2.Reserve a seat\n"<<" \t  ወንበር ለመያዝ \n"<< endl;
        cout << "\t 3.Change bus details\n "<<"\t የባስ መረጃ ዝርዝር "<<endl;
        cout << "\n\t 4.Exit\n "<<"\t ለመውጣት \n "<< endl;
        cout << "\t Enter your choice: \n"<<"\t ምርጫዎን ያስገቡ : \t";
        cin >> choice;

        switch (choice) {
        case 1:
            my_bus.check_seat_availability();
            break;
        case 2:
            my_bus.reserve_seat();
            break;
        case 3:
            {
                string new_dest;
                string new_dep_time;
                cout << "\n\t Enter new destination:\n"<<"\t አዲስ መዳረሻ ቦታ ያስገቡ : ";
                cin >> new_dest;
                cout << "\n\t Enter new departure time:\n"<<"\t አዲስ መነሻ ሰዓት ያስገቡ :\n ";
                cin >> new_dep_time;
                change_details = true; 
                
                break;
            }
        case 4:
            cout << "\n\t Exiting program...\n"<<"\t ለመውጣት \n"<< endl;
            break;
        default:
            cout << "\n\tInvalid choice! Please try again.\n" <<"\t የተሳሳተ ምርጫ , እባክዎ ከእንደገና ይሞክሩ :\n " << endl;
            continue;
        }

        if (change_details) {
    
            change_details = false; // Reset the flag after changing bus details
        }
    } while (choice != 4);

    return 0;
}
