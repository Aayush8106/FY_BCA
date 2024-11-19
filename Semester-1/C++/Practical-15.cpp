#include <iostream>
using namespace std;

template <class T>
class Swap {
public:
    void swapValues(T &a, T &b) {
        T temp = a;
        a = b;
        b = temp;
    }
};

int main() {
    int num1 = 10, num2 = 20;
    float f1 = 10.5f, f2 = 20.5f;
    char c1 = 'A', c2 = 'B';

    cout << "Initial values:" << endl;
    cout << "Integers: " << num1 << ", " << num2 << endl;
    cout << "Floats: " << f1 << ", " << f2 << endl;
    cout << "Characters: " << c1 << ", " << c2 << endl;
    cout << endl;

    Swap<int> intSwap;
    intSwap.swapValues(num1, num2);
    cout << "Swapped integers: " << num1 << ", " << num2 << endl;

    Swap<float> floatSwap;
    floatSwap.swapValues(f1, f2);
    cout << "Swapped floats: " << f1 << ", " << f2 << endl;

    Swap<char> charSwap;
    charSwap.swapValues(c1, c2);
    cout << "Swapped characters: " << c1 << ", " << c2 << endl;

    return 0;
}