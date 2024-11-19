                                                #include<iostream>
using namespace std;

class Distance {
private:
    int feet;
    int inches;

public:
    void setValue(int f, int i) {
        feet = f;
        inches = i;
    }

    void getUserValue() {
        cout << "Distance in feet: ";
        cin >> feet;
        cout << "Distance in inches: ";
        cin >> inches;
    }

    void displayDistance() {
        cout << " Feet = " << feet << ", Inches = " << inches << endl;
    }

    void addDistance(Distance d, int &totalFeet, int &totalInches) {
        totalFeet = feet + d.feet;
        totalInches = inches + d.inches;

        if (totalInches >= 12) {
            totalFeet += totalInches / 12;
            totalInches %= 12;
        }
    }
};

int main() {
    Distance d1, d2;
    d1.setValue(5, 10);
    cout <<"Initial distance 1:- \n";
    d1.displayDistance();

    cout <<"\nEnter second distance:- \n";
    d2.getUserValue();
    cout << "\n Initial distance:- \n";
    d2.displayDistance();

    int totalFeet, totalInches;
    d1.addDistance(d2, totalFeet, totalInches);
    cout << "\n Sum of Distance:- \n";
    cout << " Feet = " << totalFeet << ", Inches = " << totalInches << endl;
    cout<<endl;
    return 0;
}