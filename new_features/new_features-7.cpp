#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int width;

public:
    // Default constructor
    Rectangle() {
        length = 0; // Default length
        width = 0;  // Default width
    }

    // Parameterized constructor
    Rectangle(int l, int w): Rectangle() {
        setDimensions(l, w);
    }

    // Function to set dimensions
    void setDimensions(int l, int w) {
        length = l;
        width = w;
    }

    // Function to calculate area
    int area() {
        return length * width;
    }
};

int main() {
    Rectangle defaultRect; // Creating a rectangle with default dimensions
    cout << "Default Rectangle Area: " << defaultRect.area() << endl;

    Rectangle customRect(5, 3); // Creating a rectangle with custom dimensions
    cout << "Custom Rectangle Area: " << customRect.area() << endl;

    return 0;
}