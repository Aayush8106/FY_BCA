#include <iostream>
using namespace std;

class Counter {
private:
    int count;

public:
    Counter(int c = 0) {
        count = c;
    }

    ~Counter() {
        cout << "\nDestructor called.\n Final count: " << count << endl;
    }

    void inc() {
        count++;
    }

    void dec() {
        count--;
    }

    void display() {
        cout << "Count: " << count << endl;
    }
};

int main() {
    Counter c1;
    cout<<"Constructor with default parameter\n";c1.display();cout<<endl;
    
    Counter c2(5);
    c2.inc();
   cout<<"Inc "; c2.display();
    c2.dec();
   cout<<"Dec "; c2.display();

    return 0;
}