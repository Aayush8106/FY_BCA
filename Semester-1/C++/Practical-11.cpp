#include <iostream>
#include<cmath>
using namespace std;

class Complex {
private:
    double real;
    double img;

public:
    Complex(double r = 0, double i = 0) {
        real = r;
        img = i;
    }

    void setComplex(double r, double i) {
        real = r;
        img = i;
    }

    void getComplex() {
        cout << "Real part: " << real << endl;
        cout << "Imaginary part: " << img << endl;
    }

    void display() {
        if (img >= 0)
            cout << real << " + " << img << "i" << endl;
        else
            cout << real << " - " << abs(img) << "i" << endl;
    }

    Complex operator+(Complex c) {
        return Complex(real + c.real, img + c.img);
    }

    Complex operator-(Complex c) {
        return Complex(real - c.real, img - c.img);
    }

    Complex operator*(Complex c) {
        return Complex(real * c.real - img * c.img, real * c.img + img * c.real);
    }

    Complex operator/(Complex c) {
        double denominator = c.real * c.real + c.img * c.img;
        return Complex((real * c.real + img * c.img) / denominator, (img * c.real - real * c.img) / denominator);
    }
};

int main() {
    Complex c1(3, 4);
    Complex c2(2, 1);

    cout << "Complex number 1: ";
    c1.display();

    cout << "Complex number 2: ";
    c2.display();
    cout << endl;

    Complex sum = c1 + c2;
    cout << "Sum: ";
    sum.display();

    Complex difference = c1 - c2;
    cout << "Difference: ";
    difference.display();

    Complex product = c1 * c2;
    cout << "Product: ";
    product.display();

    Complex quotient = c1 / c2;
    cout << "Quotient: ";
    quotient.display();

    return 0;
}