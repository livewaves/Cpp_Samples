// Hierarchical Inheritance
#include <iostream>
using namespace std;
// many derived classes from a single base class

// Base class
class Vehicle {
        public:
            void drive() {
                cout << "Vehicle is being driven." << endl;
            }
};

// Derived class Car inheriting from Vehicle
class Car : public Vehicle {
        public:
            void honk() {
                cout << "Car is honking." << endl;
            }
};

// Derived class Bike inheriting from Vehicle
class Bike : public Vehicle {
        public:
            void ringBell() {
                cout << "Bike is ringing bell." << endl;
            }
};

int main() {
    Car myCar;
    Bike myBike;

    myCar.drive(); // Accessing drive() from Vehicle through Car
    myCar.honk();  // Accessing honk() from Car

    myBike.drive();    // Accessing drive() from Vehicle through Bike
    myBike.ringBell(); // Accessing ringBell() from Bike

    return 0;
}
