#include <iostream>
using namespace std;

class Period {
private:
    int hours;
    int minutes;

public:
    // Function to set hours and minutes
    void setHours(int h) {
        hours = h;
    }

    void setMinutes(int m) {
        minutes = m;
    }

    // Function to display period
    void display() {
        cout << hours << " hours " << minutes << " minutes" << endl;
    }

    // Friend function to add two periods
    friend Period add(Period p1, Period p2);
};

// Friend function to add two periods
Period add(Period p1, Period p2) {
    Period sum;
    sum.hours = p1.hours + p2.hours;
    sum.minutes = p1.minutes + p2.minutes;

    // Convert extra minutes to hours
    sum.hours += sum.minutes / 60;
    sum.minutes %= 60;

    return sum;
}

int main() {
    Period p1, p2;

    p1.setHours(2);
    p1.setMinutes(30);

    p2.setHours(3);
    p2.setMinutes(45);

    cout << "Period 1: ";
    p1.display();

    cout << "Period 2: ";
    p2.display();

    Period sum = add(p1, p2);

    cout << "\nSum of Periods:\n ";
    sum.display();
    cout<<endl;
    return 0;
}