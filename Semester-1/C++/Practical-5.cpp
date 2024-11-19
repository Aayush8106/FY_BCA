#include<iostream>
using namespace std;

class Circle {
public:
    double radius, area, circumference;

    void setRadius() {
        cout << "Enter value of radius (in cm): ";
        cin >> radius;
    }

    double getRadius() {
        return radius;
    }

    void calculateArea() {
        area = 3.14159 * radius * radius;
        cout << "Area: " << area << " cm^2" << endl;
    }

    void calculateCircumference() {
        circumference = 2 * 3.14159 * radius;
        cout << "Circumference: " << circumference << " cm" << endl;
    }
};

int main() {
    Circle c;
    c.setRadius();
    cout << "Radius: " << c.getRadius() << " cm" << endl;
    c.calculateArea();
    c.calculateCircumference();
    return 0;
}
