#include <iostream>
using std::cin;
using std::cout;

class Invoice {
    std::string partNumber, partDescription;
    int quantity;
    double price_per_item;

   public:
    Invoice() {
        partNumber = "";
        partDescription = "";
        quantity = 0;
        price_per_item = 0.0;
    }
    //getters and setter for each instance variable
    void setPartNumber(std::string pn) {
        partNumber = pn;
    }
    std::string getPartNumber() {
        return partNumber;
    }

    void setPartDescription(std::string pd) {
        partDescription = pd;
    }
    std::string getPartDescription() {
        return partDescription;
    }

    void setQuantity(int q) {
        quantity = q;
    }
    int getQuantity() {
        return quantity;
    }

    void setPrice(double p) {
        price_per_item = p;
    }
    double getPrice() {
        return price_per_item;
    }
    //actual function
    double getInvoiceAmount() {
        if (quantity < 0)
            quantity = 0;
        if (price_per_item < 0)
            price_per_item = 0.0;
        return quantity * price_per_item;
    }
};

int main() {
    std::string partnum, description;
    int q;
    double p;
    Invoice invoiceTest;

    cout << "Enter the part number: ";
    getline(cin, partnum);
    invoiceTest.setPartNumber(partnum);
    cout << "Enter the part description: ";
    getline(cin, description);
    invoiceTest.setPartDescription(description);

    cout << "Enter the number of items: ";
    cin >> q;
    invoiceTest.setQuantity(q);
    cout << "Enter the price of 1 item: ";
    cin >> p;
    invoiceTest.setPrice(p);

    cout << "Total\t\t\t : " << invoiceTest.getInvoiceAmount();
}