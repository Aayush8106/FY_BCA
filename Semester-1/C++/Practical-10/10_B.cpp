#include <iostream>
using namespace std;

class Counter {
private:
    int count;

public:
    Counter(int c = 0) {
        count = c;
    }

    void display() {
        cout << "Count: " << count << endl;
    }

    Counter& operator++() { // prefix ++
        count++;
        return *this;
    }

    Counter operator++(int) { // postfix ++
        Counter temp = *this;
        count++;
        return temp;
    }

    Counter& operator--() { // prefix --
        count--;
        return *this;
    }

    Counter operator--(int) { // postfix --
        Counter temp = *this;
        count--;
        return temp;
    }
};

int main() {
    Counter c(5);
    cout << "Initial ";
    c.display();
    cout << endl;

    cout << "Prefix ++ ";
    (++c).display();
    cout << "Postfix ++ ";
    (c++).display();
    cout << "\nCount after postfix ++ ";
    c.display();
    cout << endl;

    cout << "Prefix -- ";
    (--c).display();
    cout << "Postfix -- ";
    (c--).display();
    cout << "\nCount after postfix -- ";
    c.display();

    return 0;
}

