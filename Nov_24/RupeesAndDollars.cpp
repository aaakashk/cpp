// write a cpp program that has 2 classes Rupees and dollars - friend function
// getMonetaryValue
#include <iostream>
using namespace std;

class Rupees;
class Dollars {
    int dollars;

   public:
    void getData() {
        cout << "Enter the dollars here: $";
        cin >> dollars;
    }
    friend void getMonetaryValue(Dollars &, Rupees &);
};

class Rupees {
    int rupees;

   public:
    void getData() {
        cout << "Enter the rupees here: ₹";
        cin >> rupees;
    }
    friend void getMonetaryValue(Dollars &, Rupees &);
};

void getMonetaryValue(Dollars &d, Rupees &r) {
    float totalDollars, totalRupees;
    int choice;
    cout << "1. Rupees to Dollars conversion\n2. Dollars to Rupees "
            "conversion\nEnter your choice: ";
    cin >> choice;
    if (choice == 1) {
        totalDollars = (float)d.dollars + (float)r.rupees / 70;
        cout << "Total\t\t : $" << totalDollars << endl;
    } else if (choice == 2) {
        totalRupees = (float)r.rupees + (float)d.dollars * 70;
        cout << "Total\t\t : ₹" << totalRupees << endl;
    } else
        cout << "Wrong choice." << endl;
}

int main() {
    Dollars usd;
    Rupees rs;
    usd.getData();
    rs.getData();
    getMonetaryValue(usd, rs);
    return 0;
}