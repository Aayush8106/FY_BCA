#include <iostream>
using namespace std;

class Animal {
protected:
    string name;
public:
    void setName(string n) {
        name = n;
    }
    void display() {
        cout << "Name: " << name << endl;
    }
};

class Mammal : public Animal {
private:
    string species;
public:
    void setSpecies(string s) {
        species = s;
    }
    void displaySpecies() {
        display();
        cout << "Species: " << species << endl;
    }
};

class Carnivore : private Mammal {
private:
    string diet;
public:
    void setDiet(string d) {
        diet = d;
    }
    void displayDetails() {
        Mammal::display();
        cout << "Diet: " << diet << endl;
    }
    void setMammalName(string n) {
        Mammal::setName(n);
    }
    void setMammalSpecies(string s) {
        Mammal::setSpecies(s);
    }
};

class Lion : public Carnivore {
public:
    void displayLionDetails() {
        Carnivore::displayDetails();
        cout << "Type: Lion" << endl;
    }
};

int main() {
    Lion lion;
    lion.setMammalName("Simba");
    lion.setMammalSpecies("Panthera leo");
    lion.setDiet("Meat");
    lion.displayLionDetails();
    return 0;
}