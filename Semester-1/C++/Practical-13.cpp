#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() {
        cout << "Drawing a shape." << endl;
    }
    virtual void calculateArea() {
        cout << "Calculating area of shape." << endl;
    }
    void display() {
        cout << "Displaying shape." << endl;
    }
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a circle." << endl;
    }
    void calculateArea() override {
        cout << "Calculating area of circle." << endl;
    }
};

class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing a rectangle." << endl;
    }
    void calculateArea() override {
        cout << "Calculating area of rectangle." << endl;
    }
};

int main() {
    Shape* shape = new Shape();
    Circle* circle = new Circle();
    Rectangle* rectangle = new Rectangle();

    shape->draw();
    shape->calculateArea();
    shape->display();

    cout << endl;

    circle->draw();
    circle->calculateArea();
    circle->display();

    cout << endl;

    rectangle->draw();
    rectangle->calculateArea();
    rectangle->display();

    delete shape;
    delete circle;
    delete rectangle;

    return 0;
}