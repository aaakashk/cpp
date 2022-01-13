#include <iostream>

class Vehicle {
   protected:
    float mileage, price;

   public:
    Vehicle(float mil, float p) : mileage(mil), price(p) {}
};

class Car : public Vehicle {
   protected:
    int ownershipCost, seatingCapacity, warranty;
    std::string fuelType;

   public:
    Car(int ownerCost, int warranty, int sC, std::string fueltype, float mil, float p)
        : ownershipCost(ownerCost), warranty(warranty), seatingCapacity(sC), fuelType(fueltype), Vehicle(mil, p) {}
    void carDetails() {
        std::cout << "Ownership Cost: " << ownershipCost << "\n"
                  << "Warranty (in years): " << warranty << "\n"
                  << "Seating Capacity: " << seatingCapacity << "\n"
                  << "Fuel Type: " << fuelType << "\n"
                  << "Mileage: " << mileage << "\n"
                  << "Prict: $" << price << "\n";
    }
};

class Bike : public Vehicle {
   protected:
    int numberOfCylinders, numberOfGears;
    float fuelTankSize;
    std::string coolingType, wheelType;

   public:
    Bike(int cyn, int gears, float tank, std::string cooltype, std::string wheel, float mil, float p)
        : numberOfCylinders(cyn), numberOfGears(gears), fuelTankSize(tank), coolingType(cooltype), wheelType(wheel), Vehicle(mil, p) {}
    void bikeDetails() {
        std::cout << "Number of cylinders: " << numberOfCylinders << "\n"
                  << "Number of Gears : " << numberOfGears << "\n"
                  << "Fuel Tank Size : " << fuelTankSize << "\n"
                  << "Cooling Type : " << coolingType << "\n"
                  << "Wheel Type: " << wheelType << "\n";
    }
};

class Audi : public Car {
    std::string modelType;

   public:
    Audi(std::string modeltype, int ownerCost, int warranty, int sC, std::string fueltype, float m, float p)
        : modelType(modeltype), Car(ownerCost, warranty, sC, fueltype, m, p) {}
    void displayModelType() {
        std::cout << "--------------AUDI------------\n"
                  << "Model Type: " << modelType << "\n";
    }
};

class Ford : public Car {
    std::string modelType;

   public:
    Ford(std::string modeltype, int ownerCost, int warranty, int sC, std::string fueltype, float m, float p)
        : modelType(modeltype), Car(ownerCost, warranty, sC, fueltype, m, p) {}
    void displayModelType() {
        std::cout << "---------------FORD----------------\n"
                  << "Model Type: " << modelType << "\n";
    }
};

class Bajaj : public Bike {
    std::string makeType;

   public:
    Bajaj(std::string make, int cyn, int gears, float tank, std::string cooltype, std::string wheel, float m, float p)
        : makeType(make), Bike(cyn, gears, tank, cooltype, wheel, m, p) {}
    void displayMakeType() {
        std::cout << "---------------BAJAJ--------------\n"
                  << "Make Type : " << makeType << "\n";
    }
};

class TVS : public Bike {
    std::string makeType;

   public:
    TVS(std::string make, int cyn, int gears, float tank, std::string cooltype, std::string wheel, float m, float p)
        : makeType(make), Bike(cyn, gears, tank, cooltype, wheel, m, p) {}
    void displayMakeType() {
        std::cout << "---------------TVS--------------\n"
                  << "Make Type : " << makeType << "\n";
    }
};

int main() {
    Audi audi("Audi R8", 197000, 4, 2, "Petrol", 5.71, 197000);
    Ford ford("Mustang 2022", 175000, 4, 2, "Petrol", 15.5, 175000);
    Bajaj bajaj("Bajaj NS 200", 1, 5, 12, "Liquid Cooling", "Alloy", 35, 173000);
    TVS tvs("TVS Apache GP 165R", 1, 5, 11, "Oil Cooled", "Alloy", 40, 260000);
    audi.displayModelType();
    audi.carDetails();
    ford.displayModelType();
    ford.carDetails();
    bajaj.displayMakeType();
    bajaj.bikeDetails();
    tvs.displayMakeType();
    tvs.bikeDetails();
}